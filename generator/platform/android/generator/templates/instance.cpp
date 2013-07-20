/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//

#set $SPACE = " "
#set $COMMA = ","
#set $REF = "&"
#set $config_module = $CONFIG.config_module
#set $config_data = $config_module.config_data
#set $namespace = $config_data['namespace']
#set $package = $config_data['package']
#set $entity_class_config = $CONFIG.entity_class
#set $entity_class_name = $CONFIG.entity_class_name
#set $class_name = $CONFIG.class_name
#set $entity_head_file_name = $CONFIG.entity_head_file_name
#set $functions = $config_module.list_functions(class_tags=None,class_xtags=None,class_name=$class_name,function_tags=['_proxy'],function_xtags=None,function_name=None)	

#for $function in $functions
#set $param_str = ""
#set $params = $function['params']
#set $param_idx = 0
#set $proxied_typeinfo_list = list()
#set $modifier_str = None
#if '_static' in $function['tags']
#set $modifier_str = 'static' 
#end if
#for $param in $params
 	#set $typeinfo = $param['deriveddata']['targetdata']['typeinfo']
 	#if 'isproxied' in $typeinfo
 		$proxied_typeinfo_list.append(typeinfo) 
 	#end if
	#if $param_idx > 0
		#set $param_str = $param_str + $COMMA 
	#end if
	#set $param_str = $param_str + $typeinfo['typename'] + $REF
	#set $param_str = $param_str + $SPACE + "arg" + str($param_idx)
	#set $param_idx = $param_idx + 1
#end for
#set $function['param_str'] = $param_str
#set $returns = $function['returns'] 
#for $retrn in $returns
	#set $typeinfo = $retrn['deriveddata']['targetdata']['typeinfo']
 	#set $function['retrn_type'] = $typeinfo['typename']
 	#if 'isproxied' in $typeinfo
 	#set $function['retrn_type'] = $typeinfo['typename'] + " * "
	$proxied_typeinfo_list.append(typeinfo)
	#end if
 	#break
#end for
#set $function['proxied_typeinfo_list'] = $proxied_typeinfo_list
#set $function['modifier_str'] = $modifier_str
#end for

#set $proxied_typeinfos = list()
#for $function in $functions
$proxied_typeinfos.extend(function['proxied_typeinfo_list'])
#end for

// Generated Code 

\#include <$entity_head_file_name>
\#include <jni.h>
\#include <CXXContext.hpp>
\#include <JNIContext.hpp>
// TODO: integrate with custom converters
\#include <CXXConverter.hpp>

\#define LOG_TAG "${entity_class_name}"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace ${namespace};

static long static_obj;
static long static_address = (long) &static_obj;

// Proxy Converter Template
template <class T>
void convert_proxy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

template <class T>
void convert_proxy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx_value = 0; // TODO: add constructor (long) new T((void *)java_value);
	}
}

// Proxy Converter Types
#set $forwarded_types = list()
#for $proxied_typeinfo in $proxied_typeinfos
#set $proxied_type = $proxied_typeinfo['typename']
#if $proxied_type not in $forwarded_types
$forwarded_types.append(proxied_type)
#if $proxied_typeinfo['isenum'] == False
template void convert_proxy<${proxied_type}>(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);
#end if
#end if
#end for

#if '_instance' in $entity_class_config['tags']
// Default Instance Constructors
${entity_class_name}::${entity_class_name}(const ${entity_class_name}& cc)
{
	LOGV("${entity_class_name}::${entity_class_name}(const ${entity_class_name}& cc) invoked");

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
}
${entity_class_name}::${entity_class_name}(void * proxy)
{
	LOGV("${entity_class_name}::${entity_class_name}(void * proxy) invoked");

	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	LOGV("registerProxyComponent address %d", address);
	jobject proxiedComponent = ctx->findProxyComponent(address);
	LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
	if (proxiedComponent == 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		proxiedComponent = jni->localToGlobalRef((jobject) proxy);
		ctx->registerProxyComponent(address, proxiedComponent);
	}
}
// Default Instance Destructor
${entity_class_name}::~${entity_class_name}()
{
	LOGV("${entity_class_name}::~${entity_class_name}() invoked");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
}
#end if
// Functions
#for $function in $functions
$function['retrn_type'] ${entity_class_name}::$config_module.to_safe_cxx_name(function['name'])($function['param_str'])
{
	#set $func_jnidata = $function['deriveddata']['jnidata']
	const char *methodName = "$function['name']";
	const char *methodSignature = "$func_jnidata['jnisignature']";
	const char *className = "$entity_class_name";

	LOGV("${entity_class_name} className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

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
	$param_jnidata['jnitype'] $jarg;
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
				#if $child_type['converter'] == 'convert_proxy'
				converter_stack.push((long) &${child_type['converter']}<${child_type_typeinfo['typename']}>);				
				#else
				converter_stack.push((long) &${child_type['converter']});				
				#end if

				#if 'children' in $child_type
					$type_stack.append($child_type)
				#end if
			}
			#end for
		}
		#end while
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		#if $param['converter'] == 'convert_proxy'
		${param['converter']}<${param_typeinfo['typename']}>(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
		#else
		${param['converter']}(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
		#end if

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
	$function['retrn_type'] result;
	#set $retrn_jnidata = $retrn['deriveddata']['jnidata']
	$retrn_jnidata['jnitype'] jni_result = ($retrn_jnidata['jnitype']) jni->invoke${func_jnidata['jniinvokeid']}Method(javaObject,className,methodName,methodSignature$methodvararg);
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
				#if $child_type['converter'] == 'convert_proxy'
				converter_stack.push((long) &${child_type['converter']}<${child_type_typeinfo['typename']}>);				
				#else
				converter_stack.push((long) &${child_type['converter']});				
				#end if

				#if 'children' in $child_type
					$type_stack.append($child_type)
				#end if
			}
			#end for
		}
		#end while
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		#if $retrn['converter'] == 'convert_proxy'
		${retrn['converter']}<${retrn_typeinfo['typename']}>(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
		#else
		${retrn['converter']}(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
		#end if	
	}
	result = ($function['retrn_type']) (*(($function['retrn_type'] *) cxx_value));
	#else
	jni->invoke${func_jnidata['jniinvokeid']}Method(javaObject,className,methodName,methodSignature$methodvararg);
	#end if
	#break
	#end while
		
	jni->popLocalFrame();

	#if $function['retrn_type'] != "void"   
	return result;
	#end if
}
#end for
