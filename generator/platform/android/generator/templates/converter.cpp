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
#set $classinfo = $class_config['deriveddata']['targetdata']['classinfo']
#set $entity_class_name = $classinfo['typename']
void convert_${entity_class_name}(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		#if '_enum' not in $class_config['tags']
		${entity_class_name} *cxx_object = new ${entity_class_name}((void *) java_value);
		cxx_value = (long) cxx_object;
		#end if
	}
}
#end for

