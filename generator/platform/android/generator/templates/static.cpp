/*
 * Implementation (Static CXX)
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
#set $static_class = $CONFIG.static_class
#set $static_class_name = $CONFIG.static_class_name
#set $static_head_file_name = $CONFIG.static_head_file_name

\#include <$static_head_file_name>
\#include <jni.h>

namespace ${namespace} {

}