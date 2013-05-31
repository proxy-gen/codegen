#import datetime
/*
 * ${impl_filename}
 *
 * Created on: $datetime.datetime.now().strftime("%b %d,%Y")
 * Author: CXX CodeGenerator
 * 
 * Copyright (c) $datetime.datetime.now().strftime("%Y") Zynga. All rights reserved.
 */

\#include "${file_prefix}/${head_filename}"
\#include <map>

#for $include in $impl_includes_list
\#include <$include>
#end for


#define LOG_TAG "${file_prefix}"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace ZDK;

