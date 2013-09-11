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
 * Implementation (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//
#from Utils import Utils
#set $SPACE = " "
#set $COMMA = ","
#set $COLON = ":"  
#set $DOUBLE_COLON = "::"
#set $CONST = "const"
#set $REF = "&"
#set $config_module = $CONFIG.config_module
#set $config_data = $config_module.config_data
#set $namespace = $config_data['namespace']
#set $package = $config_data['package']
#set $entity_class_config = $CONFIG.entity_class
#set $entity_class_name = $CONFIG.entity_class_name
#set $class_name = $CONFIG.class_name
#set $entity_class_info = $CONFIG.entity_class['deriveddata']['targetdata']['classinfo']
#set $class_jnidata = $CONFIG.entity_class['deriveddata']['jnidata']
#set $entity_head_file_name = $CONFIG.entity_head_file_name
#set $entity_callback_file_name = $CONFIG.entity_callback_file_name
#set $include_headers = $CONFIG.include_headers
#set $safe_package_name = Utils.to_safe_jni_name($package)
#set $safe_class_name = Utils.to_safe_jni_name($entity_class_name)
#set $entity_interface = $entity_class_info['isinterface']
#set $entity_abstract = $entity_class_info['isabstract']
#set $entity_object = $entity_class_info['typename'] == 'java_lang_Object' 
#set $entity_virtual = $entity_interface or $entity_abstract or $entity_object
#set $entity_callback = '_callback' in $entity_class_config['tags']
#set $isfunctions_proxied = '_proxy_functions' in $entity_class_config['tags'] 
#set $isfields_proxied = '_proxy_fields' in $entity_class_config['tags']  
#set $isconstructors_proxied = '_proxy_constructors' in $entity_class_config['tags'] 
#set $superclass_typeinfos = $entity_class_info['superclasses'] if 'superclasses' in $entity_class_info else None

#set $superclassCCStr = ""
#set $superclassProxyStr = "" 
#set $superclassDefaultStr = ""
#if $superclass_typeinfos is not None
#set $superclassIdx = 0
#set $superclassCCStr = $COLON
#set $superclassProxyStr = $COLON
#set $superclassDefaultStr = $COLON
#for $superclass_typeinfo in $superclass_typeinfos
#set $superclass_marker = $superclass_typeinfo['isinterface'] or $superclass_typeinfo['isabstract'] or $superclass_typeinfo['typename'] == 'java_lang_Object'
#if $superclass_marker
#if $superclassIdx > 0
#set $superclassCCStr = $superclassCCStr + COMMA
#set $superclassProxyStr = $superclassProxyStr + COMMA
#set $superclassDefaultStr = $superclassDefaultStr + COMMA
#end if
#set $superclassCCStr = $superclassCCStr + SPACE + $superclass_typeinfo['namespace'] + $DOUBLE_COLON + $superclass_typeinfo['typename'] + '(cc)'
#set $superclassProxyStr = $superclassProxyStr + SPACE + $superclass_typeinfo['namespace'] + $DOUBLE_COLON + $superclass_typeinfo['typename'] + '(aProxy)'
#set $superclassDefaultStr = $superclassDefaultStr + SPACE + $superclass_typeinfo['namespace'] + $DOUBLE_COLON + $superclass_typeinfo['typename'] + '()' 
#end if
#set $superclassIdx = $superclassIdx + 1
#end for
#end if

#set $functions = list()
#if $isfunctions_proxied
#set $functions = $config_module.list_functions(class_tags=None,class_xtags=None,class_name=$class_name,function_tags=['_proxy'],function_xtags=None,function_name=None)	
#for $function in $functions
#set $param_str = ""
#set $jni_param_str = "" 
#set $params = $function['params']
#set $param_idx = 0
#set $proxied_typeinfo_list = list()
#set $modifier_str = None
#if '_static' in $function['tags']
#if $modifier_str
#set $modifier_str = $modifier_str + SPACE + 'static' 
#else
#set $modifier_str = 'static'  
#end if
#end if
#if '_callback' in $function['tags']
#if $modifier_str
#set $modifier_str = $modifier_str + SPACE + 'virtual' 
#else
#set $modifier_str = 'virtual'  
#end if
#end if
#for $param in $params
 	#set $typeinfo = $param['deriveddata']['targetdata']['typeinfo']
 	#set $jnidata = $param['deriveddata']['jnidata']
 	#if 'isproxied' in $typeinfo
 		$proxied_typeinfo_list.append(typeinfo) 
 	#end if
	#if $param_idx > 0
		#set $param_str = $param_str + $COMMA 
	#end if
 	#if 'isproxied' in $typeinfo
	#set $param_str = $param_str + $typeinfo['namespace'] + '::'
 	#end if
	#set $param_str = $param_str + $typeinfo['typename'] + $SPACE + $CONST + $REF
	#set $param_str = $param_str + $SPACE + "arg" + str($param_idx)
	#set $jni_param_str = $jni_param_str + $COMMA
 	#set $jni_param_str = $jni_param_str + $jnidata['jnitypename']
 	#set $jni_param_str = $jni_param_str + $SPACE + "jarg" + str($param_idx) 		
	#set $param_idx = $param_idx + 1
#end for
#set $function['param_str'] = $param_str
#set $function['jni_param_str'] = $jni_param_str 	 		
#set $returns = $function['returns'] 
#for $retrn in $returns
	#set $typeinfo = $retrn['deriveddata']['targetdata']['typeinfo']
 	#set $jnidata = $retrn['deriveddata']['jnidata']
 	#if 'isproxied' in $typeinfo
 	#set $function['retrn_type'] = $typeinfo['namespace'] + '::' + $typeinfo['typename']
 	#if $typeinfo['isenum'] == True
 	#set $function['retrn_type_modifier'] = ''
 	#else
 	#set $function['retrn_type_modifier'] = '*'
 	#end if
 	#else
 	#set $function['retrn_type'] = $typeinfo['typename']
 	#set $function['retrn_type_modifier'] = ''
 	#end if
 	#set $function['jni_retrn_type'] = $jnidata['jnitypename']
 	#if 'isproxied' in $typeinfo
	$proxied_typeinfo_list.append(typeinfo)
	#end if
 	#break
#end for
#set $function['proxied_typeinfo_list'] = $proxied_typeinfo_list
#set $function['modifier_str'] = $modifier_str
#end for
#end if

#set $constructors = list()
#if $isconstructors_proxied
#set $constructors = $config_module.list_constructors(class_tags=None,class_xtags=None,class_name=$class_name,constructor_tags=['_proxy'],constructor_xtags=None,constructor_name=None)	
#for $constructor in $constructors
#set $param_str = ""
#set $params = $constructor['params']
#set $param_idx = 0
#set $proxied_typeinfo_list = list()
#set $child_type_stack = list()
#for $param in $params
 	#set $typeinfo = $param['deriveddata']['targetdata']['typeinfo']
 	#if 'isproxied' in $typeinfo
 		$proxied_typeinfo_list.append(typeinfo) 
 	#end if
	#if $param_idx > 0
		#set $param_str = $param_str + $COMMA 
	#end if
 	#if 'isproxied' in $typeinfo
	#set $param_str = $param_str + $typeinfo['namespace'] + '::'
 	#end if
	#set $param_str = $param_str + $typeinfo['typename'] + $SPACE + $CONST + $REF
	#set $param_str = $param_str + $SPACE + "arg" + str($param_idx)
	#set $param_idx = $param_idx + 1
 	#if 'children' in $param
 	$child_type_stack.extend($param['children'])
 	#end if
#end for
#if $param_idx > 0
 	#set $param_str = $param_str + $COMMA 
#end if
#set $param_str = $param_str + "Proxy * aProxy"
#set $constructor['param_str'] = $param_str
#while $len(child_type_stack) > 0
 	#set $current_child_type = $child_type_stack.pop()
 	#set $typeinfo = $current_child_type['deriveddata']['targetdata']['typeinfo']
 	#if 'isproxied' in $typeinfo
 		$proxied_typeinfo_list.append(typeinfo) 
 	#end if
 	#if 'children' in $current_child_type
 	$child_type_stack.extend($current_child_type['children'])
 	#end if
#end while
#set $constructor['proxied_typeinfo_list'] = $proxied_typeinfo_list
#end for
#end if

#set $no_copy_constructor = $entity_class_info['no_copy_constructor']
#set $no_default_constructor = $entity_class_info['no_default_constructor']
#set $constructor_count = $len(constructors)

#set $proxied_typeinfos = list()

#for $function in $functions
$proxied_typeinfos.extend(function['proxied_typeinfo_list'])
#end for

#for $constructor in $constructors
$proxied_typeinfos.extend(constructor['proxied_typeinfo_list'])
#end for

// Generated Code 

#if '_callback' in $entity_class_config['tags']
\#include <$entity_callback_file_name>
#end if
\#include <$entity_head_file_name>
\#include <android/log.h>
\#include <pthread.h>
\#include <jni.h>
\#include <JNIContext.hpp>
\#include <CXXConverter.hpp>
\#include <${package}Converter.hpp>
#for $include_header in $include_headers
\#include <${include_header}>
#end for

\#define LOG_TAG "${entity_class_name}"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace ${namespace};

// #set $proxied_namespaces = list()
// #for $proxied_typeinfo in $proxied_typeinfos
// #set $proxied_namespace = $proxied_typeinfo['namespace']
// #if $proxied_namespace not in $proxied_namespaces
// $proxied_namespaces.append(proxied_namespace)
// #if $proxied_namespace != $namespace
// using namespace $proxied_namespace;
// #end if
// #end if
// #end for

#if not '_static' in $entity_class_config['tags']
#if '_callback' in $entity_class_config['tags']
#set $callback_functions = $config_module.list_functions(class_tags=None,class_xtags=None,class_name=$class_name,function_tags=['_callback','_proxy'],function_xtags=None,function_name=None)	
// JNI callbacks
#for $function in $callback_functions
#set $safe_function_name = Utils.to_safe_jni_name(Utils.to_safe_cxx_name(function['name']))
$function['jni_retrn_type'] Java_${safe_package_name}_${safe_class_name}_${safe_function_name}(JNIEnv *env, jobject objectRef$function['jni_param_str'])
{
	LOGV("$function['jni_retrn_type'] $Utils.to_safe_cxx_name(function['name'])(JNIEnv *env, jobject objectRef$function['jni_param_str']) enter");

	JNIContext *jni = JNIContext::sharedInstance();

	const char *className = "$class_jnidata['jnisignature']";
	const char *methodName = "getCXXCallbackPtr";
	const char *methodSignature = "()J";

	jobject javaObject = objectRef;
	LOGV("callback javaObject address %ld", (long) javaObject);

	jlong jcallbackAddress = (jlong) jni->invokeLongMethod(javaObject,className,methodName,methodSignature);
	long callbackAddress = (long) jcallbackAddress;

	LOGV("callbackAddress for ${entity_class_name} %ld", callbackAddress);
	${entity_class_name} *callback = (${entity_class_name} *) reinterpret_cast<${entity_class_name} *>(callbackAddress);

	long cxx_value = (long) 0;
	long java_value = (long) 0;

	#set methodvararg = ""
	#set $param_idx = 0
	#for $param in $function['params']
	#set $arg = "arg" + str($param_idx)
	#set $jarg = "jarg" + str($param_idx)
	#set $param_jnidata = $param['deriveddata']['jnidata']

	#set $param_typeinfo = $param['deriveddata']['targetdata']['typeinfo']
	{
		cxx_value = (long) 0;
		java_value = ${param_jnidata['jniconverter']}_to_java($jarg);
		{
			## Create CXXTypeHierarchy
			CXXTypeHierarchy cxx_type_hierarchy;
			std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
			#set $type_stack = list()
			$type_stack.append($param)
			cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
			#while $len(type_stack) > 0
			{
				#set $current_type = $type_stack.pop()
				CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
				cxx_type_hierarchy_stack.pop();
				cxx_type_hierarchy.type_name = std::string("$current_type['type']");
				#if 'children' in $current_type	
				#for $child_type in $current_type['children']
				{
					CXXTypeHierarchy child_cxx_type_hierarchy;
					cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
					cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
					$type_stack.append(child_type)
				}
				#end for
				#end if	
			}
			#end while
			## Create Converter Stack
			std::stack<long> converter_stack;
			#set $type_stack = list()
			#if 'children' in $param
			$type_stack.append($param)
			#end if
			#while $len(type_stack) > 0
			{
				#set $current_type = $type_stack.pop()
				#if 'children' in $current_type
				#for $idx in $range(0,len(current_type['children']))
				{
					#set $child_type = $current_type['children'][idx]
					#set $child_type_typeinfo = $child_type['deriveddata']['targetdata']['typeinfo']
					converter_stack.push((long) &${child_type_typeinfo['typeconverter']});				

					#if 'children' in $child_type
						$type_stack.append($child_type)
					#end if
				}
				#end for
				#end if
			}
			#end while
			converter_t converter_type = (converter_t) CONVERT_TO_CXX;
			${param_typeinfo['typeconverter']}(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
		}

	}
	#if $param_typeinfo['isenum'] == True
	${param_typeinfo['namespace']}::${param_typeinfo['typename']} $arg = (${param_typeinfo['namespace']}::${param_typeinfo['typename']}) (cxx_value);
	#else if 'isproxied' in $param_typeinfo
	${param_typeinfo['namespace']}::${param_typeinfo['typename']} ${arg}(*((${param_typeinfo['namespace']}::${param_typeinfo['typename']} *) cxx_value));
	#else
	${param_typeinfo['typename']} $arg = ${param_typeinfo['typename']}) (${param_typeinfo['namespace']}::${param_typeinfo['typename']}((${param_typeinfo['namespace']}::${param_typeinfo['typename']} *) cxx_value));
	#end if

	#if $param_idx > 0
		#set $methodvararg = $methodvararg + ","
	#end if
	#set $methodvararg = $methodvararg + $arg	
	#set $param_idx = $param_idx + 1
	#end for

	#while True	
	#set $retrn  = $function['returns'][0]
	#set $retrn_typeinfo = $retrn['deriveddata']['targetdata']['typeinfo']
	#set $retrn_isenum = $retrn_typeinfo["isenum"];
	#if $function['retrn_type'] != "void"
	$function['jni_retrn_type'] result;
	#set $retrn_jnidata = $retrn['deriveddata']['jnidata']

	${retrn_typeinfo['typename']} cxx_result = (${retrn_typeinfo['typename']}) callback->$Utils.to_safe_cxx_name(function['name'])($methodvararg);
	#if $retrn_isenum
	cxx_value = (long) cxx_result;
	#else
	cxx_value = (long) &cxx_result;
	#end if
	java_value = 0;
	{
		## Create CXXTypeHierarchy
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		#set $type_stack = list()
		$type_stack.append($retrn)
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		#while $len(type_stack) > 0
		{
			#set $current_type = $type_stack.pop()
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("$current_type['type']");
			#if 'children' in $current_type	
			#for $child_type in $current_type['children']
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				$type_stack.append(child_type)
			}
			#end for
			#end if	
		}
		#end while
		## Create Converter Stack
		std::stack<long> converter_stack;
		#set $type_stack = list()
		#if 'children' in $retrn
		$type_stack.append($retrn)
		#end if
		#while $len(type_stack) > 0
		{
			#set $current_type = $type_stack.pop()
			#if 'children' in $current_type	
			#for $idx in $range(0,len(current_type['children']))
			{
				#set $child_type = $current_type['children'][idx]
				#set $child_type_typeinfo = $child_type['deriveddata']['targetdata']['typeinfo']
				converter_stack.push((long) &${child_type_typeinfo['typeconverter']});				

				#if 'children' in $child_type
					$type_stack.append($child_type)
				#end if
			}
			#end for
			#end if
		}
		#end while
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		${retrn_typeinfo['typeconverter']}(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = ${retrn_jnidata['jniconverter']}_to_jni(java_value);
	#else
	callback->$Utils.to_safe_cxx_name(function['name'])($methodvararg);
	#end if
	#break
	#end while
		
	LOGV("$function['jni_retrn_type'] $Utils.to_safe_cxx_name(function['name'])(JNIEnv *env, jobject objectRef$function['jni_param_str']) exit");

	#if $function['retrn_type'] != "void"   
	return result;
	#end if	
}
#end for
#end if
#end if
#if not '_static' in $entity_class_config['tags']
#if $no_default_constructor or $entity_abstract or $entity_object
${entity_class_name}::${entity_class_name}(Proxy * aProxy) $superclassProxyStr
{
	LOGV("${entity_class_name}::${entity_class_name}(Proxy * aProxy) enter");	
	LOGV("Proxy refcount %ld, address %ld", aProxy->refcount, aProxy->address);

	this->_proxy = aProxy;
	this->_proxy->refcount++;

	LOGV("${entity_class_name}::${entity_class_name}(Proxy * aProxy) exit");	
}
#end if
#end if

#if not '_static' in $entity_class_config['tags']
#if $no_copy_constructor
${entity_class_name}::${entity_class_name}(const ${entity_class_name}& cc) $superclassCCStr
{
	LOGV("${entity_class_name}::${entity_class_name}(const ${entity_class_name}& cc) enter");
	this->_proxy = cc.proxy();
	this->_proxy->refcount++;
	LOGV("${entity_class_name}::${entity_class_name}(const ${entity_class_name}& cc) exit");
}
#end if
#end if

#if not '_static' in $entity_class_config['tags']
Proxy * ${entity_class_name}::proxy() const
{	
	return this->_proxy;
}
#end if
#if not '_static' in $entity_class_config['tags']
#if $entity_callback or (not $entity_abstract and not $entity_interface and not $entity_object)
// Public Constructors
#for $constructor in $constructors
${entity_class_name}::${entity_class_name}($constructor['param_str']) $superclassProxyStr
{
	LOGV("${entity_class_name}::${entity_class_name}($constructor['param_str']) enter");	

	this->_proxy = aProxy;
	this->_proxy->refcount++;

	if (this->_proxy->address == 0) 
	{
		jobject proxiedComponent = 0;
		#set $cons_jnidata = $constructor['deriveddata']['jnidata']
		const char *methodName = "<init>";
		const char *methodSignature = "$cons_jnidata['jnisignature']";
		const char *className = "$class_jnidata['jnisignature']";

		LOGV("${entity_class_name} className %s methodName %s methodSignature %s", className, methodName, methodSignature);

		JNIContext *jni = JNIContext::sharedInstance();

		jni->pushLocalFrame();

		#set methodvararg = ""
		#set $param_idx = 0
		#for $param in $constructor['params']
		#set $arg = "arg" + str($param_idx)
		#set $jarg = "jarg" + str($param_idx)
		#set $param_jnidata = $param['deriveddata']['jnidata']
		#set $param_typeinfo = $param['deriveddata']['targetdata']['typeinfo']
		#set $isenum = $param_typeinfo['isenum'] == True
		#set $isproxied = 'isproxied' in $param_typeinfo
		$param_jnidata['jnitypename'] $jarg;
		{
			#if $isenum
			long cxx_value = (long) $arg;
			#else
			long cxx_value = (long) & $arg;
			#end if
			long java_value = 0;

			## Create CXXTypeHierarchy
			CXXTypeHierarchy cxx_type_hierarchy;
			std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
			#set $type_stack = list()
			$type_stack.append($param)
			cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
			#while $len(type_stack) > 0
			{
				#set $current_type = $type_stack.pop()
				CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
				cxx_type_hierarchy_stack.pop();
				cxx_type_hierarchy.type_name = std::string("$current_type['type']");
				#if 'children' in $current_type	
				#for $child_type in $current_type['children']
				{
					CXXTypeHierarchy child_cxx_type_hierarchy;
					cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
					cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
					$type_stack.append(child_type)
				}
				#end for
				#end if	
			}
			#end while	
			## Create Converter Stack
			std::stack<long> converter_stack;
			#set $type_stack = list()
			#if 'children' in $param
			$type_stack.append($param)
			#end if
			#while $len(type_stack) > 0
			{
				#set $current_type = $type_stack.pop()
				#if 'children' in $current_type
				#for $idx in $range(0,len(current_type['children']))
				{
					#set $child_type = $current_type['children'][idx]
					#set $child_type_typeinfo = $child_type['deriveddata']['targetdata']['typeinfo']
					converter_stack.push((long) &${child_type_typeinfo['typeconverter']});				

					#if 'children' in $child_type
						$type_stack.append($child_type)
					#end if
				}
				#end for
				#end if
			}
			#end while
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			${param_typeinfo['typeconverter']}(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

			// Convert to JNI
			$jarg = ${param_jnidata['jniconverter']}_to_jni(java_value);
			#set $methodvararg = $methodvararg + "," + $jarg
		}
		#set $param_idx = $param_idx + 1
		#end for
			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature)$methodvararg);
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		this->_proxy->address = (long) proxiedComponent;

		jni->popLocalFrame();
	}

	LOGV("${entity_class_name}::${entity_class_name}($constructor['param_str']) exit");	
}
#end for
#end if
#end if
#if not '_static' in $entity_class_config['tags']
// Default Instance Destructor
${entity_class_name}::~${entity_class_name}()
{
	LOGV("${entity_class_name}::~${entity_class_name}() enter");
	bool destroy = false;
	long refcount = 0;
	this->_proxy->refcount--;
	destroy = this->_proxy->refcount <= 0;

	LOGV("${entity_class_name} refcount %ld",this->_proxy->refcount);

	if (destroy) 
	{
		LOGV("${entity_class_name} will be destroyed");
		JNIContext *jni = JNIContext::sharedInstance();
		jni->deleteGlobalRef((jobject)this->_proxy->address);
		delete this->_proxy;
	}
	LOGV("${entity_class_name}::~${entity_class_name}() exit");
}
#end if
#if $entity_callback
void ${entity_class_name}::setCXXCallbackPtr(void * callbackPtr) 
{
	LOGV("${entity_class_name}::setCXXCallbackPtr(void * callbackPtr) enter");

	const char *methodName = "setCXXCallbackPtr";
	const char *methodSignature = "(J)V";
	const char *className = "$class_jnidata['jnisignature']";

	LOGV("${entity_class_name} className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	JNIContext *jni = JNIContext::sharedInstance();

	long callbackAddress = (long) callbackPtr;
	jlong jcallbackAddress = (jlong) callbackAddress;

	jobject javaObject = (jobject) this->_proxy->address;
	LOGV("${entity_class_name} jni address %ld", javaObject);	
	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature, jcallbackAddress);

	LOGV("${entity_class_name}::setCXXCallbackPtr(void * callbackPtr) exit");
}
#end if
#if ($entity_callback and $constructor_count == 0 ) or ($entity_abstract or $entity_interface or $entity_object)
${entity_class_name}::${entity_class_name}() $superclassDefaultStr
{
	LOGV("${entity_class_name}::${entity_class_name}() enter");
	#if $entity_callback 
	Proxy *aProxy = new Proxy();
	this->_proxy = aProxy;
	this->_proxy->refcount++;

	if (this->_proxy->address == 0) 
	{
		jobject proxiedComponent = 0;
		const char *methodName = "<init>";
		const char *methodSignature = "()V";
		const char *className = "$class_jnidata['jnisignature']";

		LOGV("${entity_class_name} className %s methodName %s methodSignature %s", className, methodName, methodSignature);

		JNIContext *jni = JNIContext::sharedInstance();

		jni->pushLocalFrame();

		#set methodvararg = ""
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature)$methodvararg);
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		this->_proxy->address = (long) proxiedComponent;

		jni->popLocalFrame();
	}
	#end if
	LOGV("${entity_class_name}::${entity_class_name}() exit");
}
#end if
// Functions
#for $function in $functions
$function['retrn_type'] $function['retrn_type_modifier'] ${entity_class_name}::$Utils.to_safe_cxx_name(function['name'])($function['param_str'])
{
	LOGV("$function['retrn_type'] ${entity_class_name}::$Utils.to_safe_cxx_name(function['name'])($function['param_str']) enter");

	#set $func_jnidata = $function['deriveddata']['jnidata']
	const char *methodName = "$function['name']";
	const char *methodSignature = "$func_jnidata['jnisignature']";
	const char *className = "$class_jnidata['jnisignature']";

	LOGV("${entity_class_name} className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	JNIContext *jni = JNIContext::sharedInstance();

	#set methodvararg = ""
	#set $param_idx = 0
	#for $param in $function['params']
	#set $arg = "arg" + str($param_idx)
	#set $jarg = "jarg" + str($param_idx)
	#set $param_jnidata = $param['deriveddata']['jnidata']
	#set $param_typeinfo = $param['deriveddata']['targetdata']['typeinfo']
	#set $param_isenum = $param_typeinfo['isenum']
	$param_jnidata['jnitypename'] $jarg;
	{
		#if $param_isenum
		long cxx_value = (long) $arg;
		#else
		long cxx_value = (long) & $arg;
		#end if
		long java_value = 0;

		## Create CXXTypeHierarchy
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		#set $type_stack = list()
		$type_stack.append($param)
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		#while $len(type_stack) > 0
		{
			#set $current_type = $type_stack.pop()
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("$current_type['type']");
			#if 'children' in $current_type	
			#for $child_type in $current_type['children']
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				$type_stack.append(child_type)
			}
			#end for
			#end if	
		}
		#end while	
		## Create Converter Stack
		std::stack<long> converter_stack;
		#set $type_stack = list()
		#if 'children' in $param
		$type_stack.append($param)
		#end if
		#while $len(type_stack) > 0
		{
			#set $current_type = $type_stack.pop()
			#if 'children' in $current_type
			#for $idx in $range(0,len(current_type['children']))
			{
				#set $child_type = $current_type['children'][idx]
				#set $child_type_typeinfo = $child_type['deriveddata']['targetdata']['typeinfo']
				converter_stack.push((long) &${child_type_typeinfo['typeconverter']});				

				#if 'children' in $child_type
					$type_stack.append($child_type)
				#end if
			}
			#end for
			#end if
		}
		#end while
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		${param_typeinfo['typeconverter']}(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
		LOGV("$jarg java_value=%ld",(long) java_value);
		// Convert to JNI
		$jarg = ${param_jnidata['jniconverter']}_to_jni(java_value);
		#set $methodvararg = $methodvararg + "," + $jarg
	}
	#set $param_idx = $param_idx + 1
	#end for

	#while True	
	#set $retrn  = $function['returns'][0]
	#set $retrn_typeinfo = $retrn['deriveddata']['targetdata']['typeinfo']
	#if $function['retrn_type'] != "void"   
	#set $retrn_jnidata = $retrn['deriveddata']['jnidata']
	#if '_static' in $function['tags']
	$retrn_jnidata['jnitypename'] jni_result = ($retrn_jnidata['jnitypename']) jni->invokeStatic${func_jnidata['jniinvokeid']}Method(className,methodName,methodSignature$methodvararg);
	#else
	jobject javaObject = (jobject) this->_proxy->address;
	LOGV("${entity_class_name} jni address %ld", javaObject);	
	$retrn_jnidata['jnitypename'] jni_result = ($retrn_jnidata['jnitypename']) jni->invoke${func_jnidata['jniinvokeid']}Method(javaObject,className,methodName,methodSignature$methodvararg);
	#end if
	long cxx_value = (long) 0;
	long java_value = ${retrn_jnidata['jniconverter']}_to_java(jni_result);
	{
		## Create CXXTypeHierarchy
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		#set $type_stack = list()
		$type_stack.append($retrn)
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		#while $len(type_stack) > 0
		{
			#set $current_type = $type_stack.pop()
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("$current_type['type']");
			#if 'children' in $current_type	
			#for $child_type in $current_type['children']
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				$type_stack.append(child_type)
			}
			#end for
			#end if	
		}
		#end while
		## Create Converter Stack
		std::stack<long> converter_stack;
		#set $type_stack = list()
		#if 'children' in $retrn
		$type_stack.append($retrn)
		#end if
		#while $len(type_stack) > 0
		{
			#set $current_type = $type_stack.pop()
			#for $idx in $range(0,len(current_type['children']))
			{
				#set $child_type = $current_type['children'][idx]
				#set $child_type_typeinfo = $child_type['deriveddata']['targetdata']['typeinfo']
				converter_stack.push((long) &${child_type_typeinfo['typeconverter']});				

				#if 'children' in $child_type
					$type_stack.append($child_type)
				#end if
			}
			#end for
		}
		#end while
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		${retrn_typeinfo['typeconverter']}(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	#if $retrn_typeinfo['isenum'] == True
	$function['retrn_type'] $function['retrn_type_modifier'] result = (${function['retrn_type']}) (cxx_value);
	#else if 'isproxied' in $retrn_typeinfo
	$function['retrn_type'] $function['retrn_type_modifier'] result = ((${function['retrn_type']} *) cxx_value);
	#else
	$function['retrn_type'] $function['retrn_type_modifier'] result = (${function['retrn_type']}) *((${function['retrn_type']} *) cxx_value);
	#end if
	#else
	#if '_static' in $function['tags']
	jni->invokeStatic${func_jnidata['jniinvokeid']}Method(className,methodName,methodSignature$methodvararg);
	#else
	jobject javaObject = (jobject) this->_proxy->address;
	jni->invoke${func_jnidata['jniinvokeid']}Method(javaObject,className,methodName,methodSignature$methodvararg);
	#end if
	#end if
	#break
	#end while
		
	LOGV("$function['retrn_type'] ${entity_class_name}::$Utils.to_safe_cxx_name(function['name'])($function['param_str']) exit");

	#if $function['retrn_type'] != "void"   
	return result;
	#end if
}
#end for
