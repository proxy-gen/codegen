/*
 * Implementation (Singleton CXX)
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
#set $singleton_class = $CONFIG.singleton_class
#set $singleton_class_name = $CONFIG.singleton_class_name
#set $singleton_head_file_name = $CONFIG.singleton_head_file_name

\#include <$singleton_head_file_name>
\#include <jni.h>

namespace ${namespace} {

}