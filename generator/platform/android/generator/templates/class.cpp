/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//
#from Utils import Utils
#set $SPACE = " "
#set $COMMA = ","
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
#set $safe_package_name = Utils.to_safe_jni_name($package)
#set $safe_class_name = Utils.to_safe_jni_name($entity_class_name)

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
 	#else
 	#set $function['retrn_type'] = $typeinfo['typename']
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

#set $no_arg_constructor = True if '_callback' in $entity_class_config['tags'] else False
#set $no_copy_constructor = True if $entity_class_info['no_copy_constructor'] else False

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
\#include <jni.h>
\#include <CXXContext.hpp>
\#include <JNIContext.hpp>
// TODO: integrate with custom converters
\#include <CXXConverter.hpp>
\#include <${package}Converter.hpp>
// TODO: FIXME: add include package
// FIXME: remove after testing
#if $package == "FacebookCXX"
\#include <AndroidCXXConverter.hpp>
#end if

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

static long static_obj;
static long static_address = (long) &static_obj;

#if '_callback' in $entity_class_config['tags']
#set $callback_functions = $config_module.list_functions(class_tags=None,class_xtags=None,class_name=$class_name,function_tags=['_callback','_proxy'],function_xtags=None,function_name=None)	
// JNI callbacks
#for $function in $callback_functions
#set $safe_function_name = Utils.to_safe_jni_name(Utils.to_safe_cxx_name(function['name']))
$function['jni_retrn_type'] Java_${safe_package_name}_${safe_class_name}_${safe_function_name}(JNIEnv *env, jobject objectRef$function['jni_param_str'])
{
	LOGV("$function['jni_retrn_type'] $Utils.to_safe_cxx_name(function['name'])(JNIEnv *env, jobject objectRef$function['jni_param_str']) enter");

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jobject javaObject = objectRef;
	LOGV("callback javaObject address %ld", (long) javaObject);

	long contextAddress = ctx->findProxiedComponent(javaObject);
	LOGV("contextAddress for ${entity_class_name} %ld", contextAddress);
	${entity_class_name} *callback = (${entity_class_name} *) reinterpret_cast<${entity_class_name} *>(contextAddress);

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
	#if $function['retrn_type'] != "void"
	$function['jni_retrn_type'] result;
	#set $retrn_jnidata = $retrn['deriveddata']['jnidata']

	${retrn_typeinfo['typename']} cxx_result = (${retrn_typeinfo['typename']}) callback->$Utils.to_safe_cxx_name(function['name'])($methodvararg);
	cxx_value = (long) &cxx_result;
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
#if not '_static' in $entity_class_config['tags']
#if $no_copy_constructor
${entity_class_name}::${entity_class_name}(const ${entity_class_name}& cc)
{
	LOGV("${entity_class_name}::${entity_class_name}(const ${entity_class_name}& cc) enter");

	CXXContext *ctx = CXXContext::sharedInstance();
	long ccaddress = (long) &cc;
	LOGV("registerProxyComponent ccaddress %ld", ccaddress);
	jobject proxiedCCComponent = ctx->findProxyComponent(ccaddress);
	LOGV("registerProxyComponent proxiedCCComponent %ld", (long) proxiedCCComponent);
	long address = (long) this;
	LOGV("registerProxyComponent address %ld", address);
	jobject proxiedComponent = ctx->findProxyComponent(address);
	LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
	if (proxiedComponent == 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		proxiedComponent = proxiedCCComponent;
		LOGV("registerProxyComponent registering proxied component %ld using %d", proxiedComponent, address);
		ctx->registerProxyComponent(address, proxiedComponent);
	}

	LOGV("${entity_class_name}::${entity_class_name}(const ${entity_class_name}& cc) exit");
}
#end if
#end if
#if not '_static' in $entity_class_config['tags']
${entity_class_name}::${entity_class_name}(Proxy proxy)
{
	LOGV("${entity_class_name}::${entity_class_name}(Proxy proxy) enter");

	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	LOGV("registerProxyComponent address %d", address);
	jobject proxiedComponent = ctx->findProxyComponent(address);
	LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
	if (proxiedComponent == 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		// ensure local ref
		jobject proxyref = jni->newLocalRef((jobject) proxy.address);
		proxiedComponent = jni->localToGlobalRef(proxyref);
		ctx->registerProxyComponent(address, proxiedComponent);
	}

	LOGV("${entity_class_name}::${entity_class_name}(Proxy proxy) exit");
}
#end if
#if $no_arg_constructor
${entity_class_name}::${entity_class_name}()
{
	LOGV("${entity_class_name}::${entity_class_name}() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "$class_jnidata['jnisignature']";

	LOGV("${entity_class_name} className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("${entity_class_name} cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("${entity_class_name} jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("${entity_class_name}::${entity_class_name}() exit");	
}
#end if
Proxy ${entity_class_name}::proxy() const
{	
	LOGV("${entity_class_name}::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("${entity_class_name} cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("${entity_class_name} jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("${entity_class_name}::proxy() exit");	

	return proxy;
}
#if not '_static' in $entity_class_config['tags']
#for $constructor in $constructors
${entity_class_name}::${entity_class_name}($constructor['param_str'])
{
	LOGV("${entity_class_name}::${entity_class_name}($constructor['param_str']) enter");	

	#set $cons_jnidata = $constructor['deriveddata']['jnidata']
	const char *methodName = "<init>";
	const char *methodSignature = "$cons_jnidata['jnisignature']";
	const char *className = "$class_jnidata['jnisignature']";

	LOGV("${entity_class_name} className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("${entity_class_name} cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("${entity_class_name} jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{

		#set methodvararg = ""
		#set $param_idx = 0
		#for $param in $constructor['params']
		#set $arg = "arg" + str($param_idx)
		#set $jarg = "jarg" + str($param_idx)
		#set $param_jnidata = $param['deriveddata']['jnidata']
		#set $param_typeinfo = $param['deriveddata']['targetdata']['typeinfo']
		$param_jnidata['jnitypename'] $jarg;
		{
			long cxx_value = (long) & $arg;
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

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("${entity_class_name}::${entity_class_name}($constructor['param_str']) exit");	
}
#end for
#end if
#if not '_static' in $entity_class_config['tags']
// Default Instance Destructor
${entity_class_name}::~${entity_class_name}()
{
	LOGV("${entity_class_name}::~${entity_class_name}() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("${entity_class_name}::~${entity_class_name}() exit");
}
#end if
// Functions
#for $function in $functions
$function['retrn_type'] ${entity_class_name}::$Utils.to_safe_cxx_name(function['name'])($function['param_str'])
{
	LOGV("$function['retrn_type'] ${entity_class_name}::$Utils.to_safe_cxx_name(function['name'])($function['param_str']) enter");

	#set $func_jnidata = $function['deriveddata']['jnidata']
	const char *methodName = "$function['name']";
	const char *methodSignature = "$func_jnidata['jnisignature']";
	const char *className = "$class_jnidata['jnisignature']";

	LOGV("${entity_class_name} className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	#if '_static' in $function['tags']
	long cxxAddress = (long) static_address; // _static function
	#else
	long cxxAddress = (long) this;
	#end if
	LOGV("${entity_class_name} cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("${entity_class_name} jni address %d", javaObject);

	#set methodvararg = ""
	#set $param_idx = 0
	#for $param in $function['params']
	#set $arg = "arg" + str($param_idx)
	#set $jarg = "jarg" + str($param_idx)
	#set $param_jnidata = $param['deriveddata']['jnidata']
	#set $param_typeinfo = $param['deriveddata']['targetdata']['typeinfo']
	$param_jnidata['jnitypename'] $jarg;
	{
		long cxx_value = (long) & $arg;
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
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		${param_typeinfo['typeconverter']}(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
	$function['retrn_type'] result = (${function['retrn_type']}) (cxx_value);
	#else if 'isproxied' in $retrn_typeinfo
	$function['retrn_type'] result((${function['retrn_type']}) *((${function['retrn_type']} *) cxx_value));
	#else
	$function['retrn_type'] result = (${function['retrn_type']}) *((${function['retrn_type']} *) cxx_value);
	#end if
	#if $retrn_typeinfo['isenum'] == True
	//
	#elif $retrn_typeinfo['isprimitive'] == True
	// 
	#elif $retrn_typeinfo['isvoid'] == True
	//
	#elif $retrn_typeinfo['isarray'] == True
	delete (($function['retrn_type'] *) cxx_value);
	#else 
	delete (($function['retrn_type'] *) cxx_value);
	#end if
	#else
	#if '_static' in $function['tags']
	jni->invokeStatic${func_jnidata['jniinvokeid']}Method(className,methodName,methodSignature$methodvararg);
	#else
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
