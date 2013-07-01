#import datetime
/*
 * ${head_file_name}
 *
 * Author: cxx-bindings-generator
 */


\#ifndef ${head_file_name.upper().replace('.','_')}_
\#define ${head_file_name.upper().replace('.','_')}_

#for $include in $header_includes_list
\#include <$include>
#end for


\#ifdef __cplusplus
extern "C" {
\#endif //__cplusplus

namespace $namespace_name {

#for $clazz in $classes
#if not $clazz.is_enum
	class $clazz.class_name;
#end if
#end for

