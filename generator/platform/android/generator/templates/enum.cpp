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
#set $package = $config_data['package']
#set $namespace = $config_data['namespace']
#set $enum_class = $CONFIG.enum_class
#set $enum_class_name = $CONFIG.enum_class_name
#set $enum_head_file_name = $CONFIG.enum_head_file_name

\#include <$enum_head_file_name>
\#include <jni.h>

namespace ${namespace} {

}