#	Default converters 
# 	Special Keywords
#		cxx_proxy_type 		Marker to represent a Java Component that proxies a CXX Component
#		cxx_proxied_type 	Marker to represent the CXX Component that is proxied by a Java Component
#		cxx_array_type 		Marker to represent a Java Array (note that Java Arrays do not have a representative type)

config = {
	"converters" : [
		{
			"name"		:	"convert_proxy",
			"java"		:	{
								"type" : "cxx_proxy_type"
							},
			"cxx"		:	{
								"type" : "cxx_proxied_type"
							},

		},
		{
			"name"		:	"convert_void",
			"java"		:	{ 
								"type" : "void",
							},
			"cxx"		: 	{ 
								"type" : "void",
							},
		},
		{
			"name"		:	"convert_boolean",
			"java"		: 	{ 
								"type" : "boolean",
							},
			"cxx"		:	{
								"type" : "bool",
							},
		},
		{
			"name"		: 	"convert_byte",
			"java"		:	{ 
								"type" : "byte",
							},
			"cxx"		:	{ 
								"type" : "int",
							}
		},
		{
			"name"		:	"convert_char",
			"java"		:	{ 
								"type" : "char", 
							},
			"cxx"		:	{ 
								"type" : "char",
							},
		},
		{
			"name"		: 	"convert_short",
			"java"		:	{ 
								"type" : "short",
							},
			"cxx"		:	{ 
								"type" : "short",
							},
		},
		{
			"name"		: 	"convert_int",
			"java"		:	{ 
								"type" : "int", 
							},
			"cxx"		:	{
								"type" : "int",
							},
		},
		{
			"name"		:	"convert_long",
			"java"		:	{ 
								"type" : "long", 
							},
			"cxx"		:	{ 
								"type" : "long",
							}
		},
		{
			"name"		:	"convert_float",
			"java"		:	{ 
								"type" : "float", 
							},
			"cxx"		:	{
								"type" : "float",
							},
		},
		{
			"name"		:	"convert_double",
			"java"		:	{ 
								"type" : "double",
							},
			"cxx"		:	{
								"type" : "double",
							},
		},
		{
			"name" 	 	: 	"convert_java_lang_String",
			"java" 		: 	{ 
								"type" : "java.lang.String" 
							},
			"cxx"	 	:	{
								"type" : "std::string",
							},
		},
		{
			"name"		:	"convert_java_lang_Boolean",
			"java"		:	{ 
								"type" : "java.lang.Boolean",
							},
			"cxx"		:	{
								"type" : "bool",
							},
		},
		{
			"name"		:	"convert_java_lang_Byte",
			"java"		:	{ 
								"type" : "java.lang.Byte",
							},
			"cxx"		:	{
								"type" : "int",
							},
		},
		{
			"name"		:	"convert_java_lang_Character",
			"java"		:	{ 
								"type" : "java.lang.Character", 
							},
			"cxx"		:	{
								"type" : "char",
							},
		},
		{
			"name"		:	"convert_java_lang_Short",
			"java"		:	{ 
								"type" : "java.lang.Short" 
							},
			"cxx"		:	{
								"type" : "short",
							},
		},
		{
			"name"		:	"convert_java_lang_Integer",
			"java"		:	{ 
								"type" : "java.lang.Integer" 
							},
			"cxx"		:	{
								"type" : "int",
							}
		},
		{
			"name"		:	"convert_java_lang_Long",
			"java"		:	{ 
								"type" : "java.lang.Long",
							},
			"cxx"		:	{
								"type" : "long",
							},
		},
		{
			"name"		:	"convert_java_lang_Float",
			"java"		:	{ 
								"type" : "java.lang.Float",
							},
			"cxx"		:	{
								"type" : "float",
							},
		},
		{
			"name"		:	"convert_java_lang_Double",
			"java"		:	{ 
								"type" : "java.lang.Double",
							},
			"cxx"		:	{
								"type" : "double",
							},
		},
		{
			"name"		:	"convert_java_lang_BigInteger",
			"java"		:	{ 
								"type" : "java.lang.BigInteger",
							},
			"cxx"		:	{
								"type" : "double",
							},
		},
		{
			"name"					:	"convert_java_math_BigDecimal",
			"java"					:	{ 
											"type" : "java.lang.BigDecimal", 
										},
			"cxx"					:	{
											"type" : "double",
										},
		},
		{
			"name"					:	"convert_java_util_Date",
			"java"					:	{ 
											"type" : "java.util.Date",
										},
			"cxx"					: 	{
											"type" : "long",
										},
		},
		{
			"name"					: 	"convert_java_util_List_proxy_type_template",
			"java"					:	{ 
											"type" : "java.util.List",
											"children" : 
											[
												{
													"type" : "cxx_proxy_type",
												},
											],
										},
			"cxx"					:	{ 
											"type" : "std::vector",
											"children" :
											[
												{
													"type" : "cxx_proxied_type",
												},
											]
										},
		},
		{
			"name"					:	"convert_java_util_Map_java_lang_String_proxy_type_template",
			"java"					:	{ 
											"type" : "java.util.Map",
											"children" : 
											[
												{
													"type" : "cxx_proxy_type",
												},
											],
										},
			"cxx"					:	{
											"type" : "std::map",
											"children" : 
											[
												{
													"type" : "std::string",
												},
												{
													"type" : "cxx_proxied_type",
												},
											],
										}
		},
	],
}