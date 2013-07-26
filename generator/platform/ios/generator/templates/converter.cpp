/*
 * Implementation (Proxy Converter CXX)
 * Author: cxx-bindings-generator
 */

#set $config_module = $CONFIG.config_module
#set $config_data = $config_module.config_data
#set $namespace = $config_data['namespace']
#set $package = $config_data['package']
##
#set $interfaces = $config_module.list_interfaces(tags=["_proxy"],xtags=None,name=None)	
##
#set $protocols = $config_module.list_protocols(tags=["_proxy"],xtags=None,name=None)
\#include "${package}Converter.hpp"

// Proxy Converter Types
#for $interface_config in $interfaces
#set $class_info = $interface_config['deriveddata']['targetdata']['classinfo']
#set $entity_class_name = $class_info['typename']
void convert_${entity_class_name}(void* objc, $entity_class_name *cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new ${entity_class_name}(objc));
	}
}
#end for

#for $protocol_config in $protocols
#set $protocolinfo = $protocol_config['deriveddata']['targetdata']['protocolinfo']
#set $entity_protocol_name = $protocolinfo['typename']
#set $entity_proxy_name = $protocolinfo['proxyname']
void convert_${entity_protocol_name}(void* objc, $entity_protocol_name *cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		//This shouldn't happen
	}
}
#end for

