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
 * Implementation (Java)
 * Author: codegen
 */
#from Utils import Utils
#set $config_module = $CONFIG.config_module
#set $config_data = $CONFIG.config_module.config_data
#set $package = $config_data['package']
#set $callback_class = $CONFIG.callback_class
#set $callback_java_class_name = $CONFIG.callback_java_class_name
#set $callback_class_name = $CONFIG.callback_class_name
package ${package};
#set $SPACE = " "
#set $COMMA = ","
#set $base_class = $callback_class['name'].replace('$','.')
#set $is_interface = True if '_interface' in $callback_class['tags'] else False
#set $is_instance = True if '_instance' in $callback_class['tags'] else False
#if $is_interface
public class $callback_class_name implements $base_class
#elif $is_instance
public class $callback_class_name extends $base_class
#end if
{
#set $constructors = $callback_class['constructors']
#for $constructor in $constructors
	#set $param_str = ""
	#set $invoke_str = ""
	#set $params = $constructor['params']
	#set $param_idx = 0
	#for $param in $params
		#if $param_idx > 0
			#set $param_str = $param_str + $COMMA 
			#set $invoke_str = $invoke_str + $COMMA 
		#end if
		#set $typeinfo = $param['deriveddata']['targetdata']['typeinfo']
		#set $param_str = $param_str + $typeinfo['javatypename']
		#set $param_str = $param_str + $SPACE + "arg" + str($param_idx)
		#set $invoke_str = $invoke_str + $typeinfo['javatypename']
		#set $param_idx = $param_idx + 1
	#end for
	public ${callback_class_name}(${param_str})
	{
		super($invoke_str);
	}
#end for
#set $functions = $config_module.list_functions(class_tags=None,class_xtags=None,class_name=$callback_java_class_name,function_tags=['_proxy','_callback'],function_xtags=['_no_callback'],function_name=None)	
#for $function in $functions
	#set $param_str = ""
	#set $params = $function['params']
	#set $param_idx = 0
	#for $param in $params
		#if $param_idx > 0
			#set $param_str = $param_str + $COMMA 
		#end if
		#set $typeinfo = $param['deriveddata']['targetdata']['typeinfo']
		#set $param_str = $param_str + $typeinfo['javatypename']
		#set $param_str = $param_str + $SPACE + "arg" + str($param_idx)
		#set $param_idx = $param_idx + 1
	#end for
	#set $returns = $function['returns']
	#set $retrn = $returns[0]
	#set $retrninfo = $retrn['deriveddata']['targetdata']['typeinfo']
	#if $Utils.to_safe_cxx_name(function['name']) != $function['name']
	public ${retrninfo['javatypename']} ${function['name']}($param_str)
	{
		#if $retrninfo['javatypename'] != "void"
			return ${Utils.to_safe_cxx_name(function['name'])}($param_str);
		#else
			${Utils.to_safe_cxx_name(function['name'])}($param_str);
		#end if
	}
	#end if
	public native ${retrninfo['javatypename']} ${Utils.to_safe_cxx_name(function['name'])}($param_str);
#end for
}
