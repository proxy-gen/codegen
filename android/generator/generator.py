#!/usr/bin/env python
# generator-jvm.py
# simple c++ generator, targetted for JVM bindings
#
# Copyright (c) 2011 - Zynga Inc.

from indexer import jindex
import sys
import pdb
import ConfigParser
import yaml
import re
import os
import inspect
import logging
from collections import defaultdict
from multiprocessing import Process
from Cheetah.Template import Template

class Generator(object):
	def __init__(self, opts):
		logging.debug("Generator __init__ enter")
		self.layout_template_list = opts['layout_template_list']
		logging.debug("self.layout_template_list " + str(self.layout_template_list))
		self.class_template_list = opts['class_template_list']
		logging.debug("self.class_template_list " + str(self.class_template_list))
		self.function_template_list = opts['function_template_list']
		logging.debug("self.function_template_list " + str(self.function_template_list))
		self.phantom_function_args_list = opts['phantom_function_args_list']
		logging.debug("self.phantom_function_args_list " + str(self.phantom_function_args_list))
		self.skip_functions_list = opts['skip_functions_list']
		logging.debug("self.skip_functions_list " + str(self.skip_functions_list))
		self.skip_functions_override_dict = opts['skip_functions_override_dict']
		logging.debug("self.skip_functions_override_dict " + str(self.skip_functions_override_dict))
		self.rename_types_dict = opts['rename_types_dict']
		logging.debug("self.rename_types_dict " + str(self.rename_types_dict))
		self.rename_classes_dict = opts['rename_classes_dict']
		logging.debug("self.rename_classes_dict " + str(self.rename_classes_dict))
		self.rename_functions_dict = opts['rename_functions_dict']
		logging.debug("self.rename_functions_dict " + str(self.rename_functions_dict))
		self.rename_types_override_dict = opts['rename_types_override_dict']
		logging.debug("self.rename_types_override_dict " + str(self.rename_types_override_dict))
		self.jvm_options = opts['jvm_options']
		logging.debug("self.jvm_options " + str(self.jvm_options))
		classpath=os.environ.get("CXX_JVM_CLASSPATH", "")
		if classpath.find("-Djava.class.path") == -1:
			self.jvm_options += "-Djava.class.path=" + str(classpath)
		logging.debug("self.jvm_options " + str(self.jvm_options))
		self.working_dir = opts['working_dir']
		logging.debug("self.working_dir " + str(self.working_dir))
		self.target = opts['target']
		logging.debug("self.target " + str(self.target))
		self.impl_outdir = opts['impl_outdir']
		logging.debug("self.impl_outdir " + str(self.impl_outdir))
		self.header_outdir = opts['header_outdir']
		logging.debug("self.header_outdir " + str(self.header_outdir))
		self.internal_makefile_outdir = opts['internal_makefile_outdir']
		logging.debug("self.internal_makefile_outdir " + str(self.internal_makefile_outdir))
		self.exported_makefile_outdir = opts['exported_makefile_outdir']
		logging.debug("self.exported_makefile_outdir " + str(self.exported_makefile_outdir))
		self.class_names_list = opts['classes']
		logging.debug("self.class_names_list " + str(self.class_names_list))
		self.proxied_classes_list = opts['proxied_classes_list']
		logging.debug("self.proxied_classes_list " + str(self.proxied_classes_list))
		self.callback_classes_list = opts['callback_classes_list']
		logging.debug("self.callback_classes_list " + str(self.callback_classes_list))
		self.callback_types_list = opts['callback_types_list']
		logging.debug("self.callback_types_list " + str(self.callback_types_list))		
		self.last_callbacks_list = opts['last_callbacks_list']
		logging.debug("self.last_callbacks_list " + str(self.last_callbacks_list))		
		self.file_prefix = opts['file_prefix']
		logging.debug("self.file_prefix " + str(self.file_prefix))
		self.singleton_field_name = opts['singleton_field_name']
		logging.debug("self.singleton_field_name " + str(self.singleton_field_name))
		self.singleton_function_name = opts['singleton_function_name']
		logging.debug("self.singleton_function_name " + str(self.singleton_function_name))
		self.header_includes_list = opts['header_includes_list']
		logging.debug("self.header_includes_list " + str(self.header_includes_list))
		self.impl_includes_list = opts['impl_includes_list']
		logging.debug("self.impl_includes_list " + str(self.impl_includes_list))
		self.type_converters_list = opts['type_converters_list']
		for idx, type_converter in enumerate(self.type_converters_list):
			self.type_converters_list[idx] = self.to_resource_name(type_converter)
		self.add_function_args_list = opts['add_function_args_list']
		self.reorder_function_args_list = opts['reorder_function_args_list']
		self.add_functions_file = opts['add_functions_file']
		logging.debug("self.add_functions_file " + str(self.add_functions_file))
		self.remove_functions_file = opts['remove_functions_file']
		logging.debug("self.remove_functions_file " + str(self.remove_functions_file))
		self.doc_file = opts['doc_file']
		logging.debug("self.doc_file " + str(self.doc_file))
		self.classes = []


		logging.debug("Generator __init__ exit")

	def generate_code(self):
		logging.debug("Generator generate_code enter")

		self.add_functions = {}
		if self.add_functions_file:
			stream = file(self.add_functions_file)
			data = yaml.load(stream)
			if data:
				if 'add' in data:
					self.add_functions = data['add']

		self.remove_functions = {}
		if self.remove_functions_file:
			stream = file(self.remove_functions_file)
			data = yaml.load(stream)
			if data:
				if 'remove' in data:
					self.remove_functions = data['remove']

		self.doc = {}
		if self.doc_file:
			stream = file(self.doc_file)
			data = yaml.load(stream)
			if data:
				self.doc = data

		self.impl_filename = self.file_prefix + ".cpp"
		logging.debug("self.impl_filename " + str(self.impl_filename))

		impl_filepath = os.path.join(self.impl_outdir, self.impl_filename)
		logging.debug("impl_filepath " + str(impl_filepath))		

		self.head_filename = self.file_prefix + ".hpp"
		logging.debug("self.head_filename " + str(self.head_filename))		

		head_filepath = os.path.join(self.header_outdir, self.head_filename)
		logging.debug("head_filepath " + str(head_filepath))	

		self.internal_androidmk_filename = "Android.mk"
		logging.debug("self.internal_androidmk_filename " + str(self.internal_androidmk_filename))

		internal_androidmk_filepath = os.path.join(self.internal_makefile_outdir, self.internal_androidmk_filename)
		logging.debug("internal_androidmk_filepath " + str(internal_androidmk_filepath))

		self.internal_applicationmk_filename = "Application.mk"
		logging.debug("self.internal_applicationmk_filename " + str(self.internal_applicationmk_filename))

		internal_applicationmk_filepath = os.path.join(self.internal_makefile_outdir, self.internal_applicationmk_filename)
		logging.debug("internal_applicationmk_filepath " + str(internal_applicationmk_filepath))

		self.exported_androidmk_filename = "Android.mk"
		logging.debug("self.exported_androidmk_filename " + str(self.exported_androidmk_filename))

		exported_androidmk_filepath = os.path.join(self.exported_makefile_outdir, self.exported_androidmk_filename)
		logging.debug("exported_androidmk_filepath " + str(exported_androidmk_filepath))

		self.impl_file = open(impl_filepath, "w+")
		self.head_file = open(head_filepath, "w+")
		self.internal_androidmk_file = open(internal_androidmk_filepath, "w+")
		self.internal_applicationmk_file = open(internal_applicationmk_filepath, "w+")
		self.exported_androidmk_file = open(exported_androidmk_filepath, "w+")

		self._parse_classes()

		layout_h = Template(file=os.path.join(self.target, "templates", self.layout_template_list[0]),searchList=[self])
		logging.debug("layout_h " + str(layout_h))		

		layout_c = Template(file=os.path.join(self.target, "templates", self.layout_template_list[1]),searchList=[self])
		logging.debug("layout_c " + str(layout_c))	

		internal_android_mk = Template(file=os.path.join(self.target, "templates", "Android.mk.internal"), searchList=[self])
		logging.debug("internal_android_mk " + str(internal_android_mk))	

		internal_application_mk = Template(file=os.path.join(self.target, "templates", "Application.mk.internal"), searchList=[self])
		logging.debug("internal_application_mk " + str(internal_application_mk))	

		exported_android_mk = Template(file=os.path.join(self.target, "templates", "Android.mk.exported"), searchList=[self])
		logging.debug("exported_android_mk " + str(exported_android_mk))	

		self.head_file.write(str(layout_h))
		self.impl_file.write(str(layout_c))
		self.internal_androidmk_file.write(str(internal_android_mk))
		self.internal_applicationmk_file.write(str(internal_application_mk))
		self.exported_androidmk_file.write(str(exported_android_mk))

		self._generate_classes()

		layout_h = Template(file=os.path.join(self.target, "templates", self.layout_template_list[2]),searchList=[self])
		logging.debug("layout_h " + str(layout_h))		

		layout_c = Template(file=os.path.join(self.target, "templates", self.layout_template_list[3]),searchList=[self])
		logging.debug("layout_c " + str(layout_c))		

		self.head_file.write(str(layout_h))
		self.impl_file.write(str(layout_c))

		self.impl_file.close()
		self.head_file.close()
		self.internal_androidmk_file.close()
		self.internal_applicationmk_file.close()
		self.exported_androidmk_file.close()

		logging.debug("Generator generate_code exit")

	def startup(self):
		self.index = jindex.Index.create(self.jvm_options)

	def shutdown(self):
		if jindex.Index.destroy() != jindex.INDEX_OK:
			print("*** Found errors - could not shutdown generator")
			raise Exception("Fatal error in shutdown generator")

	def to_resource_name(self, class_name):
		return class_name.replace('.', '/')

	def _parse_classes(self):
		logging.debug("Generator _parse_classes enter")
		for idx, class_name in enumerate(self.class_names_list):
			logging.debug("idx class_name " + str(idx) + "," + str(class_name))
			class_resource = self.to_resource_name(class_name)
			logging.debug("class_resource " + str(class_resource))
			tu = self.index.parse(class_resource)
			logging.debug("tu " + str(tu))
			if self.index.status != jindex.INDEX_OK:
				print(self.index.statusMessage)
				print("*** Found errors - can not continue")
				raise Exception("Fatal error in parsing translation unit")
			if tu.cursor.kind == jindex.CursorKind.CLASS_DECL:
				nclass = NativeClass(tu.cursor, self, idx)
				self.classes.append(nclass)
		classes_doc = {}
		if 'classes' in self.doc:
			classes_entry = self.doc['classes']
			for class_name in classes_entry:
				class_entry = classes_entry[class_name]
				if 'class_level' in class_entry:
					class_level = class_entry['class_level']
					if 'body' in class_level:
						classes_doc[class_name] = class_level['body']
		for clazz in self.classes:
			if clazz.java_class_name in classes_doc:
				clazz.set_doc(classes_doc[clazz.java_class_name])
		logging.debug("Generator _parse_classes exit")

	def _generate_classes(self):
		logging.debug("Generator _generate_classes enter")		
		for nclass in self.classes:
			logging.debug("nclass " + str(nclass))		
			self._deep_iterate(nclass)
		logging.debug("Generator _generate_classes exit")		

	def _deep_iterate(self, nclass):
		logging.debug("Generator _deep_iterate enter")	
		nclass.generate_code()
		logging.debug("Generator _deep_iterate exit")	
		
class NativeClass(object):
	def __init__(self, cursor, generator, idx):
		logging.debug("NativeClass __init__ enter")	
		self.cursor = cursor
		logging.debug("self.cursor " + str(self.cursor))	
		self.generator = generator
		logging.debug("self.generator " + str(self.generator))	
		self.idx = idx
		logging.debug("self.idx " + str(self.idx))	
		displayname = cursor.displayname
		logging.debug("displayname " + str(displayname))
		self.java_class_name = displayname	
		logging.debug("self.java_class_name " + str(self.java_class_name))
		self.class_name = generator.rename_classes_dict[displayname]
		logging.debug("self.class_name " + str(self.class_name))	
		parent_class_name = cursor.parent_name
		logging.debug("parent_class_name " + str(parent_class_name))
		self.inherited_proxy_name = None
		self.inherits_proxy = parent_class_name in self.generator.proxied_classes_list
		if self.inherits_proxy:
			if parent_class_name in self.generator.rename_classes_dict:
				self.inherited_proxy_name = self.generator.rename_classes_dict[parent_class_name]
		logging.debug("self.inherits_proxy " + str(self.inherits_proxy))
		logging.debug("self.inherited_proxy_name " + str(self.inherited_proxy_name))
		self.is_callback = self.java_class_name in self.generator.callback_classes_list
		self.callback_type = None
		self.last_callbacks_list = []
		if self.is_callback:
			callback_idx = self.generator.callback_classes_list.index(self.java_class_name)
			self.callback_type = self.generator.callback_types_list[callback_idx]
			if self.callback_type == "PER_INSTANCE":
				self.last_callbacks_list = self.generator.last_callbacks_list[callback_idx].split(':')
		self.resource_name = generator.to_resource_name(displayname)
		logging.debug("self.resource_name " + str(self.resource_name))	
		cursor_type = cursor.type
		logging.debug("self.cursor_type " + str(cursor_type))	
		self.is_instance = cursor_type.kind == jindex.TypeKind.JAVA_INSTANCE
		logging.debug("self.is_instance " + str(self.is_instance))
		self.is_abstract = cursor_type.kind == jindex.TypeKind.JAVA_ABSTRACT
		logging.debug("self.is_abstract " + str(self.is_abstract))	
		self.is_enum = cursor_type.kind == jindex.TypeKind.JAVA_ENUM
		logging.debug("self.is_enum " + str(self.is_enum))	
		self.is_singleton = cursor_type.kind == jindex.TypeKind.JAVA_SINGLETON
		logging.debug("self.is_singleton " + str(self.is_singleton))	
		self.is_static_methods = cursor_type.kind == jindex.TypeKind.JAVA_STATIC_METHODS
		logging.debug("self.is_static_methods " + str(self.is_static_methods))	
		self.enum_values = cursor.enum_values
		logging.debug("self.enum_values " + str(self.enum_values))	
		self.constructors = []
		self.functions = []
		self.class_doc = None
		logging.debug("NativeClass __init__ exit")	

	@property
	def children(self):
		logging.debug("NativeClass children enter")	
		nodes = self.cursor.get_children()
		return nodes

	def generate_code(self):

		logging.debug("NativeClass generate_code enter")	
		logging.debug("self.class_name " + str(self.class_name))
		self._parse_constructors()
		self._parse_functions()

		prelude_h = Template(file=os.path.join(self.generator.target, "templates", self.generator.class_template_list[self.idx * 4]),searchList=[{"current_class": self}])
		logging.debug("prelude_h " + str(prelude_h))	

		prelude_c = Template(file=os.path.join(self.generator.target, "templates", self.generator.class_template_list[self.idx * 4 + 1]),searchList=[{"current_class": self}])
		logging.debug("prelude_c " + str(prelude_c))	

		self.generator.head_file.write(str(prelude_h))
		self.generator.impl_file.write(str(prelude_c))

		self._generate_functions()

		prelude_h = Template(file=os.path.join(self.generator.target, "templates", self.generator.class_template_list[self.idx * 4 + 2]),searchList=[{"current_class": self}])
		logging.debug("prelude_h " + str(prelude_h))	

		prelude_c = Template(file=os.path.join(self.generator.target, "templates", self.generator.class_template_list[self.idx * 4 + 3]),searchList=[{"current_class": self}])
		logging.debug("prelude_c " + str(prelude_c))	

		self.generator.head_file.write(str(prelude_h))
		self.generator.impl_file.write(str(prelude_c))

		logging.debug("NativeClass generate_code exit")	

	def set_doc(self, body):
		self.class_doc = body

	def setClassName(self, value):
		self.class_name = value
		self.constructors = []
		self.functions = []
		self._parse_constructors()
		self._parse_functions()

	def _parse_constructors(self):
		logging.debug("NativeClass _parse_constructors enter")	
		for c in self.children:
			logging.debug("cursor kind " + str(c.kind))	
			logging.debug("type kind " + str(c.type.kind))	
			if c.kind == jindex.CursorKind.CONSTRUCTOR_DECL:
				if c.type.kind == jindex.TypeKind.JAVA_PUBLIC_CONSTRUCTOR:
					skip_constructor = False
					nconstructor = NativeConstructor(c, self, self.generator)
					for skip_entry in self.generator.skip_functions_list:
						if nconstructor.description.find(skip_entry) != -1:
							skip_constructor = True
							break
					if not skip_constructor:
						if self.java_class_name in self.generator.skip_functions_override_dict:
							for skip_entry in self.generator.skip_functions_override_dict[self.java_class_name]:
								if nconstructor.description.find(skip_entry) != -1:
									skip_constructor = True
									break
						if not skip_constructor:
							self.constructors.append(nconstructor)
		logging.debug("NativeClass _parse_constructors exit")	


	def _parse_functions(self):
		logging.debug("NativeClass _parse_functions enter")	
		for m in self.children:
			logging.debug('_parse_functions function_name ' + str(m.displayname))
			if m.kind == jindex.CursorKind.FUNCTION_DECL:
				if m.type.kind == jindex.TypeKind.JAVA_PUBLIC_INSTANCE_METHOD:
					skip_function = False
					nfunction = NativeFunction(m, self, self.generator)
					for skip_entry in self.generator.skip_functions_list:
						if nfunction.description.find(skip_entry) != -1:
							skip_function = True
							break
					if not skip_function:
						if self.java_class_name in self.generator.skip_functions_override_dict:
							for skip_entry in self.generator.skip_functions_override_dict[self.java_class_name]:
								if nfunction.description.find(skip_entry) != -1:
									skip_function = True
									break
						if not skip_function:
							self.functions.append(nfunction)
				if m.type.kind == jindex.TypeKind.JAVA_PUBLIC_STATIC_METHOD:
					skip_function = False
					nfunction = NativeFunction(m, self, self.generator)
					for skip_function_entry in self.generator.skip_functions_list:
						if nfunction.description.find(skip_function_entry) != -1:
							skip_function = True
							break
					if not skip_function:
						if self.java_class_name in self.generator.skip_functions_override_dict:
							for skip_entry in self.generator.skip_functions_override_dict[self.java_class_name]:
								if nfunction.description.find(skip_entry) != -1:
									skip_function = True
									break
						if not skip_function:
							self.functions.append(nfunction)
		function_docs = {}
		# Docs
		if 'classes' in self.generator.doc:
			classes_entry = self.generator.doc['classes']
			if self.java_class_name in classes_entry:
				class_entry = classes_entry[self.java_class_name]
				if 'function_level' in class_entry:
					docs_entry = class_entry['function_level']
					for doc_entry in docs_entry:
						function_docs[doc_entry['name']] = doc_entry['body']
		for function in self.functions:
			doc_function = None
			for function_doc in function_docs:
				if function.description.find(function_doc) != -1:
					doc_function = function_doc
					break
			if not (doc_function is None):
				doc_body = function_docs[doc_function]
				function.set_doc(doc_body)
		# Added Functions
		if 'classes' in self.generator.add_functions:
			classes_entry = self.generator.add_functions['classes']
			for class_entry in classes_entry:
				if self.java_class_name == class_entry['name']:
					if 'functions' in class_entry:
						functions_entry = class_entry['functions']
						for function_entry in functions_entry:
							dummy_type_kind = jindex.TypeKind.from_name(function_entry['name'])
							m = jindex.DummyCursor(self.cursor.displayname, function_entry['name'], jindex.CursorKind.FUNCTION_DECL.id, jindex.DummyType(dummy_type_kind.id))
							m_children = m.get_children()
							for return_type in function_entry['return_types']:
								r = jindex.DummyCursor(function_entry['name'], return_type, jindex.CursorKind.RETURN_DECL.id, jindex.DummyType(jindex.TypeKind.UNKNOWN.id))
								m_children.append(r)
							for param_type_entry in function_entry['param_types']:
								p = jindex.DummyCursor(function_entry['name'], param_type_entry, jindex.CursorKind.PARAM_DECL.id, jindex.DummyType(jindex.TypeKind.UNKNOWN.id))
								m_children.append(p)
							skip_function = False
							nfunction = NativeFunction(m, self, self.generator)
							# TODO fix mapping
							nfunction.java_function_name = function_entry['java_name']
							for skip_function_entry in self.generator.skip_functions_list:
								if nfunction.description.find(skip_function_entry) != -1:
									skip_function = True
									break
							if not skip_function:
								self.functions.append(nfunction)
								if 'body' in function_entry:
									function_body = function_entry['body']
									for function in self.functions:
										if function.description.find(nfunction.description) != -1:
											function.set_body(function_body)
											break
								if 'doc' in function_entry:
									nfunction.set_doc(function_entry['doc'])
		# Removed Functions
		if 'classes' in self.generator.remove_functions:
			classes_entry = self.generator.remove_functions['classes']
			for class_entry in classes_entry:
				if self.java_class_name == class_entry['name']:
					if 'functions' in class_entry:
						functions_entry = class_entry['functions']
						for function_entry in functions_entry:
							dummy_type_kind = jindex.TypeKind.from_name(function_entry['name'])
							m = jindex.DummyCursor(self.cursor.displayname, function_entry['name'], jindex.CursorKind.FUNCTION_DECL.id, jindex.DummyType(dummy_type_kind.id))
							m_children = m.get_children()
							for return_type in function_entry['return_types']:
								r = jindex.DummyCursor(function_entry['name'], return_type, jindex.CursorKind.RETURN_DECL.id, jindex.DummyType(jindex.TypeKind.UNKNOWN.id))
								m_children.append(r)
							for param_type_entry in function_entry['param_types']:
								p = jindex.DummyCursor(function_entry['name'], param_type_entry, jindex.CursorKind.PARAM_DECL.id, jindex.DummyType(jindex.TypeKind.UNKNOWN.id))
								m_children.append(p)
							nfunction = NativeFunction(m, self, self.generator)
							for function in self.functions:
								if function.description.find(nfunction.description) != -1:
									logging.debug("removing function " + str(function.description))	
									self.functions.remove(function)
									break
		logging.debug("NativeClass _parse_functions exit")	


	def _generate_functions(self):
		logging.debug("NativeClass _generate_functions enter")	
		for nfunction in self.functions:
			self._deep_iterate(nfunction)
		logging.debug("NativeClass _generate_functions exit")	

	def _deep_iterate(self, nfunction):
		logging.debug("NativeClass _deep_iterate enter")
		logging.debug("nfunction " + str(nfunction))		
		nfunction.generate_code()
		logging.debug("NativeClass _deep_iterate exit")	

class NativeConstructor(object):
	def __init__(self, cursor, current_class, generator):
		logging.debug("NativeConstructor __init__ enter")
		self.cursor = cursor
		logging.debug("self.cursor " + str(self.cursor))
		self.current_class = current_class
		logging.debug("self.current_class " + str(self.current_class))
		self.generator = generator
		logging.debug("self.generator " + str(self.generator))
		self.constructor_params = []
		self.constructor_name = "<init>"
		self.description = self.constructor_name
		self.description = self.constructor_name + self._initial_constructor_arg_signature
		logging.debug("self.description " + str(self.description))
		self._parse_args()
		logging.debug("NativeConstructor __init__ exit")

	@property
	def args(self):
		logging.debug("NativeConstructor args enter")
		nodes = []
		actual_nodes = self.cursor.get_children()
		nodes.extend(actual_nodes)
		for idx, dummy_arg_list_entry in enumerate(self.generator.add_function_args_list):
			arg_type = None
			arg_index = -1
			for jdx, dummy_arg_entry in enumerate(dummy_arg_list_entry.split(' ')):
				dummy_arg_entry = dummy_arg_entry.replace('\\x20',' ')
				if jdx == 0:
					if self.description.find(dummy_arg_entry) == -1:
						break
				elif jdx % 2 == 1:
					arg_type = dummy_arg_entry
				else:
					arg_index = int(dummy_arg_entry)
					dummy_node = jindex.DummyCursor(self.cursor.displayname, arg_type, jindex.CursorKind.PARAM_DECL.id, jindex.DummyType(jindex.TypeKind.DUMMY.id))
					nodes.insert(arg_index, dummy_node)
		return nodes

	def _parse_args(self):
		logging.debug("NativeConstructor _parse_args enter")
		for idx, a in enumerate(self.args):
			self._deep_iterate(a, idx)
		logging.debug("NativeConstructor _parse_args exit")

	def _deep_iterate(self, cursor, idx):
		logging.debug("NativeConstructor _deep_iterate enter")
		logging.debug("cursor " + str(cursor))
		narg = None
		if cursor.kind == jindex.CursorKind.PARAM_DECL:
			narg = NativeArg(cursor, self, self.generator, idx)
			self.constructor_params.append(narg)
		logging.debug("NativeConstructor _deep_iterate exit")

	@property
	def _reordered_params(self):
		reordered = []
		reordered.extend(self.constructor_params)
		for idx, dummy_arg_list_entry in enumerate(self.generator.reorder_function_args_list):
			for jdx, dummy_arg_entry in enumerate(dummy_arg_list_entry.split(' ')):
				if jdx == 0:
					if self.description.find(dummy_arg_entry) == -1:
						break
				else:
					for kdx, new_arg_idx in enumerate(dummy_arg_entry.split(':')):
						new_arg_idx = int(new_arg_idx)
						reordered[kdx] = self.constructor_params[new_arg_idx]
		return reordered

	@property
	def constructor_param_signature(self):
		logging.debug("NativeConstructor constructor_param_signature enter")
		params = []
		for param in self.constructor_params:
			if not (param.name in self.generator.phantom_function_args_list):
				params.append(param)
		signature = ""
		for idx, param in enumerate(params):
			if idx > 0:
				signature += ", "
			signature += param.rename + " " + param.arg_name
		logging.debug("signature " + str(signature))
		return signature

	@property
	def constructor_payload_signature(self):
		logging.debug("NativeConstructor constructor_payload_signature enter")
		signature = ""
		for idx, param in enumerate(self.constructor_params):
			arg_name = param.name
			if not (arg_name in self.generator.phantom_function_args_list):
				signature += "," + "arg" + str(idx)
		logging.debug("signature " + str(signature))
		return signature

	@property
	def constructor_type_signature(self):
		logging.debug("NativeConstructor constructor_type_signature enter")
		signature = "("
		for param in self.constructor_params:
			if param.is_dummy:
				continue
			signature += param.signature
		signature += ")"	
		signature += "V"
		logging.debug("signature " + str(signature))
		return signature

	@property
	def _initial_constructor_arg_signature(self):
		logging.debug("NativeConstructor _initial_constructor_arg_signature enter")
		signature = "("
		actual_nodes = self.cursor.get_children()
		for idx, a in enumerate(actual_nodes):
			if a.kind == jindex.CursorKind.PARAM_DECL:
				param = NativeArg(a, self, self.generator, idx)
				signature += param.signature
		signature += ")"	
		return signature

class NativeFunction(object):
	def __init__(self, cursor, current_class, generator):
		logging.debug("NativeFunction __init__ enter")
		self.cursor = cursor
		logging.debug("self.cursor " + str(self.cursor))
		self.current_class = current_class
		logging.debug("self.current_class " + str(self.current_class))
		self.generator = generator
		logging.debug("self.generator " + str(self.generator))
		self.function_name = cursor.displayname
		logging.debug("self.function_name " + str(self.function_name))
		self.java_function_name = self.function_name
		self.rename_function_name = self.function_name
		if self.function_name in generator.rename_functions_dict:
			self.rename_function_name = generator.rename_functions_dict[self.function_name]
		logging.debug("self.rename_function_name " + str(self.rename_function_name))
		self.is_static = cursor.type.kind == jindex.TypeKind.JAVA_PUBLIC_STATIC_METHOD
		logging.debug("self.is_static " + str(self.is_static))
		self.function_args = []
		self.function_params = []
		self.function_ret = []
		self.description = self.function_name
		self.description = self.function_name + self._initial_function_arg_signature
		logging.debug("self.description " + str(self.description))
		self._parse_args()
		logging.debug("NativeFunction __init__ exit")
		self.function_body = None
		self.function_doc = None

	def generate_code(self):

		logging.debug("NativeFunction generate_code enter")
		function_h = Template(file=os.path.join(self.generator.target, "templates", self.generator.function_template_list[self.current_class.idx * 2]),searchList=[{"current_function": self}])
		logging.debug("function_h " + str(function_h))

		function_c = Template(file=os.path.join(self.generator.target, "templates", self.generator.function_template_list[self.current_class.idx * 2 + 1]),searchList=[{"current_function": self}])
		logging.debug("function_c " + str(function_c))

		self.generator.head_file.write(str(function_h))
		self.generator.impl_file.write(str(function_c))
		logging.debug("NativeFunction generate_code exit")

	def set_body(self, body):
		self.function_body = body 

	def set_doc(self, body):
		self.function_doc = body

	@property
	def args(self):
		logging.debug("NativeFunction args enter")
		nodes = []
		actual_nodes = self.cursor.get_children()
		ret_count = 0
		for idx, a in enumerate(actual_nodes):
			if a.kind == jindex.CursorKind.RETURN_DECL:
				ret_count += 1
		nodes.extend(actual_nodes)
		for idx, dummy_arg_list_entry in enumerate(self.generator.add_function_args_list):
			arg_type = None
			arg_index = -1
			for jdx, dummy_arg_entry in enumerate(dummy_arg_list_entry.split(' ')):
				dummy_arg_entry = dummy_arg_entry.replace('\\x20',' ')
				if jdx == 0:
					if self.description.find(str(dummy_arg_entry)) == -1:
						break
				elif jdx % 2 == 1:
					arg_type = dummy_arg_entry
				else:
					arg_index = int(dummy_arg_entry)
					dummy_node = jindex.DummyCursor(self.cursor.displayname, arg_type, jindex.CursorKind.PARAM_DECL.id, jindex.DummyType(jindex.TypeKind.DUMMY.id))
					nodes.insert(arg_index + ret_count, dummy_node)
		return nodes

	def _parse_args(self):
		logging.debug("NativeFunction _parse_args enter")
		for idx, a in enumerate(self.args):
			logging.debug("idx, a " + str(idx) + "," + str(a))
			if a.kind == jindex.CursorKind.RETURN_DECL:
				narg = NativeArg(a, self, self.generator, idx)
				self.function_ret.append(narg)
				self.function_args.append(narg)

		for idx, a in enumerate(self.args):
			logging.debug("idx, a " + str(idx) + "," + str(a))
			if a.kind == jindex.CursorKind.PARAM_DECL:
				narg = NativeArg(a, self, self.generator, idx - len(self.function_ret))
				self.function_params.append(narg)
				self.function_args.append(narg)
		logging.debug("NativeFunction _parse_args enter")

	@property
	def _reordered_params(self):
		reordered = []
		reordered.extend(self.function_params)
		for idx, dummy_arg_list_entry in enumerate(self.generator.reorder_function_args_list):
			for jdx, dummy_arg_entry in enumerate(dummy_arg_list_entry.split(' ')):
				if jdx == 0:
					if self.description.find(dummy_arg_entry) == -1:
						break
				else:
					for kdx, new_arg_idx in enumerate(dummy_arg_entry.split(':')):
						new_arg_idx = int(new_arg_idx)
						reordered[kdx] = self.function_params[new_arg_idx]
		return reordered

	@property
	def function_param_signature(self):
		logging.debug("NativeFunction function_param_signature enter")
		params = []
		for param in self._reordered_params:
			if not (param.name in self.generator.phantom_function_args_list):
				params.append(param)
		signature = ""
		for idx, param in enumerate(params):
			if idx > 0:
				signature += ", "
			signature += param.param_name + " " + param.arg_name
		logging.debug("signature " + str(signature))
		return signature

	@property
	def function_callback_param_signature(self):
		logging.debug("NativeFunction function_callback_param_signature enter")
		params = []
		for param in self._reordered_params:
			if not (param.name in self.generator.phantom_function_args_list):
				params.append(param)
		signature = ""
		for idx, param in enumerate(params):
			if idx > 0:
				signature += ", "
			signature += param.param_callback_name + " " + param.arg_name
		logging.debug("signature " + str(signature))
		return signature

	@property
	def function_ret_signature(self):
		logging.debug("NativeFunction function_ret_signature enter")
		ret_signature = ""
		for ret in self.function_ret:
			ret_signature = ret.signature
		logging.debug("ret_signature " + str(ret_signature))
		return ret_signature

	@property
	def function_ret_name(self):
		logging.debug("NativeFunction function_ret_name enter")
		ret_name = ""
		for ret in self.function_ret:
			ret_name = ret.return_name
			if ret.is_proxied:
				ret_name = ret_name + "*"
		logging.debug("ret_name " + str(ret_name))
		return ret_name

	@property
	def function_type_signature(self):
		logging.debug("NativeFunction function_type_signature enter")
		signature = "("
		for param in self.function_params:
			if param.is_dummy:
				continue
			signature += param.signature
		signature += ")"	

		for ret in self.function_ret:
			signature += ret.signature
			
		logging.debug("signature " + str(signature))
		return signature

	@property
	def _initial_function_arg_signature(self):
		logging.debug("NativeFunction _initial_function_arg_signature enter")
		signature = "("
		actual_nodes = self.cursor.get_children()
		for idx, a in enumerate(actual_nodes):
			if a.kind == jindex.CursorKind.PARAM_DECL:
				param = NativeArg(a, self, self.generator, idx)
				signature += param.signature
		signature += ")"	
		return signature

	@property
	def function_jni_call_type(self):
		logging.debug("NativeFunction function_jni_call_type enter")
		jni_call_type = ""
		for ret in self.function_ret:
			jni_call_type = ret.jni_call_type
		logging.debug("jni_call_type " + str(jni_call_type))
		return jni_call_type

class NativeArg(object):
	def __init__(self, cursor, current_function, generator, idx):
		logging.debug("NativeArg __init__ enter")
		self.cursor = cursor
		logging.debug("self.cursor " + str(self.cursor))
		self.current_function = current_function
		logging.debug("self.current_function " + str(self.current_function))
		self.generator = generator
		logging.debug("self.generator " + str(self.generator))
		self.idx = idx
		logging.debug("self.idx " + str(self.idx))
		self.name = cursor.displayname
		logging.debug("self.name " + str(self.name))
		self.is_callback = self.name in self.generator.callback_classes_list
		self.callback_type = None
		self.last_callbacks_list = []
		if self.is_callback:
			callback_idx = self.generator.callback_classes_list.index(self.name)
			self.callback_type = self.generator.callback_types_list[callback_idx]
			if self.callback_type == "PER_INSTANCE":
				self.last_callbacks_list = self.generator.last_callbacks_list[callback_idx].split(':')
		logging.debug("self.is_callback " + str(self.is_callback))
		self.is_proxied = self.name in self.generator.proxied_classes_list
		logging.debug("self.is_proxied " + str(self.is_proxied))
		self.is_enum = self.cursor.type.kind == jindex.TypeKind.JAVA_ENUM
		logging.debug("self.is_enum " + str(self.is_enum))
		self.is_phantom = (self.name in self.generator.phantom_function_args_list)
		logging.debug("self.is_phantom " + str(self.is_phantom))
		self.is_return = cursor.kind == jindex.CursorKind.RETURN_DECL
		logging.debug("self.is_return " + str(self.is_return))
		self.is_param = cursor.kind == jindex.CursorKind.PARAM_DECL
		logging.debug("self.is_param " + str(self.is_param))
		self.is_dummy = self.cursor.type.kind == jindex.TypeKind.DUMMY
		logging.debug("self.is_dummy " + str(self.is_dummy))		
		self.enum_values = cursor.enum_values
		logging.debug("self.enum_values " + str(self.enum_values))
		self.arg_name = "arg" + str(idx)
		if self.is_return:
			self.arg_name = "ret" + str(idx)
		self.rename = self.name
		if self.name in self.generator.rename_types_dict:
			self.rename = self.generator.rename_types_dict[self.rename]
		if self.current_function.current_class.java_class_name in self.generator.rename_types_override_dict:
			rename_types_override_classes_dict = self.generator.rename_types_override_dict[self.current_function.current_class.java_class_name]
			if self.current_function.current_class.class_name in rename_types_override_classes_dict:
				rename_types_override_classes_dict = rename_types_override_classes_dict[self.current_function.current_class.class_name]
				for rename_types_override_function in rename_types_override_classes_dict:
					if self.current_function.description is not None:
						if self.current_function.description.find(rename_types_override_function) != -1:
							rename_types_override_function_dict = rename_types_override_classes_dict[rename_types_override_function]
							if self.idx in rename_types_override_function_dict:
								rename_types_override_args_dict = rename_types_override_function_dict[self.idx]
								if self.name in rename_types_override_args_dict:
									self.rename = rename_types_override_args_dict[self.name]
									break
		logging.debug("self.rename " + str(self.rename))
		self.normalized_name = self.rename.replace("const", "").strip()
		logging.debug("self.normalized_name " + str(self.normalized_name))

		logging.debug("self.arg_name " + str(self.arg_name))
		self.resource_name = self.name.replace('.', '/')
		logging.debug("self.resource_name " + str(self.resource_name))

		self.signature = ""
		if self.resource_name == "boolean":
			self.signature = "Z"
		elif self.resource_name == "byte":
			self.signature = "B"
		elif self.resource_name == "char":
			self.signature = "C"
		elif self.resource_name == "short":
			self.signature = "S"
		elif self.resource_name == "int":
			self.signature = "I"
		elif self.resource_name == "long":
			self.signature = "J"
		elif self.resource_name == "float":
			self.signature = "F"
		elif self.resource_name == "double":
			self.signature = "D"
		elif self.resource_name == "void":
			self.signature = "V"
		elif self.resource_name == "[Z":
			self.signature = self.resource_name
		elif self.resource_name == "[B":
			self.signature = self.resource_name
		elif self.resource_name == "[C":
			self.signature = self.resource_name
		elif self.resource_name == "[S":
			self.signature = self.resource_name
		elif self.resource_name == "[I":
			self.signature = self.resource_name
		elif self.resource_name == "[J":
			self.signature = self.resource_name
		elif self.resource_name == "[F":
			self.signature = self.resource_name
		elif self.resource_name == "[D":
			self.signature = self.resource_name
		elif self.resource_name == "[Ljava/lang/String;":
			self.signature = self.resource_name
		else:
			self.signature += "L" + self.resource_name + ";"
		logging.debug("self.signature " + str(self.signature))

		self.return_name = self.rename
		# if self.rename == "std::string":
		# 	pass
		# elif self.is_enum:
		# 	pass
		# elif self.rename == "bool":
		# 	pass
		# elif self.rename == "byte":
		# 	pass
		# elif self.rename == "char":
		# 	pass
		# elif self.rename == "short":
		# 	pass
		# elif self.rename == "int":
		# 	pass
		# elif self.rename == "long":
		# 	pass
		# elif self.rename == "float":
		# 	pass
		# elif self.rename == "double":
		# 	pass
		# elif self.rename == "void":
		# 	pass
		# else:
		# 	self.return_name = self.rename + "&"
		logging.debug("self.return_name " + str(self.return_name))

		self.param_name = self.rename
		if self.is_enum:
			pass
		# elif self.is_callback:
		# 	pass
		elif self.rename == "bool":
			pass
		elif self.rename == "byte":
			pass
		elif self.rename == "char":
			pass
		elif self.rename == "short":
			pass
		elif self.rename == "int":
			pass
		elif self.rename == "long":
			pass
		elif self.rename == "float":
			pass
		elif self.rename == "double":
			pass
		elif self.rename == "void":
			pass
		else:
			self.param_name = self.rename + "&"
		logging.debug("self.param_name " + str(self.param_name))

		self.param_callback_name = self.rename
		if self.is_proxied:
			self.param_callback_name = self.rename + "*"
		logging.debug("self.param_callback_name " + str(self.param_callback_name))

		self.arg_address_name = self.arg_name
		if self.rename == "std::string":
			pass
		elif self.is_enum:
			pass
		elif self.rename == "bool":
			pass
		elif self.rename == "byte":
			pass
		elif self.rename == "char":
			pass
		elif self.rename == "short":
			pass
		elif self.rename == "int":
			pass
		elif self.rename == "long":
			pass
		elif self.rename == "float":
			pass
		elif self.rename == "double":
			pass
		elif self.rename == "void":
			pass
		else:
			self.arg_address_name = "&" + self.arg_name
		logging.debug("self.arg_address_name " + str(self.arg_address_name))

		self.arg_indirection_name = self.arg_name
		logging.debug("self.arg_indirection_name " + str(self.arg_indirection_name))

		self.pointer_name = self.rename
		if self.is_proxied:
			self.pointer_name = self.rename + "*"
		logging.debug("self.pointer_name " + str(self.pointer_name))

		self.initial_value = "0"
		if self.rename == "std::string":
			self.initial_value = None
		logging.debug("self.initial_value " + str(self.initial_value))
		

		self.jni_call_type = ""
		if self.resource_name == "boolean":
			self.jni_call_type = "Boolean"
		elif self.resource_name == "byte":
			self.jni_call_type = "Byte"
		elif self.resource_name == "char":
			self.jni_call_type = "Char"
		elif self.resource_name == "short":
			self.jni_call_type = "Short"
		elif self.resource_name == "int":
			self.jni_call_type = "Int"
		elif self.resource_name == "long":
			self.jni_call_type = "Long"
		elif self.resource_name == "float":
			self.jni_call_type = "Float"
		elif self.resource_name == "double":
			self.jni_call_type = "Double"
		elif self.resource_name == "void":
			self.jni_call_type = "Void"
		elif self.resource_name == "java/lang/String":
			self.jni_call_type = "String"
		else:
			self.jni_call_type = "Object"
		logging.debug("self.jni_call_type " + str(self.jni_call_type))

		self.jni_elem_call_type = ""
		if self.resource_name == "boolean":
			self.jni_elem_call_type = "Boolean"
		elif self.resource_name == "java/lang/Boolean":
			self.jni_elem_call_type = "Boolean"
		elif self.resource_name == "byte":
			self.jni_elem_call_type = "Byte"
		elif self.resource_name == "java/lang/Byte":
			self.jni_elem_call_type = "Byte"
		elif self.resource_name == "char":
			self.jni_elem_call_type = "Char"
		elif self.resource_name == "java/lang/Character":
			self.jni_elem_call_type = "Char"
		elif self.resource_name == "short":
			self.jni_elem_call_type = "Short"
		elif self.resource_name == "java/lang/Short":
			self.jni_elem_call_type = "Short"
		elif self.resource_name == "int":
			self.jni_elem_call_type = "Int"
		elif self.resource_name == "java/lang/Integer":
			self.jni_elem_call_type = "Int"
		elif self.resource_name == "long":
			self.jni_elem_call_type = "Long"
		elif self.resource_name == "java/lang/Long":
			self.jni_elem_call_type = "Long"
		elif self.resource_name == "float":
			self.jni_elem_call_type = "Float"
		elif self.resource_name == "java/lang/Float":
			self.jni_elem_call_type = "Float"
		elif self.resource_name == "double":
			self.jni_elem_call_type = "Double"
		elif self.resource_name == "java/lang/Double":
			self.jni_elem_call_type = "Double"
		elif self.resource_name == "void":
			self.jni_elem_call_type = "Void"
		elif self.resource_name == "java/lang/String":
			self.jni_elem_call_type = "String"
		else:
			self.jni_elem_call_type = "Object"
		logging.debug("self.jni_elem_call_type " + str(self.jni_elem_call_type))

		self.jni_type = ""
		if self.resource_name == "boolean":
			self.jni_type = "jboolean"
		elif self.resource_name == "byte":
			self.jni_type = "jbyte"
		elif self.resource_name == "char":
			self.jni_type = "jchar"
		elif self.resource_name == "short":
			self.jni_type = "jshort"
		elif self.resource_name == "int":
			self.jni_type = "jint"
		elif self.resource_name == "long":
			self.jni_type = "jlong"
		elif self.resource_name == "float":
			self.jni_type = "jfloat"
		elif self.resource_name == "double":
			self.jni_type = "jdouble"
		elif self.resource_name == "void":
			self.jni_type = "void"
		elif self.resource_name == "java/lang/String":
			self.jni_type = "jstring"
		else:
			self.jni_type = "jobject"
		logging.debug("self.jni_type " + str(self.jni_type))

		self.jni_elem_type = ""
		if self.resource_name == "boolean":
			self.jni_elem_type = "jboolean"
		elif self.resource_name == "java/lang/Boolean":
			self.jni_elem_type = "jboolean"
		elif self.resource_name == "byte":
			self.jni_elem_type = "jbyte"
		elif self.resource_name == "java/lang/Byte":
			self.jni_elem_type = "jbyte"
		elif self.resource_name == "char":
			self.jni_elem_type = "jchar"
		elif self.resource_name == "java/lang/Character":
			self.jni_elem_type = "jchar"
		elif self.resource_name == "short":
			self.jni_elem_type = "jshort"
		elif self.resource_name == "java/lang/Short":
			self.jni_elem_type = "jshort"
		elif self.resource_name == "int":
			self.jni_elem_type = "jint"
		elif self.resource_name == "java/lang/Integer":
			self.jni_elem_type = "jint"
		elif self.resource_name == "long":
			self.jni_elem_type = "jlong"
		elif self.resource_name == "java/lang/Long":
			self.jni_elem_type = "jlong"
		elif self.resource_name == "float":
			self.jni_elem_type = "jfloat"
		elif self.resource_name == "java/lang/Float":
			self.jni_elem_type = "jfloat"
		elif self.resource_name == "double":
			self.jni_elem_type = "jdouble"
		elif self.resource_name == "java/lang/Double":
			self.jni_elem_type = "jdouble"
		elif self.resource_name == "void":
			self.jni_elem_type = "void"
		elif self.resource_name == "java/lang/String":
			self.jni_elem_type = "jstring"
		else:
			self.jni_elem_type = "jobject"
		logging.debug("self.jni_elem_type " + str(self.jni_elem_type))

		logging.debug("NativeArg __init__ exit")

	def from_cxx(self, source_name, result_name, source_type, result_type):
		logging.debug("NativeArg from_cxx enter")
		converter_function = "CXXConverter::from_cxx(" + source_name + "," + result_name + "," + source_type + "," + result_type + ");"; 
		return converter_function

	def to_cxx(self, source_name, result_name, source_type, result_type):
		logging.debug("NativeArg to_cxx enter")
		converter_function = "CXXConverter::to_cxx(" + source_name + "," + result_name + "," + source_type + "," + result_type + ");";
		return converter_function

class GeneratorProcess(object):

	def __call__(self, gen_opts):
		try:
			generator = Generator(gen_opts)
			generator.startup()
			generator.generate_code()
			generator.shutdown()
		except Exception as e:
			print e
			sys.exit(1)

def build_list_from_config(config, section, name):
	entry = (config.get(section, name)).strip()
	list_from_config = []
	if entry:
		raw_list_from_config = entry.split(',')
		for raw_entry in raw_list_from_config:
			#TODO: replace with decode
			raw_entry = str(raw_entry)
			raw_entry = raw_entry.replace('\\x2C',',')
			list_from_config.append(raw_entry)
	return list_from_config

def main():
	from optparse import OptionParser

	parser = OptionParser("usage: %prog [options] {configfile}")
	parser.add_option("--section", action="store", type="string", dest="section",
							help="sets a specific section to be converted")
	parser.add_option("--header-output-dir", action="store", type="string", dest="header_outdir",
							help="specifies the output directory for generated header C++ code")
	parser.add_option("--src-output-dir", action="store", type="string", dest="impl_outdir",
							help="specifies the output directory for generated implementation C++ code")
	parser.add_option("--makefiles-output-dir", action="store", type="string", dest="makefile_outdir",
							help="specifies the output directory for generated Android makefiles")
	parser.add_option("--log",  action="store", type="string", dest="loglevel",
							help="specifies the output directory for generated C++ code")
	(opts, args) = parser.parse_args()

	#script directory
	script_dir = os.path.dirname(inspect.getfile(inspect.currentframe()))
	working_dir = os.path.join(script_dir, "..")

	if len(args) == 0:
		parser.error('invalid number of arguments')

	config = ConfigParser.SafeConfigParser()
	config.read(args[0])

	loglevel = "INFO"
	if opts.loglevel:
		loglevel = str(opts.loglevel).upper()

	logging.basicConfig(level=getattr(logging, loglevel))

	if (0 == len(config.sections())):
		raise Exception("No sections defined in config file")

	global sections
	sections = []
	if opts.section:
		if (opts.section in config.sections()):
			sections = []
			sections.append(opts.section)
		else:
			raise Exception("Section not found in config file")
	else:
		print("processing all sections")
		sections = config.sections()

	targets = []
	targets.append('jni')

	header_outdir = opts.header_outdir
	if not os.path.exists(header_outdir):
		os.makedirs(header_outdir)

	impl_outdir = opts.impl_outdir
	if not os.path.exists(impl_outdir):
		os.makedirs(impl_outdir)

	makefile_outdir = opts.makefile_outdir
	if not os.path.exists(makefile_outdir):
		os.makedirs(makefile_outdir)

	for t in targets:
		print "\n... Generating bindings for target", t
		for s in sections:
			print "\n.... .... Processing section", s, "\n"

			layout_template_list = build_list_from_config(config, s, 'layout_templates')
			class_template_list = build_list_from_config(config, s, 'class_templates')
			function_template_list = build_list_from_config(config, s, 'function_templates')
			phantom_function_args_list = build_list_from_config(config, s, 'phantom_function_args')
			skip_functions_list = build_list_from_config(config, s, 'skip_functions')
			add_function_args_list = build_list_from_config(config, s, 'add_function_args')
			skip_functions_override_list = build_list_from_config(config, s, 'skip_functions_override')
			reorder_function_args_list = build_list_from_config(config, s, 'reorder_function_args')
			classes_list = build_list_from_config(config, s, 'classes')
			callback_classes_list = build_list_from_config(config, s, 'callback_classes')
			callback_types_list = build_list_from_config(config, s, 'callback_types')
			last_callbacks_list = build_list_from_config(config, s, 'last_callbacks')
			proxied_classes_list = build_list_from_config(config, s, 'proxied_classes')
			header_includes_list = build_list_from_config(config, s, 'header_includes')
			impl_includes_list = build_list_from_config(config, s, 'impl_includes')
			rename_types_list = build_list_from_config(config, s, 'rename_types')
			rename_types_override_list = build_list_from_config(config, s, 'rename_types_override')
			rename_classes_list = build_list_from_config(config, s, 'rename_classes')
			rename_functions_list = build_list_from_config(config, s, 'rename_functions')
			type_converters_list = build_list_from_config(config, s, 'type_converters')
			add_functions_file = config.get(s, 'add_functions_file')
			remove_functions_file = config.get(s, 'remove_functions_file')
			doc_file = config.get(s, 'doc_file')

			rename_types_dict = dict(zip(rename_types_list[:-1:2], rename_types_list[1::2]))
			rename_classes_dict = dict(zip(rename_classes_list[:-1:2], rename_classes_list[1::2]))
			rename_functions_dict = dict(zip(rename_functions_list[:-1:2], rename_functions_list[1::2])) 

			rename_types_override_dict = dict()
			for jclaz,nclaz,method,arg_idx,source_name,target_name in zip(rename_types_override_list[:-5:6], rename_types_override_list[1:-4:6], rename_types_override_list[2:-3:6], rename_types_override_list[3:-2:6], rename_types_override_list[4:-1:6], rename_types_override_list[5::6]):
				arg_idx = int(arg_idx)
				if arg_idx < 0:
					arg_idx = 0
				if jclaz not in rename_types_override_dict:
					rename_types_override_dict[jclaz] = dict()
				if nclaz not in rename_types_override_dict[jclaz]:
					rename_types_override_dict[jclaz][nclaz] = dict()
				if method not in rename_types_override_dict[jclaz][nclaz]:
					rename_types_override_dict[jclaz][nclaz][method] = dict()
				if arg_idx not in rename_types_override_dict[jclaz][nclaz][method]:
					rename_types_override_dict[jclaz][nclaz][method][arg_idx] = dict()
				if source_name not in rename_types_override_dict[jclaz][nclaz][method][arg_idx]:
					rename_types_override_dict[jclaz][nclaz][method][arg_idx][source_name] = target_name

			skip_functions_override_dict = dict()
			for jclaz,skip_function in zip(skip_functions_override_list[:-1:2], skip_functions_override_list[1::2]):
				if jclaz not in skip_functions_override_dict:
					skip_functions_override_dict[jclaz] = list()
				skip_functions_override_dict[jclaz].append(skip_function)

			file_prefix = config.get(s, 'prefix')

			section_header_outdir = header_outdir + '/' + file_prefix
			if not os.path.exists(section_header_outdir):
				os.makedirs(section_header_outdir)

			section_impl_outdir = impl_outdir + '/' + file_prefix
			if not os.path.exists(section_impl_outdir):
				os.makedirs(section_impl_outdir)

			section_internal_makefile_outdir = makefile_outdir + '/internal/' + file_prefix + '/jni'
			if not os.path.exists(section_internal_makefile_outdir):
				os.makedirs(section_internal_makefile_outdir)

			section_exported_makefile_outdir = makefile_outdir + '/exported/' + file_prefix
			if not os.path.exists(section_exported_makefile_outdir):
				os.makedirs(section_exported_makefile_outdir)

			gen_opts = {
				'add_function_args_list'		: 	add_function_args_list,
				'reorder_function_args_list'	: 	reorder_function_args_list,
				'classes'						:	classes_list,
				'class_template_list'			:	class_template_list,
				'function_template_list'		:	function_template_list,
				'header_includes_list'			:	header_includes_list,
				'impl_includes_list'			:	impl_includes_list,
				'jvm_options'					:	config.get(s, 'jvm_options'),
				'layout_template_list'			:	layout_template_list,
				'header_outdir'					:	section_header_outdir,
				'impl_outdir'					:	section_impl_outdir,
				'internal_makefile_outdir'		:	section_internal_makefile_outdir,
				'exported_makefile_outdir'		:	section_exported_makefile_outdir,
				'working_dir'					:	working_dir,
				'target'						:	script_dir,
				'type_converters_list'			: 	type_converters_list,
				'callback_classes_list'			:	callback_classes_list,
				'callback_types_list'			:	callback_types_list,
				'last_callbacks_list'			:	last_callbacks_list,
				'proxied_classes_list'			: 	proxied_classes_list,
				'file_prefix'					:	file_prefix,
				'rename_types_dict'				:	rename_types_dict,
				'rename_types_override_dict'	:	rename_types_override_dict,
				'rename_classes_dict'			: 	rename_classes_dict,
				'rename_functions_dict'			: 	rename_functions_dict,
				'singleton_field_name'			:	config.get(s, 'singleton_field'),
				'singleton_function_name'		:	config.get(s, 'singleton_function'),
				'phantom_function_args_list'	:	phantom_function_args_list,
				'skip_functions_list'			:	skip_functions_list,
				'skip_functions_override_dict'  : 	skip_functions_override_dict,
				'add_functions_file'			:	add_functions_file,
				'remove_functions_file'			:	remove_functions_file,
				'doc_file'						:	doc_file
			}
			generator_process = Process(target=GeneratorProcess(), args=(gen_opts,))
			generator_process.start()
			generator_process.join()
			if generator_process.exitcode != 0:
				raise

if __name__ == '__main__':
	try:
		main()
	except Exception as e:
		print e
		sys.exit(1)

