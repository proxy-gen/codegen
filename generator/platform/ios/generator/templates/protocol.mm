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
 * Header (Protocol Implementation)
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
##
#set $protocol_interface_file_name = $CONFIG.protocol_interface_file_name
##
#set $entity_protocol_config = $CONFIG.entity_protocol
#set $entity_protocol_info = $entity_protocol_config['deriveddata']['targetdata']['protocolinfo']
#set $entity_protocol_typename = $entity_protocol_info['conformertypename']
#set $entity_protocol_proxy_name = $entity_protocol_info['proxyname']
#set $entity_protocol_framework = $entity_protocol_info['framework']
#set $entity_protocol_nativefile = $entity_protocol_info['nativefile']
#set $entity_protocol_namespace = $entity_protocol_info['namespace']
##
#set $methods = $config_module.list_protocol_methods(protocol_tags=None, protocol_xtags=None, protocol_name=$protocol_name,method_tags=['_proxy'],method_xtags=None,method_name=None)
##
#for $method in $methods
#set $message_str = ""
#set $parameters = $method['parameters']
#set $selectorlist = $method['deriveddata']['objcdata']['selectorlist']
#set $parameter_idx = 0
#set $modifier_str = None
#if '_static' in $method['tags']
#set $modifier_str = '+' 
#else
#set $modifier_str = '-'
#end if
#if len($selectorlist) == 1 and len($parameters) == 0
#set $message_str = $selectorlist[0]
#else
#for $parameter in $parameters
    #set $typeinfo = $parameter['deriveddata']['targetdata']['typeinfo']
	#set $typestr = ""
	#if 'declared_type' in $parameter
	#set $typestr = $parameter['declared_type']
	#else
	#set $typestr = $parameter['type']
	#end if
    #set $message_str = $message_str + $SPACE + $selectorlist[$parameter_idx] + ":(" + $typestr + ")objc_arg" + str($parameter_idx) 
    #set $parameter_idx = $parameter_idx + 1
#end for
#end if
#set $method['message_str'] = $message_str
#set $method['modifier_str'] = $modifier_str
#end for

\#include <${package}/converters/${package}Converter.hpp>
\#include <${package}/conformers/protocols/${protocol_interface_file_name}>

@interface ${entity_protocol_proxy_name}()

@property(readwrite, nonatomic) $entity_protocol_namespace::$entity_protocol_typename * proxy;

@end

@implementation $entity_protocol_proxy_name

@synthesize proxy;

- (id) initWithProxy:($entity_protocol_namespace::$entity_protocol_typename *)aproxy{
	self.proxy = aproxy;
	return self;
}

+ ($entity_protocol_proxy_name *)conformerWithProxy:($entity_protocol_namespace::$entity_protocol_typename *)proxy{
	return [[$entity_protocol_proxy_name alloc] initWithProxy:proxy];
}

#for $method in $methods
#set $method_name = $method['deriveddata']['functiondata']['functionname']
#set $returns = $method['returns'][0]
#set $return_type = ""
#if 'declared_type' in $returns
#set $return_type = $returns['declared_type']
#else
#set $return_type = $returns['type']
#end if
${method['modifier_str']} ($return_type) ${method['message_str']}{
	#set $function_call_str = ""
	#set $parameter_idx = 0
	#for $parameter in $method['parameters']
	#set $typeinfo = $parameter['deriveddata']['targetdata']['typeinfo']
	#if $parameter['converter'] == "convert_builtin" 
	#if 'declared_type' in $parameter
	${typeinfo['typename']} arg$parameter_idx = (${typeinfo['typename']})objc_arg$parameter_idx;
	#else
	${typeinfo['typename']} arg$parameter_idx = objc_arg${parameter_idx};
	#end if
	#elif $parameter['converter'] == "convert_enum"
	${typeinfo['typename']} arg$parameter_idx = (${typeinfo['typename']})objc_arg$parameter_idx;
	#elif $parameter['converter'] == "convert_proxy"
	${typeinfo['namespace']}::${typeinfo['typename']} *arg$parameter_idx = NULL;
	void *objc_cast$parameter_idx = (__bridge void *)objc_arg$parameter_idx;
	${typeinfo['typeconverter']}(objc_cast$parameter_idx, arg$parameter_idx, CONVERT_TO_CXX);
	#else
	${typeinfo['typename']} arg${parameter_idx};
	void *objc_cast$parameter_idx = (__bridge void *)objc_arg$parameter_idx;
	${typeinfo['typeconverter']}(objc_cast$parameter_idx, arg$parameter_idx, CONVERT_TO_CXX);
	#end if
	#if $parameter_idx == 0
	#set $function_call_str = $function_call_str + "arg" + str($parameter_idx)
	#else
	#set $function_call_str = $function_call_str + ", arg" + str($parameter_idx)
	#end if
	#set $parameter_idx = $parameter_idx + 1

	#end for
	#set $function_call_str = $method_name + "(" + $function_call_str + ")"
	#if not $returns['type'] == "void"
	#set $returns_typeinfo = $returns['deriveddata']['targetdata']['typeinfo']
	#if $returns['converter'] == "convert_builtin"
	#if 'declared_type' in $returns
	${returns['type']} result = (${returns['declared_type']})(self.proxy->$function_call_str);
	#else
	${returns['type']} result = self.proxy->$function_call_str;
	#end if
	return result;
	#elif $returns['converter'] == "convert_enum"
	${returns['type']} result = (${returns['type']})(self.proxy->$function_call_str);
	return result;
	#elif $returns['converter'] == "convert_proxy"
	${returns_typeinfo['namespace']}::${returns_typeinfo['typename']} *result = self.proxy->$function_call_str;
	void *objc_result = NULL;
	${returns_typeinfo['typeconverter']}(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
	#else
	${returns_typeinfo['typename']} result = self.proxy->$function_call_str;
	void *objc_result = NULL;
	${returns_typeinfo['typeconverter']}(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
	#end if
	#else
	self.proxy->$function_call_str;
	#end if
}

#end for
@end
