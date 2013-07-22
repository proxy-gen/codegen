/*
 * Header (Proxy Converter CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//

#set $config_module = $CONFIG.config_module
#set $config_data = $config_module.config_data
#set $namespace = $config_data['namespace']
#set $package = $config_data['package']

// Generated Code 

#ifndef _${package}Converter
#define _${package}Converter
//
// Scroll Down 
//

#set $classes = $config_module.list_classes(tags=None,xtags=['_static'],name=None)	

\#include <CXXConverter.hpp>
\#include <CXXContext.hpp>
\#include <CXXTypeHierarchy.hpp>
\#include <CXXTypes.hpp>
\#include <JNIContext.hpp>
#for $class_config in $classes
#set $classinfo = $class_config['deriveddata']['targetdata']['classinfo']
#set $entity_file_name = $classinfo['filename']
\#include <${entity_file_name}>
#end for

using namespace ${namespace};
// #for $class_config in $classes
// #set $classinfo = $class_config['deriveddata']['targetdata']['classinfo']
// #set $class_namespace = $classinfo['namespace']
// #if $namespace != $class_namespace
// using namespace ${class_namespace};
// #end if
// #end for


// Proxy Converter Types
#for $class_config in $classes
#set $classinfo = $class_config['deriveddata']['targetdata']['classinfo']
#set $entity_class_name = $classinfo['typename']
void convert_${entity_class_name}(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
#end for

#endif // _${package}Converter
