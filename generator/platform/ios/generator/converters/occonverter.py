#
#  Copyright 2013 Zynga Inc.
#
#  Licensed under the Apache License, Version 2.0 (the "License");
#  you may not use this file except in compliance with the License.
#  You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
#  Unless required by applicable law or agreed to in writing, software
#  distributed under the License is distributed on an "AS IS" BASIS,
#  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#  See the License for the specific language governing permissions and
#  limitations under the License.
#
#	Default converters 
#
#
#
#

config = {
	"converters" : [
		{
			"name"		:	"convert_string",
			"objc"		:	{
								"type" : "NSString *"
							},
			"cxx"		:	{
								"type" : "std::string"
							},
		},	
		{
			"name"		:	"convert_error",
			"objc"		:	{
								"type" : "NSError *"
							},
			"cxx"		:	{
								"type" : "std::string"
							},
		},
		{
			"name"		:	"convert_array",
			"objc"		:	{
								"type" : "NSArray *"
							},
			"cxx"		:	{
								"type" : "std::vector<void *>"
							},
		},
		{
			"name"		:	"convert_dictionary",
			"objc"		:	{
								"type" : "NSDictionary *"
							},
			"cxx"		:	{
								"type" : "std::map<void *, void *>"
							},
		},
		{
			"name"		:	"convert_url",
			"objc"		:	{
								"type" : "NSURL *"
							},
			"cxx"		:	{
								"type" : "std::string"
							},
		},
		{
			"name"		:	"convert_date",
			"objc"		:	{
								"type" : "NSDate *"
							},
			"cxx"		:	{
								"type" : "double"
							},
		},
		{
			"name"		:	"convert_locale",
			"objc"		:	{
								"type" : "NSLocale *"
							},
			"cxx"		:	{
								"type" : "std::string"
							},
		},
		{
			"name"		:	"convert_object",
			"objc"		:	{
								"type" : "id"
							},
			"cxx"		:	{
								"type" : "void *"
							},
		},
	],
}