#import datetime
/*
 * ${head_filename}
 *
 * Created on: $datetime.datetime.now().strftime("%b %d,%Y")
 * Author: CXX CodeGenerator
 * 
 * Copyright (c) $datetime.datetime.now().strftime("%Y") Zynga. All rights reserved.
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