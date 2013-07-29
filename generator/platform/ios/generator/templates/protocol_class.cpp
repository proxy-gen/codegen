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

\#include "${protocol_class_header}"
\#include <${entity_protocol_framework}/${entity_protocol_nativefile}>
#set $included_types = list()
#for $proxied_typeinfo in $proxied_typeinfos
#if $proxied_typeinfo['nativefile'] not in $included_types
$included_types.append($proxied_typeinfo['nativefile'])#slurp
#if $entity_protocol_nativefile != $proxied_typeinfo['nativefile']
\#include <${proxied_typeinfo['framework']}/${proxied_typeinfo['nativefile']}>
#end if
#end if
#end for
\#include "${package}Converter.hpp"

${entity_protocol_namespace}::${entity_protocol_typename}::${entity_protocol_typename}(const ${entity_protocol_typename}* cc){
	id<$protocol_name> proxy_id = (__bridge id<$protocol_name>)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

${entity_protocol_namespace}::${entity_protocol_typename}::${entity_protocol_typename}(const void * proxy){
	id<$protocol_name> proxy_id = (__bridge id<$protocol_name>)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

${entity_protocol_namespace}::${entity_protocol_typename}::~${entity_protocol_typename}(){
	id<$protocol_name> _no_op = (__bridge_transfer id<$protocol_name>)_proxy;
	\#pragma unused (_no_op)
}

void *${entity_protocol_namespace}::${entity_protocol_typename}::getProxy() const{
	return _proxy;
}

#for $method in $methods
#set $message = ""
#set $parameters = $method['parameters']
#set $parameter_idx = 0
#set $method_name = $method['deriveddata']['functiondata']['functionname']
#set $selectorlist = $method['deriveddata']['objcdata']['selectorlist']
$method['retrn_type'] ${entity_protocol_namespace}::${entity_protocol_typename}::${method_name}($method['parameter_str']){
#for $parameter in $parameters
	#set $typeinfo = $parameter['deriveddata']['targetdata']['typeinfo']
	#set $bridge_modifier = ""
	#if $parameter['converter'] == "convert_builtin"
	#if 'declared_type' in $parameter
	${parameter['declared_type']} objc_arg${parameter_idx} = (${parameter['declared_type']})arg${parameter_idx};
	#else
	${parameter['type']} objc_arg${parameter_idx} = arg${parameter_idx};
	#end if
	#elif $parameter['converter'] == "convert_enum"
	${parameter['type']} objc_arg${parameter_idx} = (${parameter['type']})arg${parameter_idx};
	##
	## Convert a block
	##
	##
	#elif $parameter['converter'] == "convert_block"
	#set $block_type = $parameter['type'].replace("^","^objc_arg" + str($parameter_idx))
	#set $block_parameter_string = ""
	#set $block_parameter_idx = 0
	#for $block_parameter in $parameter['parameters']
	#set $block_parameter_type = ""
	#if 'declared_type' in $block_parameter
	#set $block_parameter_type = $block_parameter['declared_type']
	#else
	#set $block_parameter_type = $block_parameter['type']
	#end if
	#if $block_parameter_idx == 0
	#set $block_parameter_string = $block_parameter_string + $block_parameter_type + $SPACE + "objc_barg" + str($block_parameter_idx)
	#else
	#set $block_parameter_string = $block_parameter_string + ", " +$block_parameter_type + $SPACE + "objc_barg" + str($block_parameter_idx)
	#end if
	#set $block_parameter_idx = $block_parameter_idx + 1
	#end for
	$block_type;
	objc_arg$parameter_idx = ^($block_parameter_string){
		#set $function_call_str = ""
		#set $block_parameter_idx = 0
		#for $block_parameter in $parameter['parameters']
		#set $block_typeinfo = $block_parameter['deriveddata']['targetdata']['typeinfo']
		#if $block_parameter['converter'] == "convert_builtin" 
		#if 'declared_type' in $block_parameter
		${block_typeinfo['typename']} barg$block_parameter_idx = (${block_typeinfo['typename']})objc_barg$block_parameter_idx;
		#else
		${block_typeinfo['typename']} barg$block_parameter_idx = objc_barg${block_parameter_idx};
		#end if
		#elif $block_parameter['converter'] == "convert_enum"
		${block_typeinfo['typename']} barg$block_parameter_idx = (${block_typeinfo['typename']})objc_barg$block_parameter_idx;
		#elif $block_parameter['converter'] == "convert_proxy"
		${block_typeinfo['namespace']}::${block_typeinfo['typename']} *barg$block_parameter_idx = NULL;
		void *objc_bcast$block_parameter_idx = (__bridge void *)objc_barg$block_parameter_idx;
		${block_typeinfo['typeconverter']}(objc_bcast$block_parameter_idx, barg$block_parameter_idx, CONVERT_TO_CXX);
		#else
		${block_typeinfo['typename']} barg${block_parameter_idx};
		void *objc_bcast$block_parameter_idx = (__bridge void *)objc_barg$block_parameter_idx;
		${block_typeinfo['typeconverter']}(objc_bcast$block_parameter_idx, barg$block_parameter_idx, CONVERT_TO_CXX);
		#end if
		#if $block_parameter_idx == 0
		#set $function_call_str = $function_call_str + "barg" + str($block_parameter_idx)
		#else
		#set $function_call_str = $function_call_str + ", barg" + str($block_parameter_idx)
		#end if
		#set $block_parameter_idx = $block_parameter_idx + 1

		#end for
		#set $function_call_str = "arg" + str($parameter_idx) + "(" + $function_call_str + ")"
		#set $block_returns = $parameter['returns'][0]
		#if not $block_returns['type'] == "void"
		#set $block_returns_typeinfo = $block_returns['deriveddata']['targetdata']['typeinfo']
		#if $block_returns['converter'] == "convert_builtin"
		#if 'declared_type' in $block_returns
		${block_returns['type']} block_result = (${block_returns['declared_type']})$function_call_str;
		#else
		${block_returns['type']} block_result = $function_call_str;
		#end if
		return block_result;
		#elif $block_returns['converter'] == "convert_enum"
		${block_returns['type']} block_result = (${block_returns['type']})$function_call_str;
		return block_result;
		#elif $block_returns['converter'] == "convert_proxy"
		${block_returns_typeinfo['namespace']}::${block_returns_typeinfo['typename']} *block_result = $function_call_str;
		void *objc_block_result = NULL;
		${block_returns_typeinfo['typeconverter']}(objc_block_result, result, CONVERT_TO_OBJC);
		return objc_block_result;
		#else
		${block_returns_typeinfo['typename']} block_result = $function_call_str;
		void *objc_block_result = NULL
		${block_returns_typeinfo['typeconverter']}(objc_block_result, result, CONVERT_TO_OBJC);
		return objc_block_result;
		#end if
		#else
		$function_call_str;
		#end if
	};
	##
	## End block conversion
	##
	##
	#else
	void *objc_arg${parameter_idx} = NULL;
	${typeinfo['typeconverter']}(objc_arg${parameter_idx}, arg${parameter_idx}, CONVERT_TO_OBJC);
	#set $bridge_modifier = "(__bridge id)"
	#end if
	#set $message_part = ""
	#set $message_part = $selectorlist[$parameter_idx] + ":" + $bridge_modifier + "objc_arg" + str($parameter_idx)
	#set $message = $message + $message_part + $SPACE
	#set $parameter_idx = $parameter_idx + 1

#end for
	#if len($parameters) == 0
	#set $message = $selectorlist[0]
	#end if
	#set $message_call = ""
	#if "_static" in $method['tags']:
	#set $message_call = "[" + $protocol_name + $SPACE + $message + "]"
	#else
	#set $message_call = "[(__bridge id<" + $protocol_name + ">)_proxy " + $message + "]"
	#end if
	#set $returns = $method['returns'][0]
	#if not $returns['type'] == "void"
	#set $typeinfo = $returns['deriveddata']['targetdata']['typeinfo']
	#if $returns['converter'] == "convert_builtin"
	#if 'declared_type' in $returns
	${method['retrn_type']} objc_result = (${method['retrn_type']})$message_call;
	#else 
	${method['retrn_type']} objc_result = $message_call;
	#end if
	return objc_result;
	#elif $returns['converter'] == "convert_enum"
	${method['retrn_type']} objc_result = (${method['retrn_type']})$message_call;
	return objc_result;
	#elif $returns['converter'] == "convert_proxy"
	void *objc_result = (__bridge void *)$message_call;
	${method['retrn_type']} result = NULL;
	${typeinfo['typeconverter']}(objc_result, result, CONVERT_TO_CXX);
	return result;
	#else
	void *objc_result = (__bridge void *)$message_call;
	${method['retrn_type']} result;
	${typeinfo['typeconverter']}(objc_result, result, CONVERT_TO_CXX);
	return result;
	#end if
	#else
	$message_call;
	#end if
}

#end for

