#import datetime
/*
 * ${impl_file_name}
 *
 * Author: CXX CodeGenerator
 */

\#include "${package_name}/${head_file_name}"
\#include <map>

#for $include in $impl_includes_list
\#include <$include>
#end for


#define LOG_TAG "${package_name}"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace $namespace_name;

