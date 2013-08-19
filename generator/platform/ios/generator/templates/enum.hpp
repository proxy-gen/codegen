##
##  Copyright 2013 Zynga Inc.
##
##  Licensed under the Apache License, Version 2.0 (the "License");
##  you may not use this file except in compliance with the License.
##  You may obtain a copy of the License at
##
##      http://www.apache.org/licenses/LICENSE-2.0
##
##  Unless required by applicable law or agreed to in writing, software
##  distributed under the License is distributed on an "AS IS" BASIS,
##  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
##  See the License for the specific language governing permissions and
##  limitations under the License.
##
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
