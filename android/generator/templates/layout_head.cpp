#import datetime
/*
 * ${impl_filename}
 *
 * Author: CXX CodeGenerator
 */

\#include "${file_prefix}/${head_filename}"
\#include <map>

#for $include in $impl_includes_list
\#include <$include>
#end for


#define LOG_TAG "${file_prefix}"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace ZDK;

