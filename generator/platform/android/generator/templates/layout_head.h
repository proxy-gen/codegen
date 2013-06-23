#import datetime
/*
 * ${head_filename}
 *
 * Author: cxx-bindings-generator
 */


\#ifndef ${head_filename.upper().replace('.','_')}_
\#define ${head_filename.upper().replace('.','_')}_

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

