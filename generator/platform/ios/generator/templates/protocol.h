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
 * Header (Protocol Interface)
 * Author: cxx-bindings-generator
 */

#set $SPACE = " "
#set $COMMA = ","
#set $REF = "&"
##
#set $config_module = $CONFIG.config_module
#set $config_data = $config_module.config_data
#set $package = $config_data['package']
##
#set $protocol_name = $CONFIG.protocol_name
#set $protocol_abstract_class_file_name = $CONFIG.protocol_abstract_class_file_name
##
#set $entity_protocol_config = $CONFIG.entity_protocol
#set $entity_protocol_info = $entity_protocol_config['deriveddata']['targetdata']['protocolinfo']
#set $entity_protocol_typename = $entity_protocol_info['conformertypename']
#set $entity_protocol_proxy_name = $entity_protocol_info['proxyname']
#set $entity_protocol_framework = $entity_protocol_info['framework']
#set $entity_protocol_nativefile = $entity_protocol_info['nativefile']
#set $entity_protocol_namespace = $entity_protocol_info['namespace']
##

\#ifndef _$entity_protocol_proxy_name
\#define _$entity_protocol_proxy_name

\#include <${entity_protocol_framework}/${entity_protocol_nativefile}>
\#include <${package}/conformers/${protocol_abstract_class_file_name}>

@interface $entity_protocol_proxy_name : NSObject <$protocol_name> 

@property(readonly, nonatomic) $entity_protocol_namespace::$entity_protocol_typename * proxy;

+ ($entity_protocol_proxy_name *)conformerWithProxy:($entity_protocol_namespace::$entity_protocol_typename *)proxy;

@end

\#endif //_$entity_protocol_proxy_name
