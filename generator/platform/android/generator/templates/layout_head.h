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

namespace ZDK {

#for $forward_declaration in $forward_declarations_list
class $forward_declaration;
#end for

