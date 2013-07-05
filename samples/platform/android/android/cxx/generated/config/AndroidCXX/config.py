config = {
	"converters" : [
		{
			"cxx" : "void",
			"java" : "void",
			"name" : "convert_void",
		}
		{
			"cxx" : "bool",
			"java" : "boolean",
			"name" : "convert_boolean",
		}
		{
			"cxx" : "int",
			"java" : "byte",
			"name" : "convert_byte",
		}
		{
			"cxx" : "char",
			"java" : "char",
			"name" : "convert_char",
		}
		{
			"cxx" : "short",
			"java" : "short",
			"name" : "convert_short",
		}
		{
			"cxx" : "int",
			"java" : "int",
			"name" : "convert_int",
		}
		{
			"cxx" : "long",
			"java" : "long",
			"name" : "convert_long",
		}
		{
			"cxx" : "float",
			"java" : "float",
			"name" : "convert_float",
		}
		{
			"cxx" : "double",
			"java" : "double",
			"name" : "convert_double",
		}
		{
			"cxx" : "std::string",
			"java" : "java.lang.String",
			"name" : "convert_java_lang_String",
		}
		{
			"cxx" : "bool",
			"java" : "java.lang.Boolean",
			"name" : "convert_java_lang_Boolean",
		}
		{
			"cxx" : "int",
			"java" : "java.lang.Byte",
			"name" : "convert_java_lang_Byte",
		}
		{
			"cxx" : "char",
			"java" : "java.lang.Character",
			"name" : "convert_java_lang_Character",
		}
		{
			"cxx" : "short",
			"java" : "java.lang.Short",
			"name" : "convert_java_lang_Short",
		}
		{
			"cxx" : "int",
			"java" : "java.lang.Integer",
			"name" : "convert_java_lang_Integer",
		}
		{
			"cxx" : "long",
			"java" : "java.lang.Long",
			"name" : "convert_java_lang_Long",
		}
		{
			"cxx" : "float",
			"java" : "java.lang.Float",
			"name" : "convert_java_lang_Float",
		}
		{
			"cxx" : "double",
			"java" : "java.lang.Double",
			"name" : "convert_java_lang_Double",
		}
		{
			"cxx" : "double",
			"java" : "java.lang.BigInteger",
			"name" : "convert_java_lang_BigInteger",
		}
		{
			"cxx" : "double",
			"java" : "java.lang.BigDecimal",
			"name" : "convert_java_math_BigDecimal",
		}
		{
			"cxx" : "long",
			"java" : "java.util.Date",
			"name" : "convert_java_util_Date",
		}
		{
			"is_proxy_converter" : True,
			"java" : "java.util.List",
			"name" : "convert_java_util_List_template",
		}
		{
			"is_proxy_converter" : True,
			"java" : "java.util.List",
			"name" : "convert_java_util_Map_template",
		}
	],
	"packages" : [
		{
			"name" : "android.os",
		},
		{
			"name" : "android.content",
		},
	],
	"classes" : [
		{
			"name" : "android.os.Bundle",
			"functions" : [
				{
					"name" : "get",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "java.lang.Object",
						},
					],
				},
				{
					"name" : "toString",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						},
					],
				},
				{
					"name" : "clone",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.lang.Object",
						},
					],
				},
				{
					"name" : "getBoolean",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "boolean",
							"converter" : "convert_boolean",
						}
					],
					"returns" : [
						{
							"name" : "boolean",
							"converter" : "convert_boolean",
						},
					],
				},
				{
					"name" : "putBoolean",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "boolean",
							"converter" : "convert_boolean",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "getByte",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "byte",
							"converter" : "convert_byte",
						}
					],
					"returns" : [
						{
							"name" : "byte",
							"converter" : "convert_byte",
						},
						{
							"name" : "java.lang.Byte",
							"converter" : "convert_java_lang_Byte",
						},
					],
				},
				{
					"name" : "putByte",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "byte",
							"converter" : "convert_byte",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "getShort",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "short",
							"converter" : "convert_short",
						}
					],
					"returns" : [
						{
							"name" : "short",
							"converter" : "convert_short",
						},
					],
				},
				{
					"name" : "putShort",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "short",
							"converter" : "convert_short",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "getChar",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "char",
							"converter" : "convert_char",
						}
					],
					"returns" : [
						{
							"name" : "char",
							"converter" : "convert_char",
						},
					],
				},
				{
					"name" : "putChar",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "char",
							"converter" : "convert_char",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "getInt",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "int",
							"converter" : "convert_int",
						}
					],
					"returns" : [
						{
							"name" : "int",
							"converter" : "convert_int",
						},
					],
				},
				{
					"name" : "putInt",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "int",
							"converter" : "convert_int",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "getLong",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "long",
							"converter" : "convert_long",
						}
					],
					"returns" : [
						{
							"name" : "long",
							"converter" : "convert_long",
						},
					],
				},
				{
					"name" : "putLong",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "long",
							"converter" : "convert_long",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "getFloat",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "float",
							"converter" : "convert_float",
						}
					],
					"returns" : [
						{
							"name" : "float",
							"converter" : "convert_float",
						},
					],
				},
				{
					"name" : "putFloat",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "float",
							"converter" : "convert_float",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "getDouble",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "double",
							"converter" : "convert_double",
						}
					],
					"returns" : [
						{
							"name" : "double",
							"converter" : "convert_double",
						},
					],
				},
				{
					"name" : "putDouble",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "double",
							"converter" : "convert_double",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "clear",
					"params" : [
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "isEmpty",
					"params" : [
					],
					"returns" : [
						{
							"name" : "boolean",
							"converter" : "convert_boolean",
						},
					],
				},
				{
					"name" : "size",
					"params" : [
					],
					"returns" : [
						{
							"name" : "int",
							"converter" : "convert_int",
						},
					],
				},
				{
					"name" : "putAll",
					"params" : [
						{
							"name" : "class android.os.Bundle",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "remove",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "keySet",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.util.Set",
						},
					],
				},
				{
					"name" : "containsKey",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "boolean",
							"converter" : "convert_boolean",
						},
					],
				},
				{
					"name" : "getBundle",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "android.os.Bundle",
						},
					],
				},
				{
					"name" : "getString",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						},
					],
				},
				{
					"name" : "setClassLoader",
					"params" : [
						{
							"name" : "class java.lang.ClassLoader",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "hasFileDescriptors",
					"params" : [
					],
					"returns" : [
						{
							"name" : "boolean",
							"converter" : "convert_boolean",
						},
					],
				},
				{
					"name" : "putString",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "putCharSequence",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "interface java.lang.CharSequence",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "putParcelable",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "interface android.os.Parcelable",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "putParcelableArray",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "class [Landroid.os.Parcelable;",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "putParcelableArrayList",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "java.util.ArrayList<? extends android.os.Parcelable>",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "putSparseParcelableArray",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "android.util.SparseArray<? extends android.os.Parcelable>",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "putIntegerArrayList",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "java.util.ArrayList<java.lang.Integer>",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "putStringArrayList",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "java.util.ArrayList<java.lang.String>",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "putCharSequenceArrayList",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "java.util.ArrayList<java.lang.CharSequence>",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "putSerializable",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "interface java.io.Serializable",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "putBooleanArray",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "class [Z",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "putByteArray",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "class [B",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "putShortArray",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "class [S",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "putCharArray",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "class [C",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "putIntArray",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "class [I",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "putLongArray",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "class [J",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "putFloatArray",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "class [F",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "putDoubleArray",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "class [D",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "putStringArray",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "class [Ljava.lang.String;",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "putCharSequenceArray",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "class [Ljava.lang.CharSequence;",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "putBundle",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "class android.os.Bundle",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "getCharSequence",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "java.lang.CharSequence",
						},
					],
				},
				{
					"name" : "getParcelable",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "android.os.Parcelable",
						},
					],
				},
				{
					"name" : "getParcelableArray",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "[Landroid.os.Parcelable;",
						},
					],
				},
				{
					"name" : "getParcelableArrayList",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "java.util.ArrayList",
						},
					],
				},
				{
					"name" : "getSparseParcelableArray",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "android.util.SparseArray",
						},
					],
				},
				{
					"name" : "getSerializable",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "java.io.Serializable",
						},
					],
				},
				{
					"name" : "getIntegerArrayList",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "java.util.ArrayList",
						},
					],
				},
				{
					"name" : "getStringArrayList",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "java.util.ArrayList",
						},
					],
				},
				{
					"name" : "getCharSequenceArrayList",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "java.util.ArrayList",
						},
					],
				},
				{
					"name" : "getBooleanArray",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "[Z",
						},
					],
				},
				{
					"name" : "getByteArray",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "[B",
						},
					],
				},
				{
					"name" : "getShortArray",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "[S",
						},
					],
				},
				{
					"name" : "getCharArray",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "[C",
						},
					],
				},
				{
					"name" : "getIntArray",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "[I",
						},
					],
				},
				{
					"name" : "getLongArray",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "[J",
						},
					],
				},
				{
					"name" : "getFloatArray",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "[F",
						},
					],
				},
				{
					"name" : "getDoubleArray",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "[D",
						},
					],
				},
				{
					"name" : "getStringArray",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "[Ljava.lang.String;",
						},
					],
				},
				{
					"name" : "getCharSequenceArray",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "[Ljava.lang.CharSequence;",
						},
					],
				},
				{
					"name" : "describeContents",
					"params" : [
					],
					"returns" : [
						{
							"name" : "int",
							"converter" : "convert_int",
						},
					],
				},
				{
					"name" : "writeToParcel",
					"params" : [
						{
							"name" : "class android.os.Parcel",
						}
						{
							"name" : "int",
							"converter" : "convert_int",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "readFromParcel",
					"params" : [
						{
							"name" : "class android.os.Parcel",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
			],			
			"constructors" : [	
				{
					"name" : "android.os.Bundle",
					"params" : [
						{
							"name" : class java.lang.ClassLoader,
						}
						{
							"name" : int,
							"converter" : convert_int,
						}
						{
							"name" : class android.os.Bundle,
						}
					],
				},
			],
		},
		{
			"name" : "android.content.Intent",
			"functions" : [
				{
					"name" : "toString",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						},
					],
				},
				{
					"name" : "clone",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.lang.Object",
						},
					],
				},
				{
					"name" : "getPackage",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						},
					],
				},
				{
					"name" : "getType",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						},
					],
				},
				{
					"name" : "toURI",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						},
					],
				},
				{
					"name" : "getScheme",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						},
					],
				},
				{
					"name" : "getData",
					"params" : [
					],
					"returns" : [
						{
							"name" : "android.net.Uri",
						},
					],
				},
				{
					"name" : "getComponent",
					"params" : [
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "android.content.ComponentName",
						},
					],
				},
				{
					"name" : "hasFileDescriptors",
					"params" : [
					],
					"returns" : [
						{
							"name" : "boolean",
							"converter" : "convert_boolean",
						},
					],
				},
				{
					"name" : "describeContents",
					"params" : [
					],
					"returns" : [
						{
							"name" : "int",
							"converter" : "convert_int",
						},
					],
				},
				{
					"name" : "writeToParcel",
					"params" : [
						{
							"name" : "class android.os.Parcel",
						}
						{
							"name" : "int",
							"converter" : "convert_int",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "readFromParcel",
					"params" : [
						{
							"name" : "class android.os.Parcel",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "createChooser",
					"params" : [
						{
							"name" : "class android.content.Intent",
						}
						{
							"name" : "interface java.lang.CharSequence",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "android.content.Intent",
						},
					],
				},
				{
					"name" : "cloneFilter",
					"params" : [
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "android.content.Intent",
						},
					],
				},
				{
					"name" : "getIntent",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "android.content.Intent",
						},
					],
				},
				{
					"name" : "parseUri",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "int",
							"converter" : "convert_int",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "android.content.Intent",
						},
					],
				},
				{
					"name" : "getIntentOld",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "android.content.Intent",
						},
					],
				},
				{
					"name" : "getAction",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						},
					],
				},
				{
					"name" : "getDataString",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						},
					],
				},
				{
					"name" : "resolveType",
					"params" : [
						{
							"name" : "class android.content.Context",
						}
						{
							"name" : "class android.content.ContentResolver",
						}
					],
					"returns" : [
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						},
					],
				},
				{
					"name" : "resolveTypeIfNeeded",
					"params" : [
						{
							"name" : "class android.content.ContentResolver",
						}
					],
					"returns" : [
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						},
					],
				},
				{
					"name" : "hasCategory",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "boolean",
							"converter" : "convert_boolean",
						},
					],
				},
				{
					"name" : "getCategories",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.util.Set",
						},
					],
				},
				{
					"name" : "setExtrasClassLoader",
					"params" : [
						{
							"name" : "class java.lang.ClassLoader",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "hasExtra",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "boolean",
							"converter" : "convert_boolean",
						},
					],
				},
				{
					"name" : "getBooleanExtra",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "boolean",
							"converter" : "convert_boolean",
						}
					],
					"returns" : [
						{
							"name" : "boolean",
							"converter" : "convert_boolean",
						},
					],
				},
				{
					"name" : "getByteExtra",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "byte",
							"converter" : "convert_byte",
						}
					],
					"returns" : [
						{
							"name" : "byte",
							"converter" : "convert_byte",
						},
					],
				},
				{
					"name" : "getShortExtra",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "short",
							"converter" : "convert_short",
						}
					],
					"returns" : [
						{
							"name" : "short",
							"converter" : "convert_short",
						},
					],
				},
				{
					"name" : "getCharExtra",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "char",
							"converter" : "convert_char",
						}
					],
					"returns" : [
						{
							"name" : "char",
							"converter" : "convert_char",
						},
					],
				},
				{
					"name" : "getIntExtra",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "int",
							"converter" : "convert_int",
						}
					],
					"returns" : [
						{
							"name" : "int",
							"converter" : "convert_int",
						},
					],
				},
				{
					"name" : "getLongExtra",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "long",
							"converter" : "convert_long",
						}
					],
					"returns" : [
						{
							"name" : "long",
							"converter" : "convert_long",
						},
					],
				},
				{
					"name" : "getFloatExtra",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "float",
							"converter" : "convert_float",
						}
					],
					"returns" : [
						{
							"name" : "float",
							"converter" : "convert_float",
						},
					],
				},
				{
					"name" : "getDoubleExtra",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "double",
							"converter" : "convert_double",
						}
					],
					"returns" : [
						{
							"name" : "double",
							"converter" : "convert_double",
						},
					],
				},
				{
					"name" : "getStringExtra",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						},
					],
				},
				{
					"name" : "getCharSequenceExtra",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "java.lang.CharSequence",
						},
					],
				},
				{
					"name" : "getParcelableExtra",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "android.os.Parcelable",
						},
					],
				},
				{
					"name" : "getParcelableArrayExtra",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "[Landroid.os.Parcelable;",
						},
					],
				},
				{
					"name" : "getParcelableArrayListExtra",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "java.util.ArrayList",
						},
					],
				},
				{
					"name" : "getSerializableExtra",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "java.io.Serializable",
						},
					],
				},
				{
					"name" : "getIntegerArrayListExtra",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "java.util.ArrayList",
						},
					],
				},
				{
					"name" : "getStringArrayListExtra",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "java.util.ArrayList",
						},
					],
				},
				{
					"name" : "getCharSequenceArrayListExtra",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "java.util.ArrayList",
						},
					],
				},
				{
					"name" : "getBooleanArrayExtra",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "[Z",
						},
					],
				},
				{
					"name" : "getByteArrayExtra",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "[B",
						},
					],
				},
				{
					"name" : "getShortArrayExtra",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "[S",
						},
					],
				},
				{
					"name" : "getCharArrayExtra",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "[C",
						},
					],
				},
				{
					"name" : "getIntArrayExtra",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "[I",
						},
					],
				},
				{
					"name" : "getLongArrayExtra",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "[J",
						},
					],
				},
				{
					"name" : "getFloatArrayExtra",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "[F",
						},
					],
				},
				{
					"name" : "getDoubleArrayExtra",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "[D",
						},
					],
				},
				{
					"name" : "getStringArrayExtra",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "[Ljava.lang.String;",
						},
					],
				},
				{
					"name" : "getCharSequenceArrayExtra",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "[Ljava.lang.CharSequence;",
						},
					],
				},
				{
					"name" : "getBundleExtra",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "android.os.Bundle",
						},
					],
				},
				{
					"name" : "getExtras",
					"params" : [
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "android.os.Bundle",
						},
					],
				},
				{
					"name" : "getFlags",
					"params" : [
					],
					"returns" : [
						{
							"name" : "int",
							"converter" : "convert_int",
						},
					],
				},
				{
					"name" : "getSourceBounds",
					"params" : [
					],
					"returns" : [
						{
							"name" : "android.graphics.Rect",
						},
					],
				},
				{
					"name" : "resolveActivity",
					"params" : [
						{
							"name" : "class android.content.pm.PackageManager",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "android.content.ComponentName",
						},
					],
				},
				{
					"name" : "resolveActivityInfo",
					"params" : [
						{
							"name" : "class android.content.pm.PackageManager",
						}
						{
							"name" : "int",
							"converter" : "convert_int",
						}
					],
					"returns" : [
						{
							"name" : "android.content.pm.ActivityInfo",
						},
					],
				},
				{
					"name" : "setAction",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "android.content.Intent",
						},
					],
				},
				{
					"name" : "setData",
					"params" : [
						{
							"name" : "class android.net.Uri",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "android.content.Intent",
						},
					],
				},
				{
					"name" : "setType",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "android.content.Intent",
						},
					],
				},
				{
					"name" : "setDataAndType",
					"params" : [
						{
							"name" : "class android.net.Uri",
						}
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "android.content.Intent",
						},
					],
				},
				{
					"name" : "addCategory",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "android.content.Intent",
						},
					],
				},
				{
					"name" : "removeCategory",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "putExtra",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "float",
							"converter" : "convert_float",
						}
						{
							"name" : "double",
							"converter" : "convert_double",
						}
						{
							"name" : "interface java.lang.CharSequence",
						}
						{
							"name" : "interface android.os.Parcelable",
						}
						{
							"name" : "class [Landroid.os.Parcelable;",
						}
						{
							"name" : "interface java.io.Serializable",
						}
						{
							"name" : "class [Z",
						}
						{
							"name" : "class [B",
						}
						{
							"name" : "class [S",
						}
						{
							"name" : "boolean",
							"converter" : "convert_boolean",
						}
						{
							"name" : "class [I",
						}
						{
							"name" : "class [J",
						}
						{
							"name" : "class [F",
						}
						{
							"name" : "class [D",
						}
						{
							"name" : "class [Ljava.lang.String;",
						}
						{
							"name" : "class [Ljava.lang.CharSequence;",
						}
						{
							"name" : "class android.os.Bundle",
						}
						{
							"name" : "class [C",
						}
						{
							"name" : "byte",
							"converter" : "convert_byte",
						}
						{
							"name" : "char",
							"converter" : "convert_char",
						}
						{
							"name" : "short",
							"converter" : "convert_short",
						}
						{
							"name" : "int",
							"converter" : "convert_int",
						}
						{
							"name" : "long",
							"converter" : "convert_long",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "android.content.Intent",
						},
					],
				},
				{
					"name" : "putParcelableArrayListExtra",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "java.util.ArrayList<? extends android.os.Parcelable>",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "android.content.Intent",
						},
					],
				},
				{
					"name" : "putIntegerArrayListExtra",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "java.util.ArrayList<java.lang.Integer>",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "android.content.Intent",
						},
					],
				},
				{
					"name" : "putStringArrayListExtra",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "java.util.ArrayList<java.lang.String>",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "android.content.Intent",
						},
					],
				},
				{
					"name" : "putCharSequenceArrayListExtra",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
						{
							"name" : "java.util.ArrayList<java.lang.CharSequence>",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "android.content.Intent",
						},
					],
				},
				{
					"name" : "putExtras",
					"params" : [
						{
							"name" : "class android.content.Intent",
						}
						{
							"name" : "class android.os.Bundle",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "android.content.Intent",
						},
					],
				},
				{
					"name" : "replaceExtras",
					"params" : [
						{
							"name" : "class android.content.Intent",
						}
						{
							"name" : "class android.os.Bundle",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "android.content.Intent",
						},
					],
				},
				{
					"name" : "removeExtra",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "setFlags",
					"params" : [
						{
							"name" : "int",
							"converter" : "convert_int",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "android.content.Intent",
						},
					],
				},
				{
					"name" : "addFlags",
					"params" : [
						{
							"name" : "int",
							"converter" : "convert_int",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "android.content.Intent",
						},
					],
				},
				{
					"name" : "setPackage",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "android.content.Intent",
						},
					],
				},
				{
					"name" : "setComponent",
					"params" : [
						{
							"name" : "class android.content.ComponentName",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "android.content.Intent",
						},
					],
				},
				{
					"name" : "setClassName",
					"params" : [
						{
							"name" : "class android.content.Context",
						}
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "android.content.Intent",
						},
					],
				},
				{
					"name" : "setClass",
					"params" : [
						{
							"name" : "class android.content.Context",
						}
						{
							"name" : "java.lang.Class<?>",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "android.content.Intent",
						},
					],
				},
				{
					"name" : "setSourceBounds",
					"params" : [
						{
							"name" : "class android.graphics.Rect",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "fillIn",
					"params" : [
						{
							"name" : "class android.content.Intent",
						}
						{
							"name" : "int",
							"converter" : "convert_int",
						}
					],
					"returns" : [
						{
							"name" : "int",
							"converter" : "convert_int",
						},
					],
				},
				{
					"name" : "filterEquals",
					"params" : [
						{
							"name" : "class android.content.Intent",
						}
					],
					"returns" : [
						{
							"name" : "boolean",
							"converter" : "convert_boolean",
						},
					],
				},
				{
					"name" : "filterHashCode",
					"params" : [
					],
					"returns" : [
						{
							"name" : "int",
							"converter" : "convert_int",
						},
					],
				},
				{
					"name" : "toUri",
					"params" : [
						{
							"name" : "int",
							"converter" : "convert_int",
						}
					],
					"returns" : [
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						},
					],
				},
				{
					"name" : "parseIntent",
					"params" : [
						{
							"name" : "class android.content.res.Resources",
						}
						{
							"name" : "interface org.xmlpull.v1.XmlPullParser",
						}
						{
							"name" : "interface android.util.AttributeSet",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "android.content.Intent",
						},
					],
				},
			],			
			"constructors" : [	
				{
					"name" : "android.content.Intent",
					"params" : [
						{
							"name" : class java.lang.String,
						}
						{
							"name" : class android.net.Uri,
						}
						{
							"name" : class android.content.Context,
						}
						{
							"name" : java.lang.Class<?>,
						}
						{
							"name" : class android.content.Intent,
						}
					],
				},
			],
		},
		{
			"name" : "android.os.Parcelable",
			"functions" : [
				{
					"name" : "describeContents",
					"params" : [
					],
					"returns" : [
						{
							"name" : "int",
							"converter" : "convert_int",
						},
					],
				},
				{
					"name" : "writeToParcel",
					"params" : [
						{
							"name" : "class android.os.Parcel",
						}
						{
							"name" : "int",
							"converter" : "convert_int",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
			],			
			"constructors" : [	
			],
		},
		{
			"name" : "android.content.ComponentName",
			"functions" : [
				{
					"name" : "equals",
					"params" : [
						{
							"name" : "class java.lang.Object",
						}
					],
					"returns" : [
						{
							"name" : "boolean",
							"converter" : "convert_boolean",
						},
					],
				},
				{
					"name" : "toString",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						},
					],
				},
				{
					"name" : "hashCode",
					"params" : [
					],
					"returns" : [
						{
							"name" : "int",
							"converter" : "convert_int",
						},
					],
				},
				{
					"name" : "clone",
					"params" : [
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "android.content.ComponentName",
						},
					],
				},
				{
					"name" : "compareTo",
					"params" : [
						{
							"name" : "class android.content.ComponentName",
						}
					],
					"returns" : [
						{
							"name" : "int",
							"converter" : "convert_int",
						},
					],
				},
				{
					"name" : "getClassName",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						},
					],
				},
				{
					"name" : "getPackageName",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						},
					],
				},
				{
					"name" : "describeContents",
					"params" : [
					],
					"returns" : [
						{
							"name" : "int",
							"converter" : "convert_int",
						},
					],
				},
				{
					"name" : "writeToParcel",
					"params" : [
						{
							"name" : "class android.os.Parcel",
						}
						{
							"name" : "int",
							"converter" : "convert_int",
						}
						{
							"name" : "class android.content.ComponentName",
						}
					],
					"returns" : [
						{
							"name" : "void",
							"converter" : "convert_void",
						},
					],
				},
				{
					"name" : "readFromParcel",
					"params" : [
						{
							"name" : "class android.os.Parcel",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "android.content.ComponentName",
						},
					],
				},
				{
					"name" : "getShortClassName",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						},
					],
				},
				{
					"name" : "flattenToString",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						},
					],
				},
				{
					"name" : "flattenToShortString",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						},
					],
				},
				{
					"name" : "unflattenFromString",
					"params" : [
						{
							"name" : "class java.lang.String",
						}
					],
					"returns" : [
						{
							"is_proxied" : True,
							"name" : "android.content.ComponentName",
						},
					],
				},
				{
					"name" : "toShortString",
					"params" : [
					],
					"returns" : [
						{
							"name" : "java.lang.String",
							"converter" : "convert_java_lang_String",
						},
					],
				},
			],			
			"constructors" : [	
				{
					"name" : "android.content.ComponentName",
					"params" : [
						{
							"name" : class java.lang.String,
						}
						{
							"name" : class android.content.Context,
						}
						{
							"name" : java.lang.Class<?>,
						}
						{
							"name" : class android.os.Parcel,
						}
					],
				},
			],
		},
	],
}
