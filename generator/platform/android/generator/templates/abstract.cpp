/*
 * Implementation (Abstract CXX)
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
#set $abstract_class = $CONFIG.abstract_class
#set $abstract_class_name = $CONFIG.abstract_class_name
#set $abstract_head_file_name = $CONFIG.abstract_head_file_name

\#include <$abstract_head_file_name>
\#include <jni.h>

namespace ${namespace} {

}