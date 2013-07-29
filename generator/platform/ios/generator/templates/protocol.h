/*
 * Header (Protocol Interface)
 * Author: cxx-bindings-generator
 */

#set $SPACE = " "
#set $COMMA = ","
#set $REF = "&"
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
\#include "${protocol_abstract_class_file_name}"

@interface $entity_protocol_proxy_name : NSObject <$protocol_name> 

@property(readonly, nonatomic) $entity_protocol_namespace::$entity_protocol_typename * proxy;

+ ($entity_protocol_proxy_name *)conformerWithProxy:($entity_protocol_namespace::$entity_protocol_typename *)proxy;

@end

\#endif //_$entity_protocol_proxy_name
