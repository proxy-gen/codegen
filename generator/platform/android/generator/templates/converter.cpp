/*
 * Implementation (Proxy Converter CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//

#set $config_module = $CONFIG.config_module
#set $config_data = $config_module.config_data
#set $namespace = $config_data['namespace']
#set $package = $config_data['package']

#set $classes = $config_module.list_classes(tags=None,xtags=['_static'],name=None)	

\#include <${package}Converter.hpp>

// Proxy Converter Types
#for $class_config in $classes
#set $class_classinfo = $class_config['deriveddata']['targetdata']['classinfo']
#set $class_jnidata = $class_config['deriveddata']['jnidata']
#set $entity_class_name = $class_classinfo['typename']
void convert_${entity_class_name}(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		#if '_enum' in $class_config['tags']
		#set $class_jni_name = $class_jnidata['jnisignature']
		#set $enum_configs = $class_config['fields']
		const char * enum_string = 0;
		do
		{
			#for $enum_config in $enum_configs
			if ($enum_config['name'] == cxx_value)
			{
				enum_string = "$enum_config['name']";
				break;
			}
			#end for
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("${class_jni_name}"), enum_string);
		#else
		java_value = (long) ctx->findProxyComponent(cxx_value);
		#end if
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		#if '_enum' in $class_config['tags']
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		#set $enum_configs = $class_config['fields']
		do
		{
			#for $enum_config in $enum_configs
				if (strcmp("${enum_config['name']}", enum_string) == 0)
				{
					cxx_value = ${enum_config['name']};
					break;
				}
			#end for
		} 
		while (0);		
		#else
		${entity_class_name} *cxx_object = new ${entity_class_name}((void *) java_value);
		cxx_value = (long) cxx_object;
		#end if
	}
}
#end for

