/*
 * Header (Proxy Converter CXX)
 * Author: cxx-bindings-generator
 */

#set $config_module = $CONFIG.config_module
#set $config_data = $config_module.config_data
#set $namespace = $config_data['namespace']
#set $package = $config_data['package']

#ifndef _${package}Converter
#define _${package}Converter

#set $interfaces = $config_module.list_interfaces(tags=["_proxy"],xtags=None,name=None)
##
#set $protocols = $config_module.list_protocols(tags=["_proxy"],xtags=None,name=None)
##
\#include <CXXConverter/CXXConverter.hpp>
#for $interface_config in $interfaces
#set $class_info = $interface_config['deriveddata']['targetdata']['classinfo']
#set $entity_file_name = $class_info['filename']
\#include "${entity_file_name}"
#end for
#for $protocol_config in $protocols
#set $protocolinfo = $protocol_config['deriveddata']['targetdata']['protocolinfo']
#set $entity_file_name = $protocolinfo['filename']
\#include "${entity_file_name}"
#end for

using namespace ${namespace};

// Proxy Converter Types
#for $interface_config in $interfaces
#set $class_info = $interface_config['deriveddata']['targetdata']['classinfo']
#set $entity_class_name = $class_info['typename']
void convert_${entity_class_name}(void* &objc, $entity_class_name *&cxx, converter_t converter_type);
#end for
#for $protocol_config in $protocols
#set $protocolinfo = $protocol_config['deriveddata']['targetdata']['protocolinfo']
#set $entity_protocol_name = $protocolinfo['typename']
void convert_${entity_protocol_name}(void* &objc, $entity_protocol_name *&cxx, converter_t converter_type);
#end for

#endif // _${package}Converter
