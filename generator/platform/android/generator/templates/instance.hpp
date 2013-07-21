/*
 * Header (Instance CXX)
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
#set $child_type_stack = list()
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
 	#if 'children' in $param
 	$child_type_stack.extend($param['children'])
 	#end if
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
	#if 'children' in $retrn
 	$child_type_stack.extend($retrn['children'])
 	#end if	
 	#break
#end for
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
	#set $param_str = $param_str + $typeinfo['typename'] + $REF
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

#set $proxied_typeinfos = list()

#for $function in $functions
$proxied_typeinfos.extend(function['proxied_typeinfo_list'])
#end for

#for $constructor in $constructors
$proxied_typeinfos.extend(constructor['proxied_typeinfo_list'])
#end for

// Generated Code 

#ifndef _$entity_class_name
#define _$entity_class_name
//
// Scroll Down 
//

#set $included_types = list()
#for $proxied_typeinfo in $proxied_typeinfos
#set $proxied_type = $proxied_typeinfo['typename']
#if $proxied_typeinfo['filename'] not in $included_types
$included_types.append($proxied_typeinfo['filename'])
#if $entity_head_file_name != $proxied_typeinfo['filename']
\#include <$proxied_typeinfo['filename']>
#end if
#end if
#end for

\#include <vector>
\#include <map>
\#include <string>
\#include <stack>
\#include <list>
\#include <CXXTypes.hpp>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace ${namespace} {

// Forward Declarations
#set $forwarded_types = list()
#for $proxied_typeinfo in $proxied_typeinfos
#set $proxied_type = $proxied_typeinfo['typename']
#if $proxied_type not in $forwarded_types
$forwarded_types.append(proxied_type)
#if $proxied_typeinfo['isenum'] == False
class $proxied_type;
#end if
#end if
#end for

class $entity_class_name
{
public:

	#if not '_static' in $entity_class_config['tags']
	${entity_class_name}(const ${entity_class_name}& cc);
	#end if
	#if not '_static' in $entity_class_config['tags']
	${entity_class_name}(void * proxy);
	#end if
	#if not '_static' in $entity_class_config['tags']
	// Public Constructors
	// #for $constructor in $constructors
	// ${entity_class_name}($constructor['param_str']);
	// #end for
	#end if
	#if not '_static' in $entity_class_config['tags']
	// Default Destructor
	virtual ~${entity_class_name}();
	#end if	
	#if not '_static' in $entity_class_config['tags']
	void * proxied();
	#end if
	// Functions
	#for $function in $functions
	$function['modifier_str'] $function['retrn_type'] $config_module.to_safe_cxx_name(function['name'])($function['param_str']);
	#end for
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _$entity_class_name