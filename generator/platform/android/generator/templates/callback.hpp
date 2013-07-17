/*
 * Header (CXX)
 * Author: cxx-bindings-generator
 */
#set $config_module = $CONFIG.config_module
#set $config_data = $config_module.config_data
#set $namespace = $config_data['namespace']
#set $callback_class_name = $CONFIG.callback_class_name

#ifndef _$callback_class_name
#define _$callback_class_name

//includes go here

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace ${namespace} {

class $callback_class_name
{

};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _$callback_class_name