/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */
#set $enum = $CONFIG.enum
#set $enum_namespace = $CONFIG.enum_namespace
#set $enum_head_file_name = $CONFIG.enum_head_file_name

\#ifndef _$enum_head_file_name
\#define _$enum_head_file_name

\#ifdef __cplusplus
extern "C" {
\#endif //__cplusplus

namespace $enum_namespace {

#if 'typedef' in $enum
typedef enum
#elif 'tag' in $enum
enum ${enum['tag']}
#end if
{
	#for $constant in $enum['constants']
	${constant['name']} = ${constant['value']},
	#end for
}#if 'typedef' in $enum# ${enum['typedef']};
#end if

} //namespace $enum_namespace

\#ifdef __cplusplus
}
\#endif //__cplusplus
\#endif // _$enum_head_file_name
