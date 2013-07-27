/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */
#set $enum = $CONFIG.enum
#set $enum_namespace = $CONFIG.enum_namespace
#set $enum_name = $CONFIG.enum_name

\#ifndef _$enum_name
\#define _$enum_name

\#ifdef __cplusplus
extern "C" {
\#endif //__cplusplus

namespace $enum_namespace {

#if 'typedef' in $enum
typedef enum
#elif 'tag' in $enum
enum ${enum['tag']}Cxx
#end if
{
	#for $constant in $enum['constants']
	${constant['name']} = ${constant['value']},
	#end for
}#if 'typedef' in $enum# ${enum['typedef']}Cxx;
#end if

} //namespace $enum_namespace

\#ifdef __cplusplus
}
\#endif //__cplusplus
\#endif // _$enum_name
