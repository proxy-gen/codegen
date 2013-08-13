##  Copyright 2013 Zynga Inc.
##
##  Licensed under the Apache License, Version 2.0 (the "License");
##  you may not use this file except in compliance with the License.
##  You may obtain a copy of the License at
##
##      http://www.apache.org/licenses/LICENSE-2.0
##
##  Unless required by applicable law or agreed to in writing, software
##  distributed under the License is distributed on an "AS IS" BASIS,
##  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
##  See the License for the specific language governing permissions and
##  limitations under the License.
##
/*
 * Header (Proxy Converter CXX)
 * Author: codegen
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

#set $classes = $config_module.list_classes(tags=None,xtags=['_static','_no_proxy'],name=None)	

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

// Array Converter Types
#for $class_config in $classes
#set $classinfo = $class_config['deriveddata']['targetdata']['classinfo']
#set $entity_class_name = $classinfo['typename']
void convert_${entity_class_name}_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
#end for

// Array Of Array Converter Types
#for $class_config in $classes
#set $classinfo = $class_config['deriveddata']['targetdata']['classinfo']
#set $entity_class_name = $classinfo['typename']
void convert_${entity_class_name}_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
#end for

#endif // _${package}Converter
