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
#set $instance_class = $CONFIG.instance_class
#set $instance_class_name = $CONFIG.instance_class_name
#set $instance_head_file_name = $CONFIG.instance_head_file_name

\#include <$instance_head_file_name>
\#include <jni.h>

namespace ${namespace} {

}