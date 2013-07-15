#	Default converters 
# 	Special Type Markers
#		_object_array_type		 							Object array type
#		_byte_array_type									byte array type
#		_short_array_type									short array type
#		_int_array_type										int array type
#		_long_array_type									long array type
#		_float_array_type									float array type
#		_double_array_type									double array type
#		_boolean_array_type									boolean array type
#		_char_array_type									char array type

config = {
	"converters" : [
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
								"type" : "unsigned char",
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
								"type" : "java.math.BigInteger",
							},
			"cxx"		:	{
								"type" : "double",
							},
		},
		{
			"name"					:	"convert_java_math_BigDecimal",
			"java"					:	{ 
											"type" 	: "java.math.BigDecimal", 
										},
			"cxx"					:	{
											"type" 	: "double",
										},
		},
		{
			"name"					:	"convert_java_util_Date",
			"java"					:	{ 
											"type" 	: "java.util.Date",
										},
			"cxx"					: 	{
											"type" 	: "long",
										},
		},
		{
			"name"					:	"convert_java_util_Map",
			"java"					:	{
											"type"	: "java.util.Map",
										},
			"cxx"					:	{
											"type"	: "std::map"	
										},
		},
		{
			"name"					:	"convert_java_util_List",
			"java"					:	{
											"type"	:	"java.util.List",
										},
			"cxx"					:	{
											"type"	:	"std::vector",
										},
		},
		{
			"name"					:	"convert__object_array_type",
			"java"					:	{
											"type"	:	"_object_array_type",
										},
			"cxx"					:	{
											"type"	: "std::vector",
										}
		},
		{
			"name"					:	"convert__byte_array_type",
			"java"					:	{
											"type"	:	"_byte_array_type",
										},
			"cxx"					:	{
											"type"	: "std::vector",
										}
		},
		{
			"name"					:	"convert__short_array_type",
			"java"					:	{
											"type"	:	"_short_array_type",
										},
			"cxx"					:	{
											"type"	: "std::vector",
										}
		},
		{
			"name"					:	"convert__int_array_type",
			"java"					:	{
											"type"	:	"_int_array_type",
										},
			"cxx"					:	{
											"type"	: "std::vector",
										}
		},
		{
			"name"					:	"convert__long_array_type",
			"java"					:	{
											"type"	:	"_long_array_type",
										},
			"cxx"					:	{
											"type"	: "std::vector",
										}
		},
		{
			"name"					:	"convert__float_array_type",
			"java"					:	{
											"type"	:	"_float_array_type",
										},
			"cxx"					:	{
											"type"	: "std::vector",
										}
		},
		{
			"name"					:	"convert__double_array_type",
			"java"					:	{
											"type"	:	"_double_array_type",
										},
			"cxx"					:	{
											"type"	: "std::vector",
										}
		},
		{
			"name"					:	"convert__boolean_array_type",
			"java"					:	{
											"type"	:	"_boolean_array_type",
										},
			"cxx"					:	{
											"type"	: "std::vector",
										}
		},
		{
			"name"					:	"convert__char_array_type",
			"java"					:	{
											"type"	:	"_char_array_type",
										},
			"cxx"					:	{
											"type"	: "std::vector",
										}
		},

	],
}