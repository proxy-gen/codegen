#set $should_create_from_constructor = $current_class.is_instance
#set $should_create_from_singleton_function = $current_class.is_singleton_instance
#set $should_create_from_singleton_field = $current_class.is_enum or $current_class.is_singleton_field
#set $singleton_function_name = $current_class.generator.singleton_function_name
$current_class.class_doc
#if $current_class.inherits_proxy
class ${current_class.class_name} : public ${current_class.inherited_proxy_name}
#else
class ${current_class.class_name}
#end if
{

public:
	#if $should_create_from_constructor
	#for $constructor in $current_class.constructors
	${current_class.class_name}($constructor.constructor_param_signature);
	#end for
	#else if $should_create_from_singleton_field
	static ${current_class.class_name}& ${singleton_function_name}();
	#end if
	#if not $current_class.is_static_methods
	${current_class.class_name}(const ${current_class.class_name}& cc);
	${current_class.class_name}(void * proxy);
	virtual ~${current_class.class_name}();
	#end if
