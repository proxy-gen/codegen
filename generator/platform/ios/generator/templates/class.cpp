/*
 * Implementation (Instance CXX)
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
#set $interface_name = $CONFIG.interface_name
##
#set $entity_class_config = $CONFIG.entity_class
#set $entity_class_info = $entity_class_config['deriveddata']['targetdata']['classinfo']
#set $entity_class_name = $CONFIG.entity_class_name
#set $entity_head_file_name = $CONFIG.entity_head_file_name
#set $entity_class_framework = $entity_class_info['framework']
#set $entity_class_nativefile = $entity_class_info['nativefile']
##
#set $methods = $config_module.list_methods(interface_tags=None,interface_xtags=None,interface_name=$interface_name,method_tags=['_proxy'],method_xtags=None,method_name=None)	
##
#for $method in $methods
#set $parameter_str = ""
#set $parameters = $method['parameters']
#set $parameter_idx = 0
#set $proxied_typeinfo_list = list()
#for $parameter in $parameters
    #set $typeinfo = $parameter['deriveddata']['targetdata']['typeinfo']
    #if 'isproxied' in $typeinfo
$proxied_typeinfo_list.append(typeinfo)#slurp
	#end if
    #if $parameter_idx > 0
        #set $parameter_str = $parameter_str + $COMMA
    #end if
    #if 'isproxied' in $typeinfo
    #set $parameter_str = $parameter_str + $typeinfo['namespace'] + '::' + $typeinfo['typename'] + " *"
	#elif 'isblock' in $typeinfo
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
$proxied_typeinfo_list.append(typeinfo)#slurp
    #set $method['retrn_type'] = $typeinfo['namespace'] + '::' + $typeinfo['typename'] + " *"
	#else
    #set $method['retrn_type'] = $typeinfo['typename']
    #end if
    #break
#end for
#set $method['proxied_typeinfo_list'] = $proxied_typeinfo_list
#end for
##
#set $proxied_typeinfos = list()
##
#for $method in $methods
$proxied_typeinfos.extend(method['proxied_typeinfo_list'])#slurp
#end for
##

\#include "${entity_head_file_name}"
\#include <${entity_class_framework}/${entity_class_nativefile}>
#set $included_types = list()
#for $proxied_typeinfo in $proxied_typeinfos
#if $proxied_typeinfo['nativefile'] not in $included_types
$included_types.append($proxied_typeinfo['nativefile'])#slurp
#if $entity_head_file_name != $proxied_typeinfo['nativefile']
\#include <${proxied_typeinfo['framework']}/${proxied_typeinfo['nativefile']}>
#end if
#end if
#end for

using namespace ${entity_class_info['namespace']};

#for $method in $methods
#set $message = ""
#set $parameters = $method['parameters']
#set $parameter_idx = 0
#set $method_name = $method['deriveddata']['functiondata']['functionname']
#set $selectorlist = $method['deriveddata']['objcdata']['selectorlist']
$method['retrn_type'] ${entity_class_name}::${method_name}($method['parameter_str']){
#for $parameter in $parameters
	#set $typeinfo = $parameter['deriveddata']['targetdata']['typeinfo']
	#if $parameter['converter'] == "convert_builtin"
	#if 'declared_type' in $parameter
	${parameter['declared_type']} objc_arg${parameter_idx} = (${parameter['declared_type']})arg${parameter_idx}
	#else
	${parameter['type']} objc_arg${parameter_idx} = arg${parameter_idx}
	#end if
	#elif $parameter['converter'] == "convert_enum"
	${parameter['type']} objc_arg${parameter_idx} = (${parameter['type']})arg${parameter_idx}
	##elif $parameter['converter'] == "convert_block"
	##${parameter['type']}
	#else
	void * objc_arg${parameter_idx} = NULL;
	${typeinfo['typeconverter']}(objc_arg${parameter_idx}, arg${parameter_idx}, CONVERT_TO_OBJC)
	#end if
	#set $message_part = ""
	#if $parameter['kind'] == "ObjCObjectPointer"
	#set $message_part = $selectorlist[$parameter_idx] + ":" + "(__bridge " + $parameter['type'] + ")objc_arg" + str($parameter_idx)
	#else
	#set $message_part = $selectorlist[$parameter_idx] + ":" + "objc_arg" + str($parameter_idx)
	#end if
	#set $message = $message + $message_part + $SPACE
	#set $parameter_idx = $parameter_idx + 1

#end for
	#if len($parameters) == 0
	#set $message = $selectorlist[0]
	#end if
	#set $message_call = ""
	#if "_static" in $method['tags']:
	#set $message_call = "[" + $interface_name + $SPACE + $message + "];"
	#else
	#set $message_call = "[(__bridge " + $interface_name + " *)proxy " + $message + "];"
	#end if
	#set $returns = $method['returns'][0]
	#if not $returns['type'] == "void"
	#set $typeinfo = $returns['deriveddata']['targetdata']['typeinfo']
	#if $returns['converter'] == "convert_builtin"
	${returns['type']} objc_result = $message_call
	return objc_result;
	#elif $returns['converter'] == "convert_proxy"
	void * objc_result = (__bridge void *)$message_call
	${method['retrn_type']} *result = NULL;
	${typeinfo['typeconverter']}(objc_result, result, CONVERT_TO_CXX)
	return result;
	#else
	void * objc_result = (__bridge void *)$message_call
	${method['retrn_type']} result;
	${typeinfo['typeconverter']}(objc_result, result, CONVERT_TO_CXX)
	return result;
	#end if
	#else
	$message_call
	#end if
}

#end for

