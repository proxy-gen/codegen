/*
 * Header (Instance CXX)
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
#set $protocol_class_header = $CONFIG.protocol_class_file_name
##
#set $entity_protocol_config = $CONFIG.entity_protocol
#set $entity_protocol_info = $entity_protocol_config['deriveddata']['targetdata']['protocolinfo']
#set $entity_protocol_typename = $entity_protocol_info['typename']
#set $entity_protocol_proxy_name = $entity_protocol_info['proxyname']
#set $entity_protocol_framework = $entity_protocol_info['framework']
#set $entity_protocol_nativefile = $entity_protocol_info['nativefile']
#set $entity_protocol_namespace = $entity_protocol_info['namespace']
##
#set $methods = $config_module.list_protocol_methods(protocol_tags=None,protocol_xtags=None,protocol_name=$protocol_name,method_tags=['_proxy'],method_xtags=None,method_name=None)	
##
#for $method in $methods
#set $parameter_str = ""
#set $parameters = $method['parameters']
#set $parameter_idx = 0
#set $proxied_typeinfo_list = list()
#set $enum_list = list()
#set $modifier_str = None
#if '_static' in $method['tags']
#set $modifier_str = 'static' 
#end if
#for $parameter in $parameters
    #set $typeinfo = $parameter['deriveddata']['targetdata']['typeinfo']
    #if 'isproxied' in $typeinfo
$proxied_typeinfo_list.append($typeinfo)#slurp
 	#elif 'isenum' in $typeinfo
$enum_list.append($typeinfo)#slurp
	#end if
    #if $parameter_idx > 0
        #set $parameter_str = $parameter_str + $COMMA
    #end if
    #if 'isproxied' in $typeinfo
    #set $parameter_str = $parameter_str + $typeinfo['namespace'] + '::' + $typeinfo['typename'] + " *"
	#elif 'isblock' in $typeinfo
	#for $block_parameter in $parameter['parameters']
	#set $block_typeinfo = $block_parameter['deriveddata']['targetdata']['typeinfo']
	#if 'isproxied' in $block_typeinfo
$proxied_typeinfo_list.append($block_typeinfo)#slurp
 	#elif 'isenum' in $block_typeinfo
$enum_list.append($block_typeinfo)#slurp
	#end if
	#end for
	#set $parameter_str = $parameter_str + $typeinfo['typename'].replace("TEMPORARY_BLOCK_NAME","arg" + str($parameter_idx))
	#else
	#set $parameter_str = $parameter_str + $typeinfo['typename'] + $REF
	#end if
	#if not 'isblock' in $typeinfo
    #set $parameter_str = $parameter_str + $SPACE + "arg" + str($parameter_idx)
	#end if
    #set $parameter_idx = $parameter_idx + 1
#end for
#set $method['parameter_str'] = $parameter_str
#set $returns = $method['returns'] 
#for $retrn in $returns
    #set $typeinfo = $retrn['deriveddata']['targetdata']['typeinfo']
    #if 'isproxied' in $typeinfo
$proxied_typeinfo_list.append($typeinfo)#slurp
    #set $method['retrn_type'] = $typeinfo['namespace'] + '::' + $typeinfo['typename'] + " *"
	#else
    #set $method['retrn_type'] = $typeinfo['typename']
    #end if
    #if 'isenum' in $typeinfo
$enum_list.append($typeinfo)#slurp
	#end if
    #break
#end for
#set $method['proxied_typeinfo_list'] = $proxied_typeinfo_list
#set $method['enum_list'] = $enum_list
#set $method['modifier_str'] = $modifier_str
#end for
##
#set $proxied_typeinfos = list()
#set $enum_typeinfos = list()
##
#for $method in $methods
$proxied_typeinfos.extend(method['proxied_typeinfo_list'])#slurp
$enum_typeinfos.extend(method['enum_list'])#slurp
#end for

// Generated Code 

#ifndef _$entity_protocol_typename
#define _$entity_protocol_typename

#set $included_types = list()
#for $proxied_typeinfo in $proxied_typeinfos
#if $proxied_typeinfo['filename'] not in $included_types
$included_types.append($proxied_typeinfo['filename'])#slurp
#if $protocol_class_header != $proxied_typeinfo['filename']
\#include "${proxied_typeinfo['filename']}"
#end if
#end if
#end for
#set $included_enums = list()
#for $enum_typeinfo in $enum_typeinfos
#if $enum_typeinfo['filename'] not in $included_enums
$included_enums.append($enum_typeinfo['filename'])#slurp
#if $protocol_class_header != $enum_typeinfo['filename']
\#include "${enum_typeinfo['filename']}"
#end if
#end if
#end for

\#include <vector>
\#include <map>
\#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace ${entity_protocol_namespace} {

// Forward Declarations
#set $forwarded_types = list()
#for $proxied_typeinfo in $proxied_typeinfos
#set $proxied_type = $proxied_typeinfo['typename']
#if $proxied_type not in $forwarded_types
$forwarded_types.append(proxied_type)#slurp
#set $proxied_namespace = $proxied_typeinfo['namespace']
#if $proxied_namespace == $entity_protocol_namespace
class $proxied_type;
#end if
#end if
#end for

class $entity_protocol_typename
{
public:
	//Public Constructors
	${entity_protocol_typename}(const ${entity_protocol_typename}* cc);
	${entity_protocol_typename}(const void * proxy);

	// Default Destructor
	~${entity_protocol_typename}();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions
	#for $method in $methods
	#set $method_name = $method['deriveddata']['functiondata']['functionname']

	$method['modifier_str'] $method['retrn_type'] ${method_name}($method['parameter_str']);
	#end for
private:
	void* _proxy;
};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _$entity_protocol_typename
