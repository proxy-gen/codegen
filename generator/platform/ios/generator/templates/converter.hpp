##
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
 * Author: cxx-bindings-generator
 */

#set $config_module = $CONFIG.config_module
#set $config_data = $config_module.config_data
#set $namespace = $config_data['namespace']
#set $package = $config_data['package']

\#ifndef _${package}Converter
\#define _${package}Converter

\#include <string>
\#include <map>
\#include <vector>

\#define CONVERT_TO_OBJC 1
\#define CONVERT_TO_CXX  2

typedef unsigned int converter_t;

void convert_string(void* &objc, std::string &cxx, converter_t converter_type);

void convert_error(void* &objc, std::string &cxx, converter_t converter_type);

void convert_array(void* &objc, std::vector<void *> &cxx, converter_t converter_type);

void convert_dictionary(void* &objc, std::map<void *, void *> &cxx, converter_t converter_type);

void convert_url(void* &objc, std::string &cxx, converter_t converter_type);

void convert_date(void* &objc, double &cxx, converter_t converter_type);

void convert_locale(void* &objc, std::string &cxx, converter_t converter_type);

void convert_object(void* &objc, void* &cxx, converter_t converter_type);

#set $interfaces = $config_module.list_interfaces(tags=["_proxy"],xtags=None,name=None)
##
#set $protocols = $config_module.list_protocols(tags=["_proxy"],xtags=None,name=None)
##
#for $interface_config in $interfaces
#set $class_info = $interface_config['deriveddata']['targetdata']['classinfo']
#set $entity_file_name = $class_info['filename']
\#include <${package}/proxies/${entity_file_name}>
#end for
#for $protocol_config in $protocols
#set $protocolinfo = $protocol_config['deriveddata']['targetdata']['protocolinfo']
#set $entity_file_name = $protocolinfo['conformerfilename']
\#include <${package}/conformers/${entity_file_name}>
#end for
#for $protocol_config in $protocols
#set $protocolinfo = $protocol_config['deriveddata']['targetdata']['protocolinfo']
#set $entity_file_name = $protocolinfo['filename']
\#include <${package}/proxies/${entity_file_name}>
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
#set $entity_protocol_name = $protocolinfo['conformertypename']
void convert_${entity_protocol_name}(void* &objc, $entity_protocol_name *&cxx, converter_t converter_type);
#end for
#for $protocol_config in $protocols
#set $protocolinfo = $protocol_config['deriveddata']['targetdata']['protocolinfo']
#set $entity_protocol_name = $protocolinfo['typename']
void convert_${entity_protocol_name}(void* &objc, $entity_protocol_name *&cxx, converter_t converter_type);
#end for

\#endif // _${package}Converter
