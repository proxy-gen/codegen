
import os, sys
from Cheetah.Template import Template
from collections import OrderedDict



# type convertors
params_handlers = {}
rt_handlers = {}


"""
all convertors mentioned here are defined in GenUtilsCXX.framework, please be sure it's attached to your generated project
"""

params_handlers["NSString"] = {"replaceWith": "string", "convertWith": "StringToNString", "ptrCxx": 0, "ptr": 1, "param_template": "const %s&"}
rt_handlers["NSString"] = {"replaceWith": "string", "convertWith": "NSStringToString", "ptrCxx": 0, "ptr": 1}

params_handlers["NSDate"] = {"replaceWith": "double", "convertWith": "TimstampToNSDate", "ptrCxx": 0}
rt_handlers["NSDate"] = {"replaceWith": "double", "convertWith": "NSDateToTimestamp", "ptrCxx": 0}

params_handlers["NSLocale"] = {"replaceWith": "string", "convertWith": "LocaleIdToLocale", "ptrCxx": 0, "param_template": "const %s&"}
rt_handlers["NSLocale"] = {"replaceWith": "string", "convertWith": "LocaleToLocaleId", "ptrCxx": 0}

params_handlers["NSURL"] = {"replaceWith": "string", "convertWith": "StringToNSURL", "ptrCxx": 0, "param_template": "const %s&"}
rt_handlers["NSURL"] = {"replaceWith": "string", "convertWith": "NSURLToString", "ptrCxx": 0}

# TODO: define NSData convertor, need more use cases
params_handlers["NSData"] = {"replaceWith": "const string&", "convertWith": "NSDataConvertorTODO", "ptrCxx": 0}
rt_handlers["NSData"] = {"replaceWith": "string", "convertWith": "NSDataConvertorTODO", "ptrCxx": 0}

params_handlers["NSInteger"] = {"replaceWith": "int", "convertWith": "", "ptrCxx": 0}
rt_handlers["NSInteger"] = {"replaceWith": "int", "convertWith": "", "ptrCxx": 0}

params_handlers["NSUInteger"] = {"replaceWith": "int", "convertWith": "", "ptrCxx": 0}
rt_handlers["NSUInteger"] = {"replaceWith": "int", "convertWith": "", "ptrCxx": 0}

params_handlers["NSTimeInterval"] = {"replaceWith": "int", "convertWith": "", "ptrCxx": 0}
rt_handlers["NSTimeInterval"] = {"replaceWith": "int", "convertWith": "", "ptrCxx": 0}

# TODO: define NSNumber convertor, need more use cases
params_handlers["NSNumber"] = {"replaceWith": "int", "convertWith": "", "ptrCxx": 0}
rt_handlers["NSNumber"] = {"replaceWith": "int", "convertWith": "", "ptrCxx": 0}

params_handlers["BOOL"] = {"replaceWith": "bool", "convertWith": "CXXToObjCBool", "ptrCxx": 0}
rt_handlers["BOOL"] = {"replaceWith": "bool", "convertWith": "ObjCToCXXBool", "ptrCxx": 0}

# simple types, no conversion required
params_handlers["int"] = {"replaceWith": "int", "convertWith": "", "ptrCxx": 0}
rt_handlers["int"] = {"replaceWith": "int", "convertWith": "", "ptrCxx": 0}

params_handlers["double"] = {"replaceWith": "double", "convertWith": "", "ptrCxx": 0}
rt_handlers["double"] = {"replaceWith": "double", "convertWith": "", "ptrCxx": 0}

params_handlers["long"] = {"replaceWith": "long", "convertWith": "", "ptrCxx": 0}
rt_handlers["long"] = {"replaceWith": "long", "convertWith": "", "ptrCxx": 0}

params_handlers["long long"] = {"replaceWith": "long long", "convertWith": "", "ptrCxx": 0}
rt_handlers["long long"] = {"replaceWith": "long long", "convertWith": "", "ptrCxx": 0}





class ConvertorsGenerator:
    SUPPORTED_CONTAINERS = {"NSDictionary": {"cxx_template": "map<string,%s%s>", "cxx_container_t": "map"},
                            "NSArray": {"cxx_template": "vector<%s%s>", "cxx_container_t": "vector"}}

    def __init__(self):
        self._definitions = OrderedDict()
        self.generator = None # TODO

        self.enums = {}
        self.cxx_classes = set()

    def createClassConvertor(self, cxx_className, objc_className):
        params = {}
        params["cxx_className"] = cxx_className
        params["objc_className"] = objc_className

        self.cxx_classes.add(cxx_className)

        definition_text = generator.load_template("convertor_class.template", params)

        params_handlers[objc_className] = {"replaceWith": "%s" % cxx_className, "convertWith": "%s_ConvertToNative" % cxx_className, "ptr": 1, "param_template": "%s&"} # not defined yet
        rt_handlers[objc_className] = {"replaceWith": "%s" % cxx_className, "convertWith": "%s_ConvertFromNative" % cxx_className, "ptr": 1}

        convertor_name = "%s_from_%s" % (cxx_className, objc_className)
        self._definitions[convertor_name] = definition_text

    def createContainersConvertor(self, objc_t):
        cxx_t = params_handlers.get(objc_t).get("replaceWith", "")
        cxx_t = cxx_t.replace("*", "") # tmp_replacement
        cxx_ptr = params_handlers.get(objc_t).get("ptrCxx", True)
        objc_ptr = params_handlers.get(objc_t).get("ptr", 1)

        params = {}
        params["cxx_t"] = cxx_t
        params["objc_t"] = objc_t
        params["convertWith"] = params_handlers.get(objc_t).get("convertWith", "")

        # objc ptr information
        objc_ptr_mark = ("", "*")[objc_ptr]
        cxx_ptr_mark = ("", "*")[cxx_ptr]

        params["objc_ptr"] = objc_ptr_mark
        params["cxx_ptr"] = cxx_ptr_mark

        convertor_name = "%s_container_convertors"
        definition_text = generator.load_template("convertor_containers.template", params)
        self._definitions[convertor_name] = definition_text

        # register created functions
        for objc_container_t, container_opts in self.SUPPORTED_CONTAINERS.items():
            cxx_container_t = container_opts.get("cxx_container_t")

            # to native from cxx
            function_name = "%s_of_%s_to_%s" % (cxx_container_t, cxx_t, objc_container_t)
            opts = {"replaceWith": container_opts.get("cxx_template") % (cxx_t, cxx_ptr_mark), "convertWith": function_name, "ptr": 1, "param_template": "const %s&"}

            convertor_name = "_%s_of_%s" % (objc_container_t, objc_t)
            params_handlers[convertor_name] = opts

            # from cxx to native
            function_name = "%s_to_%s_of_%s" % (objc_container_t, cxx_container_t, cxx_t)
            opts = {"replaceWith": container_opts.get("cxx_template") % (cxx_t, cxx_ptr_mark), "convertWith": function_name, "ptr": 1, "ptrCxx": 0}

            convertor_name = "_%s_of_%s" % (cxx_container_t, cxx_t) #TODO
            rt_handlers[convertor_name] = opts

    def addConvertorAsText(self, convertor_name, text):
        self._definitions[convertor_name] = text

    def generate_code(self):
        text = "\n".join(self._definitions.values())

        params = {}
        params["convertors_definition"] = text
        params["namespace"] = generator.namespace

        definition_text = generator.load_template("convertors_file.template", params)
        return definition_text


cgen = ConvertorsGenerator()


class NativeType(object):

    def __init__(self, name, opts={}):
        self.coercion_required = False
        self.container_type = ""

        self.is_ptr = False
        if name.endswith("*"):
            self.is_ptr = True

        name = name.replace("*", "")
        self.name = name

        if (name == "id"):
            assert "cast_id_to" in opts, "cast information is not specified in options for id type"
            if opts.get("cast_id_to"):
                self.coercion_required = True
                self.name = opts.get("cast_id_to")

        elif name in cgen.SUPPORTED_CONTAINERS:
            assert "cast_id_to" in opts, "cast information is not specified in options for container type"
            self.name  = opts.get("cast_id_to", "")
            self.container_type = name

            cgen.createContainersConvertor(self.name)

    def void(self):
        return self.name == "void"

    def cxx_param(self):
        opts = self._get_params_opts()
        template = opts.get("param_template", "")
        if template:
            return template % opts["replaceWith"]

        return opts["replaceWith"]

    def cxx_param_convertor(self):
        opts = self._get_params_opts()
        return opts["convertWith"]

    def objc_param_conversion_t(self):
        if self.container_type:
            return "%s *" % self.container_type

        if self.is_ptr:
            return "%s *" % self.name
        return self.name

    def cxx_rt(self):
        if self.void():
            return "void"

        opts = self._get_rt_opts()
        ptr_cxx = opts.get("ptrCxx", True)
        if ptr_cxx:
            return "%s *" % opts["replaceWith"]

        return opts["replaceWith"]

    def objc_rt(self):
        if self.void():
            return "void"

        if self.container_type:
            return "%s *" % self.container_type

        if self.is_ptr:
            return "%s *" % self.name

        return self.name

    def objc_coercion_t(self):
        return self.coercion_t

    def objc_rt_convertor(self):
        opts = self._get_rt_opts()
        return opts["convertWith"]

    def _get_params_opts(self):
        if self.container_type:
            return params_handlers["_%s_of_%s" % (self.container_type, self.name)]

        return params_handlers[self.name]

    def _get_rt_opts(self):
        if self.container_type:
            return rt_handlers["%s_of_%s" % (self.container_type, self.name)]

        return rt_handlers[self.name]

    def cxx_rt_conversion_t(self):
        pass


class NativeParameter(object):

    def __init__(self, native_type, name, selector_name):
        self.nt = native_type
        self.name = name
        self.selector_name = selector_name

    def to_cxx_param(self):
        return "%s _%s" % (self.nt.cxx_param(), self.name)

    def to_objc_param(self):
        pass

    def to_objc_message(self):
        return "%s:__%s" % (self.selector_name, self.name)

    def to_conversion_string(self):
        return "%s __%s = %s;" % (self.nt.objc_param_conversion_t(), self.name, self._convertor_call_string())

    def _convertor_call_string(self):
        convertWith = self.nt.cxx_param_convertor()

        if not convertWith:
            return "_%s" % self.name

        return "%s (_%s)" % (convertWith, self.name)


class NativeMethod(object):
    RETTYPE_VOID = "void"
    MODIFIER_STATIC = "static"

    def __init__(self, node, nclass):
        self.node = node
        self.nclass = nclass
        self.generator = nclass.generator

        self.selector_name = node.get("selector", "").strip(":")
        self.selector = self.selector_name.split(":")

        self.opts = nclass.methods_opts.closest_match(self.selector) or {}

        self.name = self.selector[0]
        self.cxx_name = self.opts.get("cxx_name", "") or self.selector[0]

        self.arguments = []
        self.native_callback = None

        self.is_static = (node.get("class_method")=="true")

        params = self.node.findall("arg")
        retval = self.node.find("retval")

        for position, param in enumerate(params):

            selector_name = self.selector[position]
            param_name = param.get("name")
            param_type = param.get("declared_type")
            param_opts = self.opts.get("param_opts", {}).get(param_name, {}) # TODO: verify name in params

            native_type = NativeType(param_type, param_opts)
            param = NativeParameter(native_type, param_name, selector_name)

            self.arguments.append(param)

        retval_type = retval.get("declared_type")
        self.rt = NativeType(retval_type, self.opts) # TODO: use separate opts dictionary

    def checkCfg(self, opts):
        required_sections = (
            )

        for section in required_sections:
            assert section in opts, "config section '%s' is not presented for method '%s'" % (section, self.selector_name)

    def get_context(self):
        ctx = self.nclass.get_context() # inherit context from class

        ctx["cxx_methodName"] = self.cxx_name
        ctx["cxx_static"] = ""
        if self.is_static:
            ctx["cxx_static"] = "static"
            ctx["objc_instance"] = ctx["objc_className"] # use class instead of object

        return ctx

    def generate_signature(self):
        custom_declaration = self._use_custom_declaration()
        if custom_declaration:
            return custom_declaration

        return self._generate_method_signature();

    def _generate_method_signature(self):
        params = self.get_context()

        params["cxx_rt"] = self.rt.cxx_rt()
        params["cxx_ptr"] = ""
        params["cxx_params"] = ""

        if self.arguments:
            params["cxx_params"] = ", ".join([a.to_cxx_param() for a in self.arguments])

        return self.generator.load_template("method_signature.template", params)

    def generate_definition(self):
        custom_definition = self._use_custom_definition()
        if custom_definition:
            return custom_definition

        return self._generate_method_definition()

    def _use_custom_definition(self):
        if self.opts.get("use_custom_definition", ""):
            return self.generator.load_template(self.opts.get("use_custom_definition"), {})
        return ""

    def _use_custom_declaration(self):
        if self.opts.get("use_custom_declaration", ""):
            return self.generator.load_template(self.opts.get("use_custom_declaration"), {})
        return ""

    def _generate_method_definition(self):
        params = self.get_context()

        params["cxx_rt"] = self.RETTYPE_VOID
        params["objc_rt"] = ""
        params["objc_rv_conversion"] = ""
        params["ptr_cxx"] = ""

        if not self.rt.void():
            params["cxx_rt"] = self.rt.cxx_rt()
            params["objc_rt"] = self.rt.objc_rt()

            objc_result_var_name = "result"
            params["objc_result_var"] = objc_result_var_name
            params["objc_result_conversion"] = "return %s" % (objc_result_var_name)

            convertWith = self.rt.objc_rt_convertor()

            if convertWith:
                if self.rt.coercion_required:
                    params["objc_result_conversion"] = "return %s((%s)%s)" % (convertWith, self.rt.objc_rt(), objc_result_var_name)
                else:
                    params["objc_result_conversion"] = "return %s(%s)" % (convertWith, objc_result_var_name)

        # deprecated: callback is no longer supported
        params["objc_callback_t"] = ""
        params["objc_callback_selector"] = ""

        params["delegate_callback"] = ""
        params["delegate_obj"] = ""
        params["delegate_call"] = ""
        params["callback_data_t"] = ""
        params["delegate_data_convertor"] = ""

        params["cxx_params"] = ""
        params["cxx_params_conversion"] = ""
        params["objc_message"] = self.selector_name # use just selector name if there are not args

        if self.arguments:
            params["cxx_params"] = ", ".join([a.to_cxx_param() for a in self.arguments] + self.opts.get("add_cxx_params", []))
            params["cxx_params_conversion"] = "\n".join([a.to_conversion_string() for a in self.arguments])
            params["objc_message"] = " ".join([a.to_objc_message() for a in self.arguments])

        return self.generator.load_template("method_definition.template", params)

    def __repr__(self):
        return "<method (%s)>" % (":".join(self.selector))


class NativeClass(object):
    def __init__(self, node, generator):
        self.node = node
        self.interface_name = node.get("name")

        self.opts = generator.interfaces_opts.get(self.interface_name)
        self.checkCfg(self.opts)

        self.load_methods_opts()

        #self.objc_instance = self.opts.get("objc_instance_field", "self")
        self.typedef_name = self.opts.get("typedef_name", "")
        self.output_target_name = self.opts.get("output_target", "")

        self.objc_class_name = self.typedef_name or self.interface_name
        self.cxx_class_name = self.opts.get("cxx_class_name") or self.interface_name

        self.methods = OrderedDict()
        self.properties = OrderedDict()
        self.methods_from_properties = {}

        self.generator = generator

        if self.opts.get("add_wrapping_constructor", False):
            cgen.createClassConvertor(self.cxx_class_name, self.objc_class_name)

    def checkCfg(self, opts):
        required_sections = (
            "output_target",
            "cxx_class_name",
            "skip_properties",
            "skip_methods",
            "properties",
            "methods",
            )

        for section in required_sections:
            assert section in opts, "config section '%s' is not presented for native class '%s'" % (section, self.interface_name)

    def get_context(self):
        ctx = {}
        ctx["cxx_className"] = self.cxx_class_name
        ctx["cxx_baseClass"] = self.opts.get("cxx_base_class", "")
        ctx["cxx_singleton"] = self.opts.get("cxx_singleton_field", "")

        ctx["objc_className"] = self.objc_class_name
        ctx["objc_instance"] = self.opts.get("objc_instance_field", "self")

        return ctx

    def _property_setter_name(self, property_name):
        return "set" + property_name[0].upper() + property_name[1:]

    def load_methods_opts(self):
        cfg_opts = SelectorTreeNode()
        cfg_skip = SelectorTreeNode()

        # load options for usual methods
        methods_opts = self.opts.get("methods", {})
        for key, value in methods_opts.items():
            key = key.strip(":")
            selector = key.split(":")

            cfg_opts.set_data(selector, value)

        # load options for methods based on properties
        properties_opts = self.opts.get("properties", {})
        for property_name, opts in properties_opts.items():

            read_only = opts.get("readonly", False)

            # adjust option format
            getter_opts = {"cxx_name": opts.pop("cxx_getter_name", "")}
            setter_opts = {"cxx_name": opts.pop("cxx_setter_name", "")}

            getter_opts.update(opts)
            setter_opts.update(opts)

            cfg_opts.set_data([property_name,], getter_opts)
            cfg_opts.set_data([self._property_setter_name(property_name),], setter_opts)

            if read_only:
                cfg_skip.set_data([self._property_setter_name(property_name),], True)

            print [property_name,], getter_opts
            print [self._property_setter_name(property_name),], setter_opts

        # load skip method list
        methods_names = self.opts.get("skip_methods", [])
        for name in methods_names:
            name = name.strip(":")
            selector = name.split(":")

            cfg_skip.set_data(selector, True)

        # skip property based methods
        properties_names = self.opts.get("skip_properties", [])
        for property_name in properties_names:
            cfg_skip.set_data([property_name,], True)
            cfg_skip.set_data([self._property_setter_name(property_name),], True)

        self.methods_opts = cfg_opts
        self.skip_methods = cfg_skip


    def generate_definition(self):
        params = self.get_context()

        params["custom_section"] = self._definition_custom_section()
        params["cxx_classMethods"] =  self._generate_methods_definition()
        params["add_wrapping_constructor"] = self.opts.get("add_wrapping_constructor", False)

        return self.generator.load_template("class_definition.template", params)

    def generate_header(self):
        params = self.get_context()

        params["custom_section"] = self._header_custom_section()
        params["cxx_classMethods"] = self._generate_methods_signatures()
        params["add_wrapping_constructor"] = self.opts.get("add_wrapping_constructor", False)

        return self.generator.load_template("class_header.template", params)

    def _header_custom_section(self):
        if self.opts.get("include_declaration_custom_section", ""):
            return self.generator.load_template(self.opts.get("include_declaration_custom_section"), {})
        return ""

    def _definition_custom_section(self):
        if self.opts.get("include_definition_custom_section", ""):
            return self.generator.load_template(self.opts.get("include_definition_custom_section"), {})
        return ""

    def _generate_methods_definition(self):
        property_wrappers = "\n\n".join([m.generate_definition() for m in self.properties.values()])

        methods = "\n\n".join([m.generate_definition() for m in self.methods.values()])
        return property_wrappers + "\n\n" + methods

    def _generate_methods_signatures(self):
        property_wrappers = "\n\n".join([m.generate_signature() for m in self.properties.values()])

        methods = "\n\n".join([m.generate_signature() for m in self.methods.values()])
        return property_wrappers + "\n\n" + methods

    def parse(self):
        for node in self.node.findall("method"):
            self._process_method(node)

    def _process_method(self, node):
        selector_name = node.get("selector", "").strip(":")
        selector = selector_name.split(":")

        print "processing method", self.interface_name, selector_name
        if self.skip_methods.closest_match(selector):
            print "skipping..."
            return

        m = NativeMethod(node, self)
        self.methods[m.selector_name] = m



class SelectorTreeNode:
    def __init__(self, selector=[], data=None):
        self.children = {}
        self.data = None
        self.set_data(selector, data)

    def set_data(self, selector, data={}):
        if selector:
            currentId = selector[0]
            currentNode = self.children.get(currentId, None)

            if currentNode:
                currentNode.set_data(selector[1:], data)
            else:
                currentNode = SelectorTreeNode(selector[1:], data)
                self.children[currentId] = currentNode
        else:
            self.data = data


    def has_selector(self, selector):
        if selector:
            currentId = selector[0]
            current = self.children.get(currentId, None)

            if current is None:
                return False

            else:
                return current.has_data(selector[1:])
        # TODO: change condition
        return True

    def exact_match(self, selector):
        if selector:
            currentId = selector[0]
            current = self.children.get(currentId, None)

            if current:
                return current.exact_match(selector[1:])
        else:
            return self.data

        return None

    def closest_match(self, selector):
        if selector:
            currentId = selector[0]
            current = self.children.get(currentId, None)

            if current:
                result = current.closest_match(selector[1:])

                if result is not None:
                    return result

        return self.data

    def get(self, key, default=None):
        result = self.closest_match(key.strip(":").split(":"))

    def __getitem__(self, key):
        return self.closest_match(key.strip(":").split(":"))


class OutputTarget:
    def __init__(self, name, opts, generator):
        self.name = name
        self.generator = generator
        self.opts = opts
        self.checkCfg(opts)

        self.namespace = generator.namespace

        self.include_to_definition = opts["definition_includes"] + ("\"%s.hpp\"" % opts["prefix"],)
        self.include_to_header = opts["header_includes"]

        result_dir = generator.result_dir
        self.header_filename = os.path.join(result_dir, opts["prefix"] + ".hpp")
        self.definition_filename = os.path.join(result_dir, opts["prefix"] + ".mm")

        self.classes = []
        self.enums = []

    def checkCfg(self, opts):
        optional_sections = (
            "skip_header",
            "include_definition_custom_section",
            "include_header_custom_section"
            )

        required_sections = (
            "prefix",
            "header_includes",
            "definition_includes"
            )

        for section in required_sections:
            assert section in opts, "config section '%s' is not presented for output target '%s'" % (section, self.name)


    def add_native_class(self, nclass):
        self.classes.append(nclass)

    def add_native_enum(self, nenum):
        self.enums.append(nenum)

    def _definition_custom_section(self):
        if self.opts.get("include_definition_custom_section", ""):
            return self.generator.load_template(self.opts.get("include_definition_custom_section"), {})
        return ""

    def _custom_convertors_section(self):
        if self.opts.get("include_custom_convertors", ""):
            return self.generator.load_template(self.opts.get("include_custom_convertors"), {})
        return ""

    def _header_custom_section(self):
        if self.opts.get("include_header_custom_section", ""):
            return self.generator.load_template(self.opts.get("include_header_custom_section"), {})
        return ""

    def _generate_definition(self):
        content_text = []
        typedef_text = []

        for nclass in self.classes:
            t = nclass.generate_definition()
            content_text.append(t)

            if nclass.typedef_name and (nclass.typedef_name != nclass.interface_name):
                td = "typedef ::%s %s;" % (nclass.interface_name, nclass.typedef_name)
                typedef_text.append(td)

        params = {}
        params["custom_convertors"] = self._custom_convertors_section()
        params["generated_convertors"] = cgen.generate_code()
        params["custom_section"] = self._definition_custom_section()

        params["namespace"] = self.namespace
        params["include_headers"] = "\n".join(map(lambda x: "#import %s" % x, self.include_to_definition))
        params["typedef_list"] = "\n".join(typedef_text)
        params["cxx_definitions"] = "\n\n".join(content_text)

        text = str(self.generator.load_template("definition_file.template", params))
        open(self.definition_filename, "w").write(text)

    def _generate_header(self):
        content_text = []

        for nenum in self.enums:
            t = nenum.generate_declaration()
            content_text.append(t)

        for nclass in self.classes:
            t = nclass.generate_header()
            content_text.append(t)

        params = {}
        params["custom_section"] = self._header_custom_section()
        params["namespace"] = self.namespace
        params["include_headers"] = "\n".join(map(lambda x: "#include %s" % x, self.include_to_header))
        params["cxx_declarations"] = "\n\n".join(content_text)

        text = str(self.generator.load_template("header_file.template", params))
        open(self.header_filename, "w").write(text)

    def generate_code(self):
        if not self.opts.get("skip_header", True):
            self._generate_header()
        self._generate_definition()


class NativeEnum:
    def __init__(self, name, values, generator):
        opts = generator.objc_enums.get(name, {})
        self.objc_name = name

        self.checkCfg(opts)
        self.opts = opts

        self.cxx_name = self.opts.get("cxx_name", "_%s" % name.upper())

        self.output_target_name = self.opts.get("output_target", "")

        self.values = values
        self.generator = generator

        opts = {"replaceWith": self.cxx_name, "convertWith": "Convert_%s_to_%s" % (self.cxx_name, self.objc_name)}
        params_handlers[self.objc_name] = opts

        opts = {"replaceWith": self.cxx_name, "convertWith": "Convert_%s_from_%s" % (self.cxx_name, self.objc_name)}
        rt_handlers[self.objc_name] = opts

    def checkCfg(self, opts):
        required_sections = (
            "output_target",
            )

        for section in required_sections:
            assert section in opts, "config section '%s' is not presented for enum '%s'" % (section, self.name)

    def generate_declaration(self):
        params = {}
        params["objc_name"] = self.objc_name
        params["cxx_name"] = self.cxx_name
        params["elements"] = ",\n".join([ "_%s = %s" % (elmt.upper(), value) for (elmt, value) in self.values])

        text = generator.load_template("enum.template", params)
        return text

    def generate_convertor(self):
        params = {}
        params["objc_name"] = self.objc_name
        params["cxx_name"] = self.cxx_name
        elements = {}
        for elmt, _ in self.values:
            elements[elmt] = "_%s" % elmt.upper()

        params["elements"] = elements

        text = generator.load_template("convertor_enum.template", params)
        return text


class Generator():
    def __init__(self, opts):
        self.checkCfg(opts)

        self.opts = opts
        self.namespace = opts["namespace"]

        self.output_targets = opts["output_targets"]

        self.objc_headers = opts["objc_headers"]
        self.objc_interfaces = opts["objc_interfaces"]
        self.objc_enums = opts["enums_opts"]

        self.interfaces_opts = opts["interfaces_opts"]

        self.result_dir = opts["result_dir"]
        self.templates_dir = opts["templates_dir"]
        self.generated_classes = OrderedDict()
        self.generated_enums = OrderedDict()

        cgen.generator = self

    def checkCfg(self, opts):
        required_sections = ("headers_search_path",
                           "namespace",
                           "objc_headers",
                           "objc_interfaces",
                           "custom_params_handlers",
                           "custom_rt_handlers",
                           "enums_opts",
                           "interfaces_opts",
                           "output_targets",
                           "templates_dir",
                           "result_dir")

        for section in required_sections:
            assert section in opts, "top level section '%s' is not presented in the config" % section

    def _generateMetadata(self):
        import subprocess, tempfile
        import os.path

        xml = ""

        executable = "/usr/bin/gen_bridge_metadata"
        header_search_path = " ".join(map(lambda x: "-I%s" % os.path.abspath(x), self.opts["headers_search_path"]))
        headers = " ".join(map(lambda x: os.path.abspath(x), self.opts["objc_headers"]))
        cmd = "%s -F complete -c '-D__CC_PLATFORM_IOS %s' %s" % (executable, header_search_path, headers)

        retcode = os.system("%s > ./out.xml" % cmd)

        if retcode == 0:
            f = open("./out.xml")
            xml = f.read()
            f.close()

        return xml

    def _parseMetadata(self):
        import xml.etree.ElementTree as et

        xml = self._generateMetadata()
        if xml:
            root = et.fromstring(xml)

            for node in root.findall("class"):
                name = node.get("name", "")

                if not (name in self.objc_interfaces):
                    continue

                if not self.generated_classes.has_key(name):
                    print "processing class", name

                    nclass = NativeClass(node, self)

                    # mark class as processed
                    self.generated_classes[name] = nclass

            enums = {}
            for enum_name in self.objc_enums.keys():
                enums[enum_name] = []

            for node in root.findall("enum"):
                name = node.get("name", "")

                for enum_name, enum_values in enums.items():
                    if name.startswith(enum_name):
                        enum_values.append([name, int(node.get("value"))])

            for enum_name, enum_values in enums.items():
                self.generated_enums[enum_name] = NativeEnum(enum_name, enum_values, self)


    def load_template(self, name, params):
        t = Template(file=os.path.join(self.templates_dir, name), searchList=[params,])
        return str(t)

    def generate_code(self):
        # load everything into memory
        self._parseMetadata()

        for nclass in self.generated_classes.values():
            # parse each class
            nclass.parse()

        # generate and write code
        targets = {}
        for name, opts in self.output_targets.items():
            targets[name] = OutputTarget(name, opts, self)

        for name in self.objc_interfaces:

            nclass = self.generated_classes.get(name, None)
            if not nclass:
                continue

            target = targets.get(nclass.output_target_name, None)
            if not target:
                continue

            target.add_native_class(nclass)

        for enum_name, nenum in self.generated_enums.items():
            cgen.addConvertorAsText("%s_convertors" % nenum.objc_name, nenum.generate_convertor())

            target = targets.get(nenum.output_target_name, None)
            if not target:
                continue

            target.add_native_enum(nenum)

        for target in targets.values():
            target.generate_code()



def loadConfig(configName):
    module_path = "confs." + configName

    module = __import__(module_path, globals(), locals(), ['*'])
    opts = getattr(module, "opts")

    return opts


if __name__ == '__main__':
    opts = loadConfig(sys.argv[1])

    # update handlers
    params_handlers.update(opts.get("custom_params_handlers", {}))
    rt_handlers.update(opts.get("custom_rt_handlers", {}))

    generator = Generator(opts)
    generator.generate_code()
