Copyright 2013 Zynga Inc.

Licensed under the Apache License, Version 2.0 (the "License");

You may not use this file except in compliance with the License.

You may obtain a copy of the License at
    http://www.apache.org/licenses/LICENSE-2.0
    
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

---------------

\#Codegen report for "$CONFIG.namespace_name"


\##Missing classes

#set $count_classes = $len($report.missing_classes)
#if $count_classes > 0
>*TODO*: Add the following classes to the codegen config

#set $index = 0
#for $missing_class in $sorted($report.missing_classes)
#set $index = $index + 1
	${index}. $missing_class
#end for
#end if

Total *$count_classes* missing classes

\##Missing converters

#set $count_gen_converters = $len($report.missing_gen_converters)
#if $count_gen_converters > 0
>*TODO*: Generate converters for the following classes

	Remove '_no_gen_converters' tag in the config to generate these converters

#set $index = 0
#for $missing_converter in $sorted($report.missing_gen_converters)
#set $index = $index + 1
	${index}. $missing_converter
#end for
#end if

Total *$count_gen_converters* missing converters

\##Missing array converters

#set $count_gen_array_converters = $len($report.missing_gen_array_converters)
#if $count_gen_array_converters > 0
>*TODO*: Generate array converters for the following classes

	Remove '_no_gen_array_converters' tag in the config to generate these array converters

#set $index = 0
#for $missing_converter in $sorted($report.missing_gen_array_converters)
#set $index = $index + 1
	${index}. $missing_converter
#end for
#end if

Total *$count_gen_array_converters* missing array converters

\##Missing 2d array converters

#set $count_gen_2d_array_converters = $len($report.missing_gen_2d_array_converters)
#if $count_gen_2d_array_converters > 0
>*TODO*: Generate 2d array converters for the following classes

	Remove '_no_gen_2d_array_converters' tag in the config to generate these 2d array converters

#set $index = 0
#for $missing_converter in $sorted($report.missing_gen_2d_array_converters)
#set $index = $index + 1
	${index}. $missing_converter
#end for
#end if

Total *$count_gen_2d_array_converters* missing 2d array converters

\##Unused converters

#set $count_gen_converters = $len($report.unused_gen_converters)
#if $count_gen_converters > 0
>*TODO*: Skip generating converters for the following classes

>*WARNING* Check that this class is not referenced by other codegen projects before you do so

	Add the '_no_gen_converters' tag (remove '_gen_converters' tag) in the config to skip generating these converters

#set $index = 0
#for $unused_converter in $sorted($report.unused_gen_converters)
#set $index = $index + 1
	${index}. $unused_converter
#end for
#end if

Total *$count_gen_converters* unused converters

\## Unused array converters

#set $count_gen_array_converters = $len($report.unused_gen_array_converters)
#if $count_gen_array_converters > 0
>*TODO*: Skip generating array converters for the following classes

>*WARNING* Check that this class is not referenced by other codegen projects before you do so

	Add the '_no_gen_array_converters' tag (remove '_gen_array_converters' tag) in the config to skip generating these converters

#set $index = 0
#for $unused_gen_array_converter in $sorted($report.unused_gen_array_converters)
#set $index = $index + 1
	${index}. $unused_gen_array_converter
#end for
#end if

Total *$count_gen_array_converters* unused array converters

\## Unused 2d array converters

#set $count_gen_2d_array_converters = $len($report.unused_gen_2d_array_converters)
#if $count_gen_2d_array_converters > 0
>*TODO*: Skip generating 2d array converters for the following classes

>*WARNING* Check that this class is not referenced by other codegen projects before you do so

	Add the '_no_gen_2d_array_converters' tag (remove '_gen_2d_array_converters' tag) in the config to skip generating these converters

#set $index = 0
#for $unused_gen_2d_array_converter in $sorted($report.unused_gen_2d_array_converters)
#set $index = $index + 1
	${index}. $unused_gen_2d_array_converter
#end for
#end if

Total *$count_gen_2d_array_converters* unused 2d array converters






