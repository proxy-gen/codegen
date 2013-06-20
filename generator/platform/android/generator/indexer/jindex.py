#!/usr/bin/env python

# ORIGINAL SOURCE
#===- cindex.py - Python Indexing Library Bindings -----------*- python -*--===#
#
#                     The LLVM Compiler Infrastructure
#
# This file is distributed under the University of Illinois Open Source
# License. See LICENSE.TXT for details.
#
#===------------------------------------------------------------------------===#

# MODIFIED 
#
# 2/14/2013
# rvergis@zynga.com Added support for indexing Java classes 

from ctypes import *
import collections
import logging
import sys

def load_jindex_library(lib_name):
    # FIXME: It's probably not the case that the library is actually found in
    # this location. We need a better system of identifying and loading the
    # CIndex library. It could be on path or elsewhere, or versioned, etc.
    lib = None
    import platform
    name = platform.system()
    if name == 'Darwin':
        lib = cdll.LoadLibrary(lib_name + '.dylib')
    elif name == 'Windows':
        lib = cdll.LoadLibrary(lib_name + '.dll')
    else:
        lib = cdll.LoadLibrary(lib_name + '.so')
    return lib

# ctypes doesn't implicitly convert c_void_p to the appropriate wrapper
# object. This is a problem, because it means that from_parameter will see an
# integer and pass the wrong value on platforms where int != void*. Work around
# this by marshalling object arguments as void**.
c_object_p = POINTER(c_void_p)

lib_name = "libCXXGenerator"
lib = load_jindex_library(lib_name)

### Exception Classes ###

class TranslationUnitLoadError(Exception):
    pass

class TranslationUnitSaveError(Exception):
    pass

class CursorKind(object):

    _kinds = []
    _name_map = None

    def __init__(self, value):
        if value >= len(CursorKind._kinds):
            CursorKind._kinds += [None] * (value - len(CursorKind._kinds) + 1)
        if CursorKind._kinds[value] is not None:
            raise ValueError, "CursorKind already loaded"
        self.value = self._as_parameter_ = value
        CursorKind._kinds[value] = self
        CursorKind._name_map = None

    def from_param(self):
        return self.value

    @property
    def name(self):
        if self._name_map is None:
            self._name_map = {}
            for key,value in CursorKind.__dict__.items():
                if isinstance(value, CursorKind):
                    self._name_map[value] = key
        return self._name_map[self]

    @property
    def id(self):
        return self.value

    @staticmethod
    def from_id(id):
        if id >= len(CursorKind._kinds) or CursorKind._kinds[id] is None:
            raise ValueError, "Unknown cursor kind"
        return CursorKind._kinds[id]

    @staticmethod
    def get_all_kinds():
        return filter(None, CursorKind._kinds)

    def __repr__(self):
        return 'CursorKind.%s' % (self.name,)


CursorKind.CLASS_DECL = CursorKind(4)
CursorKind.ENUM_DECL = CursorKind(5)
CursorKind.CONSTRUCTOR_DECL = CursorKind(7)
CursorKind.FUNCTION_DECL = CursorKind(8)
CursorKind.RETURN_DECL = CursorKind(9)
CursorKind.PARAM_DECL = CursorKind(10)
CursorKind.CONSTRUCTOR = CursorKind(24)
CursorKind.DESTRUCTOR = CursorKind(25)
CursorKind.INVALID_FILE = CursorKind(70)
CursorKind.NO_DECL_FOUND = CursorKind(71)
CursorKind.NOT_IMPLEMENTED = CursorKind(72)
CursorKind.INVALID_CODE = CursorKind(73)

### Cursors ###

class Cursor(Structure):

    _fields_ = [("_kind_id", c_int),("_tu_id", c_longlong)]

    def from_result(res, fn, args):
        assert isinstance(res, Cursor)
        tu = None
        for arg in args:
            if isinstance(arg, TranslationUnit):
                tu = arg
                break

            if hasattr(arg, 'translation_unit'):
                tu = arg.translation_unit
                break

        assert tu is not None

        res._tu = tu
        return res

    def get_children(self):

        def visitor(child, parent, children):
            children.append(child)
            return 1
        children = []
        Cursor_visit(self, Cursor_visit_callback(visitor), children)
        return children

    @property
    def kind(self):
        return CursorKind.from_id(self._kind_id)

    @property
    def displayname(self):
        if not hasattr(self, '_displayname'):
            self._displayname = Cursor_displayname(self)
        return self._displayname

    @property
    def description(self):
        if not hasattr(self, '_description'):
            self._description = Cursor_description(self)
        return self._description

    @property
    def type(self):
        if not hasattr(self, '_type'):
            self._type = Cursor_type(self)
        return self._type

    @property
    def translation_unit(self):
        if not hasattr(self, '_tu'):
            tu_id = Cursor_translationUnit(self)
            self._tu = TranslationUnit(tu_id)
        return self._tu

    @property
    def enum_values(self):
        def visitor(enum_value, enum_values):
            enum_values.append(enum_value)
            return 1
        enum_values = []
        Cursor_enum_values(self, self.type, Cursor_enum_values_callback(visitor), enum_values)
        return enum_values

    @property
    def parent_name(self):
        if not hasattr(self, '_parent_name'):
            self._parent_name = Cursor_parent_name(self)
        return self._parent_name

class TypeKind(object):

    _kinds = []
    _name_map = None

    def __init__(self, value):
        if value >= len(TypeKind._kinds):
            TypeKind._kinds += [None] * (value - len(TypeKind._kinds) + 1)
        if TypeKind._kinds[value] is not None:
            raise ValueError,'TypeKind already loaded'
        self.value = value;
        TypeKind._kinds[value] = self
        TypeKind._name_map = None

    def from_param(self):
        return self.value

    @property
    def name(self):
        if self._name_map is None:
            self._name_map = {}
            for key,value in TypeKind.__dict__.items():
                if isinstance(value,TypeKind):
                    self._name_map[value] = key
        return self._name_map[self]

    @property
    def id(self):
        return self.value

    @staticmethod
    def from_id(id):
        if id >= len(TypeKind._kinds) or TypeKind._kinds[id] is None:
            raise ValueError,'Unknown type kind %d' % id
        return TypeKind._kinds[id]

    @staticmethod
    def from_name(name):
        for key,value in TypeKind.__dict__.items():
                if isinstance(value,TypeKind):
                    return value
        return None

    def __repr__(self):
        return 'TypeKind.%s' % (self.name,)

TypeKind.UNKNOWN = TypeKind(0)
TypeKind.JAVA_INSTANCE = TypeKind(200)
TypeKind.JAVA_SINGLETON_FIELD = TypeKind(201)
TypeKind.JAVA_SINGLETON_INSTANCE = TypeKind(211)
TypeKind.JAVA_ENUM = TypeKind(202)
TypeKind.JAVA_ABSTRACT = TypeKind(203)
TypeKind.JAVA_STATIC_METHODS = TypeKind(204)
TypeKind.JAVA_PUBLIC_INSTANCE_METHOD = TypeKind(205)
TypeKind.JAVA_PUBLIC_STATIC_METHOD = TypeKind(206)
TypeKind.JAVA_PUBLIC_CONSTRUCTOR = TypeKind(207)
TypeKind.JAVA_PRIMITIVE = TypeKind(208)
TypeKind.JAVA_ARRAY = TypeKind(209)
TypeKind.JAVA_INTERFACE = TypeKind(210)
TypeKind.DUMMY = TypeKind(999)

class Type(Structure):

    _fields_ = [("_kind_id", c_int)]

    @property
    def kind(self):
        return TypeKind.from_id(self._kind_id)

    @property
    def translation_unit(self):
        return self._tu

    @staticmethod
    def from_result(res, fn, args):
        assert isinstance(res, Type)
        
        tu = None
        for arg in args:
            if hasattr(arg, 'translation_unit'):
                tu = arg.translation_unit
                break

        assert tu is not None
        res._tu = tu

        return res        


class JavaObject(object):
    def __init__(self, obj):
        assert isinstance(obj, c_object_p) and obj
        self.obj = self._as_parameter_ = obj

    def from_param(self):
        return self._as_parameter_

class Index(JavaObject):

    @staticmethod
    def create(classpath):
        return Index(Index_create(create_string_buffer(classpath)))

    def parse(self, res):
        return TranslationUnit.from_source(res, self)

    @property
    def status(self):
        return Index_status()

    @property
    def statusMessage(self):
        return Index_statusMessage();

    @staticmethod
    def destroy():
        return Index_destroy()

class TranslationUnit(JavaObject):
    
    @classmethod
    def from_source(cls, res, index):
        ptr = TranslationUnit_parse(index, res)
        if ptr is None:
            raise TranslationUnitLoadError("Error parsing translation unit")

        return cls(ptr)

    def __init__(self, ptr):
        JavaObject.__init__(self, ptr)

    def __del__(self):
        TranslationUnit_dispose(self)

    @property
    def cursor(self):
        return TranslationUnit_cursor(self)

class DummyType(Type):

    def __init__(self, kind_id):
        self._kind_id = kind_id

    @property
    def kind(self):
        return TypeKind.from_id(self._kind_id)

    @property
    def translation_unit(self):
        return None

class DummyCursor(Cursor):

    def __init__(self, parent_name, displayname, kind_id, type):
        self._parent_name = parent_name
        self._displayname = displayname
        self._kind_id = kind_id
        self._type = type

    def get_children(self):
        if not hasattr(self, '_children'):
            self._children = []
        return self._children

    @property
    def kind(self):
        return CursorKind.from_id(self._kind_id)

    @property
    def displayname(self):
        return self._displayname

    @property
    def description(self):
        return self._displayname

    @property
    def type(self):
        return self._type

    @property
    def enum_values(self):
        if not hasattr(self, '_enum_values'):
            self._enum_values = []
        return self._enum_values

    @property
    def parent_name(self):
        return self._parent_name

# Index Functions
Index_create=lib.createIndex
Index_create.argtypes = [c_char_p]
Index_create.restype = c_object_p

Index_status=lib.indexStatus
Index_status.argtypes = []
Index_status.restype = c_int

Index_statusMessage=lib.indexStatusMessage
Index_statusMessage.argtypes = []
Index_statusMessage.restype = c_char_p

Index_destroy=lib.destroyIndex
Index_destroy.argtypes = []
Index_destroy.restype = c_int

# Translation Unit Functions
TranslationUnit_parse = lib.parseTranslationUnit
TranslationUnit_parse.argtypes = [Index, c_char_p]
TranslationUnit_parse.restype = c_object_p

TranslationUnit_dispose = lib.disposeTranslationUnit
TranslationUnit_dispose.argtypes = [TranslationUnit]

TranslationUnit_cursor = lib.getTranslationUnitCursor
TranslationUnit_cursor.argtypes = [TranslationUnit]
TranslationUnit_cursor.restype = Cursor
TranslationUnit_cursor.errcheck = Cursor.from_result

# Cursor Functions

Cursor_displayname = lib.getCursorDisplayName
Cursor_displayname.argtypes = [Cursor]
Cursor_displayname.restype = c_char_p

# TODO: Deprecated - Remove 
Cursor_description = lib.getCursorDescription
Cursor_description.argtypes = [Cursor]
Cursor_description.restype = c_char_p

Cursor_type = lib.getCursorType
Cursor_type.argtypes = [Cursor]
Cursor_type.restype = Type
Cursor_type.errcheck = Type.from_result

Cursor_visit_callback = CFUNCTYPE(c_int, Cursor, Cursor, py_object)
Cursor_visit = lib.visitCursorChildren
Cursor_visit.argtypes = [Cursor, Cursor_visit_callback, py_object]
Cursor_visit.restype = c_uint

Cursor_enum_values_callback = CFUNCTYPE(c_int, c_char_p, py_object)
Cursor_enum_values = lib.visitEnumValues
Cursor_enum_values.argtypes = [Cursor, Type, Cursor_enum_values_callback, py_object]
Cursor_visit.restype = c_uint

Cursor_parent_name = lib.getCursorParentName
Cursor_parent_name.argtypes = [Cursor]
Cursor_parent_name.restype = c_char_p

Cursor_translationUnit = lib.getCursorTranslationUnit
Cursor_translationUnit.argtypes = [Cursor]
Cursor_translationUnit.restype = c_object_p

# Globals
INDEX_OK = 0
INDEX_ERR = -1

