# 	Special Type Markers
#		_object_array		 							Object array type
#		_byte_array									byte array type
#		_short_array									short array type
#		_int_array										int array type
#		_long_array									long array type
#		_float_array									float array type
#		_double_array									double array type
#		_boolean_array									boolean array type
#		_char_array									char array type
#   Special Class Tags
#		_enum 												Tag to indicate class should be enumerated
#		_interface											Tag to indicate class is an interface
#		_abstract											Tag to indicate class is abstract
#		_instance											Tag to indicate class is an instance
#		_singleton											Tag to indicate class instance is a singleton (field or instance)									
#		_static 											Tag to indicate class has only static methods
#		_proxy 												Tag to indicate class will be proxied
#		_no_proxy											Tag to indicate class will not be proxied
#		_callback 											Tag to indicate class is a callback
#		_no_callback										Tag to indicate class will not be made a callback
#	Special Field Tags
#		_static												Tag to indicate field is a static field
#		_instance 											Tag to indicate field is an instance field
#		_singleton 											Tag to indicate field returns a singleton instance
#		_proxy 												Tag to indicate field will be proxied
#		_no_proxy											Tag to indicate field will not be proxied
#	Special Method Tags
#		_static												Tag to indicate method is a static method
#		_instance 											Tag to indicate method is an instance method
#		_singleton											Tag to indicate method returns a singleton instance
#		_proxy 												Tag to indicate method will be proxied
#		_no_proxy											Tag to indicate method will not be proxied
#		_callback											Tag to indicate method will be made a callback
#		_no_callback										Tag to indicate method will not be made a callback

config = {
	'namespace' : 'AndroidCXX',
	'package'	: 'AndroidCXX',
	'converters' : [
		{
			'jni' : {'type': 'void'},
			'java' : {'type': 'void'},
			'name' : 'convert_jni_void',
		},
		{
			'jni' : {'type': 'jboolean'},
			'java' : {'type': 'boolean'},
			'name' : 'convert_jni_boolean',
		},
		{
			'jni' : {'type': 'jbyte'},
			'java' : {'type': 'byte'},
			'name' : 'convert_jni_byte',
		},
		{
			'jni' : {'type': 'jchar'},
			'java' : {'type': 'char'},
			'name' : 'convert_jni_char',
		},
		{
			'jni' : {'type': 'jshort'},
			'java' : {'type': 'short'},
			'name' : 'convert_jni_short',
		},
		{
			'jni' : {'type': 'jint'},
			'java' : {'type': 'int'},
			'name' : 'convert_jni_int',
		},
		{
			'jni' : {'type': 'jlong'},
			'java' : {'type': 'long'},
			'name' : 'convert_jni_long',
		},
		{
			'jni' : {'type': 'jfloat'},
			'java' : {'type': 'float'},
			'name' : 'convert_jni_float',
		},
		{
			'jni' : {'type': 'jdouble'},
			'java' : {'type': 'double'},
			'name' : 'convert_jni_double',
		},
		{
			'jni' : {'type': 'jobject'},
			'java' : {'type': 'java.lang.Object'},
			'name' : 'convert_jni_java_lang_Object',
		},
		{
			'jni' : {'type': 'jstring'},
			'java' : {'type': 'java.lang.String'},
			'name' : 'convert_jni_string',
		},
		{
			'jni' : {'type': 'jobjectArray'},
			'java' : {'type': '_array_array'},
			'name' : 'convert_jni__array_array',
		},
		{
			'jni' : {'type': 'jobjectArray'},
			'java' : {'type': '_object_array'},
			'name' : 'convert_jni__object_array',
		},
		{
			'jni' : {'type': 'jbyteArray'},
			'java' : {'type': '_byte_array'},
			'name' : 'convert_jni__byte_array',
		},
		{
			'jni' : {'type': 'jshortArray'},
			'java' : {'type': '_short_array'},
			'name' : 'convert_jni__short_array',
		},
		{
			'jni' : {'type': 'jintArray'},
			'java' : {'type': '_int_array'},
			'name' : 'convert_jni__int_array',
		},
		{
			'jni' : {'type': 'jlongArray'},
			'java' : {'type': '_long_array'},
			'name' : 'convert_jni__long_array',
		},
		{
			'jni' : {'type': 'jfloatArray'},
			'java' : {'type': '_float_array'},
			'name' : 'convert_jni__float_array',
		},
		{
			'jni' : {'type': 'jdoubleArray'},
			'java' : {'type': '_double_array'},
			'name' : 'convert_jni__double_array',
		},
		{
			'jni' : {'type': 'jbooleanArray'},
			'java' : {'type': '_boolean_array'},
			'name' : 'convert_jni__boolean_array',
		},
		{
			'jni' : {'type': 'jcharArray'},
			'java' : {'type': '_char_array'},
			'name' : 'convert_jni__char_array',
		},
		{
			'cxx' : {'type': 'void'},
			'java' : {'type': 'void'},
			'name' : 'convert_void',
		},
		{
			'cxx' : {'type': 'bool'},
			'java' : {'type': 'boolean'},
			'name' : 'convert_boolean',
		},
		{
			'cxx' : {'type': 'byte'},
			'java' : {'type': 'byte'},
			'name' : 'convert_byte',
		},
		{
			'cxx' : {'type': 'char'},
			'java' : {'type': 'char'},
			'name' : 'convert_char',
		},
		{
			'cxx' : {'type': 'short'},
			'java' : {'type': 'short'},
			'name' : 'convert_short',
		},
		{
			'cxx' : {'type': 'int'},
			'java' : {'type': 'int'},
			'name' : 'convert_int',
		},
		{
			'cxx' : {'type': 'long'},
			'java' : {'type': 'long'},
			'name' : 'convert_long',
		},
		{
			'cxx' : {'type': 'float'},
			'java' : {'type': 'float'},
			'name' : 'convert_float',
		},
		{
			'cxx' : {'type': 'double'},
			'java' : {'type': 'double'},
			'name' : 'convert_double',
		},
		{
			'cxx' : {'type': 'std::vector<char>'},
			'java' : {'type': '_char_array'},
			'name' : 'convert__char_array',
		},
		{
			'cxx' : {'type': 'std::vector<bool>'},
			'java' : {'type': '_boolean_array'},
			'name' : 'convert__boolean_array',
		},
		{
			'cxx' : {'type': 'std::vector<byte>'},
			'java' : {'type': '_byte_array'},
			'name' : 'convert__byte_array',
		},
		{
			'cxx' : {'type': 'std::vector<short>'},
			'java' : {'type': '_short_array'},
			'name' : 'convert__short_array',
		},
		{
			'cxx' : {'type': 'std::vector<int>'},
			'java' : {'type': '_int_array'},
			'name' : 'convert__int_array',
		},
		{
			'cxx' : {'type': 'std::vector<long>'},
			'java' : {'type': '_long_array'},
			'name' : 'convert__long_array',
		},
		{
			'cxx' : {'type': 'std::vector<float>'},
			'java' : {'type': '_float_array'},
			'name' : 'convert__float_array',
		},
		{
			'cxx' : {'type': 'std::vector<double>'},
			'java' : {'type': '_double_array'},
			'name' : 'convert__double_array',
		},
	],
	'packages' : [
		{
			'name' : 'android',
		},
		{
			'name' : 'android.accessibilityservice',
		},
		{
			'name' : 'android.accounts',
		},
		{
			'name' : 'android.animation',
		},
		{
			'name' : 'android.app',
		},
		{
			'name' : 'android.app.admin',
		},
		{
			'name' : 'android.app.backup',
		},
		{
			'name' : 'android.appwidget',
		},
		{
			'name' : 'android.bluetooth',
		},
		{
			'name' : 'android.content',
		},
		{
			'name' : 'android.content.pm',
		},
		{
			'name' : 'android.content.res',
		},
		{
			'name' : 'android.database',
		},
		{
			'name' : 'android.database.sqlite',
		},
		{
			'name' : 'android.drm',
		},
		{
			'name' : 'android.gesture',
		},
		{
			'name' : 'android.graphics',
		},
		{
			'name' : 'android.graphics.drawable',
		},
		{
			'name' : 'android.graphics.drawable.shapes',
		},
		{
			'name' : 'android.hardware',
		},
		{
			'name' : 'android.hardware.display',
		},
		{
			'name' : 'android.hardware.input',
		},
		{
			'name' : 'android.hardware.usb',
		},
		{
			'name' : 'android.inputmethodservice',
		},
		{
			'name' : 'android.location',
		},
		{
			'name' : 'android.media',
		},
		{
			'name' : 'android.media.audiofx',
		},
		{
			'name' : 'android.media.effect',
		},
		{
			'name' : 'android.mtp',
		},
		{
			'name' : 'android.net',
		},
		{
			'name' : 'android.net.http',
		},
		{
			'name' : 'android.net.nsd',
		},
		{
			'name' : 'android.net.rtp',
		},
		{
			'name' : 'android.net.sip',
		},
		{
			'name' : 'android.net.wifi',
		},
		{
			'name' : 'android.net.wifi.p2p',
		},
		{
			'name' : 'android.net.wifi.p2p.nsd',
		},
		{
			'name' : 'android.nfc',
		},
		{
			'name' : 'android.nfc.tech',
		},
		{
			'name' : 'android.opengl',
		},
		{
			'name' : 'android.os',
		},
		{
			'name' : 'android.os.storage',
		},
		{
			'name' : 'android.preference',
		},
		{
			'name' : 'android.provider',
		},
		{
			'name' : 'android.renderscript',
		},
		{
			'name' : 'android.sax',
		},
		{
			'name' : 'android.security',
		},
		{
			'name' : 'android.service.dreams',
		},
		{
			'name' : 'android.service.textservice',
		},
		{
			'name' : 'android.service.wallpaper',
		},
		{
			'name' : 'android.speech',
		},
		{
			'name' : 'android.speech.tts',
		},
		{
			'name' : 'android.support.v13.app',
		},
		{
			'name' : 'android.support.v4.accessibilityservice',
		},
		{
			'name' : 'android.support.v4.app',
		},
		{
			'name' : 'android.support.v4.content',
		},
		{
			'name' : 'android.support.v4.content.pm',
		},
		{
			'name' : 'android.support.v4.database',
		},
		{
			'name' : 'android.support.v4.net',
		},
		{
			'name' : 'android.support.v4.os',
		},
		{
			'name' : 'android.support.v4.util',
		},
		{
			'name' : 'android.support.v4.view',
		},
		{
			'name' : 'android.support.v4.view.accessibility',
		},
		{
			'name' : 'android.support.v4.widget',
		},
		{
			'name' : 'android.telephony',
		},
		{
			'name' : 'android.telephony.cdma',
		},
		{
			'name' : 'android.telephony.gsm',
		},
		{
			'name' : 'android.test',
		},
		{
			'name' : 'android.test.mock',
		},
		{
			'name' : 'android.test.suitebuilder',
		},
		{
			'name' : 'android.text',
		},
		{
			'name' : 'android.text.format',
		},
		{
			'name' : 'android.text.method',
		},
		{
			'name' : 'android.text.style',
		},
		{
			'name' : 'android.text.util',
		},
		{
			'name' : 'android.util',
		},
		{
			'name' : 'android.view',
		},
		{
			'name' : 'android.view.accessibility',
		},
		{
			'name' : 'android.view.animation',
		},
		{
			'name' : 'android.view.inputmethod',
		},
		{
			'name' : 'android.view.textservice',
		},
		{
			'name' : 'android.webkit',
		},
		{
			'name' : 'android.widget',
		},
		{
			'name' : 'dalvik.bytecode',
		},
		{
			'name' : 'dalvik.system',
		},
		{
			'name' : 'java.awt.font',
		},
		{
			'name' : 'java.beans',
		},
		{
			'name' : 'java.io',
		},
		{
			'name' : 'java.lang',
		},
		{
			'name' : 'java.lang.annotation',
		},
		{
			'name' : 'java.lang.ref',
		},
		{
			'name' : 'java.lang.reflect',
		},
		{
			'name' : 'java.math',
		},
		{
			'name' : 'java.net',
		},
		{
			'name' : 'java.nio',
		},
		{
			'name' : 'java.nio.channels',
		},
		{
			'name' : 'java.nio.channels.spi',
		},
		{
			'name' : 'java.nio.charset',
		},
		{
			'name' : 'java.nio.charset.spi',
		},
		{
			'name' : 'java.security',
		},
		{
			'name' : 'java.security.acl',
		},
		{
			'name' : 'java.security.cert',
		},
		{
			'name' : 'java.security.interfaces',
		},
		{
			'name' : 'java.security.spec',
		},
		{
			'name' : 'java.sql',
		},
		{
			'name' : 'java.text',
		},
		{
			'name' : 'java.util',
		},
		{
			'name' : 'java.util.concurrent',
		},
		{
			'name' : 'java.util.concurrent.atomic',
		},
		{
			'name' : 'java.util.concurrent.locks',
		},
		{
			'name' : 'java.util.jar',
		},
		{
			'name' : 'java.util.logging',
		},
		{
			'name' : 'java.util.prefs',
		},
		{
			'name' : 'java.util.regex',
		},
		{
			'name' : 'java.util.zip',
		},
		{
			'name' : 'javax.crypto',
		},
		{
			'name' : 'javax.crypto.interfaces',
		},
		{
			'name' : 'javax.crypto.spec',
		},
		{
			'name' : 'javax.microedition.khronos.egl',
		},
		{
			'name' : 'javax.microedition.khronos.opengles',
		},
		{
			'name' : 'javax.net',
		},
		{
			'name' : 'javax.net.ssl',
		},
		{
			'name' : 'javax.security.auth',
		},
		{
			'name' : 'javax.security.auth.callback',
		},
		{
			'name' : 'javax.security.auth.login',
		},
		{
			'name' : 'javax.security.auth.x500',
		},
		{
			'name' : 'javax.security.cert',
		},
		{
			'name' : 'javax.sql',
		},
		{
			'name' : 'javax.xml',
		},
		{
			'name' : 'javax.xml.datatype',
		},
		{
			'name' : 'javax.xml.namespace',
		},
		{
			'name' : 'javax.xml.parsers',
		},
		{
			'name' : 'javax.xml.transform',
		},
		{
			'name' : 'javax.xml.transform.dom',
		},
		{
			'name' : 'javax.xml.transform.sax',
		},
		{
			'name' : 'javax.xml.transform.stream',
		},
		{
			'name' : 'javax.xml.validation',
		},
		{
			'name' : 'javax.xml.xpath',
		},
		{
			'name' : 'junit.framework',
		},
		{
			'name' : 'junit.runner',
		},
		{
			'name' : 'org.apache.http',
		},
		{
			'name' : 'org.apache.http.auth',
		},
		{
			'name' : 'org.apache.http.auth.params',
		},
		{
			'name' : 'org.apache.http.client',
		},
		{
			'name' : 'org.apache.http.client.entity',
		},
		{
			'name' : 'org.apache.http.client.methods',
		},
		{
			'name' : 'org.apache.http.client.params',
		},
		{
			'name' : 'org.apache.http.client.protocol',
		},
		{
			'name' : 'org.apache.http.client.utils',
		},
		{
			'name' : 'org.apache.http.conn',
		},
		{
			'name' : 'org.apache.http.conn.params',
		},
		{
			'name' : 'org.apache.http.conn.routing',
		},
		{
			'name' : 'org.apache.http.conn.scheme',
		},
		{
			'name' : 'org.apache.http.conn.ssl',
		},
		{
			'name' : 'org.apache.http.conn.util',
		},
		{
			'name' : 'org.apache.http.cookie',
		},
		{
			'name' : 'org.apache.http.cookie.params',
		},
		{
			'name' : 'org.apache.http.entity',
		},
		{
			'name' : 'org.apache.http.impl',
		},
		{
			'name' : 'org.apache.http.impl.auth',
		},
		{
			'name' : 'org.apache.http.impl.client',
		},
		{
			'name' : 'org.apache.http.impl.conn',
		},
		{
			'name' : 'org.apache.http.impl.conn.tsccm',
		},
		{
			'name' : 'org.apache.http.impl.cookie',
		},
		{
			'name' : 'org.apache.http.impl.entity',
		},
		{
			'name' : 'org.apache.http.impl.io',
		},
		{
			'name' : 'org.apache.http.io',
		},
		{
			'name' : 'org.apache.http.message',
		},
		{
			'name' : 'org.apache.http.params',
		},
		{
			'name' : 'org.apache.http.protocol',
		},
		{
			'name' : 'org.apache.http.util',
		},
		{
			'name' : 'org.json',
		},
		{
			'name' : 'org.w3c.dom',
		},
		{
			'name' : 'org.w3c.dom.ls',
		},
		{
			'name' : 'org.xml.sax',
		},
		{
			'name' : 'org.xml.sax.ext',
		},
		{
			'name' : 'org.xml.sax.helpers',
		},
		{
			'name' : 'org.xmlpull.v1',
		},
		{
			'name' : 'org.xmlpull.v1.sax2',
		},
	],
	'classes' : [
		{
			'name' : 'java.lang.Object',
			'tags' : ['_no_proxy_functions', '_no_proxy_constructors', '_no_proxy_fields', '_no_gen_2d_array_converters', '_gen_array_converters', '_gen_converters'],
		},
		{
			'name' : 'java.lang.Void',
			'tags' : ['_no_proxy_functions', '_no_proxy_constructors', '_no_proxy_fields', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_no_gen_converters'],
		},
		{
			'name' : 'java.lang.CharSequence',
			'tags' : ['_no_proxy_functions', '_no_proxy_constructors', '_no_proxy_fields', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_gen_converters'],
		},
		{
			'name' : 'java.lang.Cloneable',
			'tags' : ['_no_proxy_functions', '_no_proxy_constructors', '_no_proxy_fields', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_no_gen_converters'],
		},
		{
			'name' : 'java.lang.Exception',
			'tags' : ['_proxy','_no_proxy_functions', '_no_proxy_constructors', '_no_proxy_fields', '_no_gen_2d_array_converters', '_no_gen_array_converters', ],
		},
		{
			'name' : 'org.json.JSONObject',
			'tags' : ['_no_proxy_functions', '_no_proxy_constructors', '_no_proxy_fields', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_no_gen_converters'],		
		},
		{
			'name' : 'android.app.Activity',
			'tags' : ['_no_proxy_functions', '_no_proxy_constructors', '_no_proxy_fields', '_no_gen_2d_array_converters', '_no_gen_array_converters', ],
		},
		{
			'name' : 'android.content.Context',
			'tags' : ['_no_proxy_functions', '_no_proxy_constructors', '_no_proxy_fields', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_gen_converters'],
		},
		{
			'name' : 'android.content.Intent',
			'tags' : ['_no_proxy_functions', '_no_proxy_constructors', '_no_proxy_fields', '_no_gen_2d_array_converters', '_no_gen_array_converters', ],		
		},
		{
			'name' : 'java.lang.String',
			'tags' : ['_instance', '_no_callback', '_proxy', '_proxy_functions', '_proxy_constructors', '_no_proxy_fields', '_no_gen_2d_array_converters', '_no_gen_array_converters',],
			'extends' : [{'name': 'java.lang.Object'}],
			'implements' : [{'name': 'java.io.Serializable'}, {'name': 'java.lang.CharSequence'}, {'name': 'java.lang.Comparable'}],
			'functions' : [
				{
					'name' : 'charAt',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'char',
								'converter' : 'convert_char',
						},
					],
				},
				{
					'name' : 'codePointAt',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'codePointBefore',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'codePointCount',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'compareToIgnoreCase',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'compareTo',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'concat',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'contains',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'contentEquals',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'contentEquals',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.StringBuffer',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'copyValueOf',
					'tags' : ['_no_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : '_char_array',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'copyValueOf',
					'tags' : ['_no_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : '_char_array',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'endsWith',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'equalsIgnoreCase',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'equals',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'format',
					'tags' : ['_no_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'format',
					'tags' : ['_no_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'java.util.Locale',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getBytes',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : '_byte_array',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'getBytes',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : '_byte_array',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array',
						},
					],
				},
				{
					'name' : 'getBytes',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.nio.charset.Charset',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : '_byte_array',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array',
						},
					],
				},
				{
					'name' : 'getBytes',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_byte_array',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array',
						},
					],
				},
				{
					'name' : 'getChars',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : '_char_array',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'hashCode',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'indexOf',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'indexOf',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'indexOf',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'indexOf',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'intern',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'isEmpty',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'lastIndexOf',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'lastIndexOf',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'lastIndexOf',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'lastIndexOf',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'length',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'matches',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'offsetByCodePoints',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'regionMatches',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'regionMatches',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'replaceAll',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'replaceFirst',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'replace',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'char',
								'converter' : 'convert_char',
						},
						{
								'type' : 'char',
								'converter' : 'convert_char',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'replace',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'split',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
					],
				},
				{
					'name' : 'split',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
					],
				},
				{
					'name' : 'startsWith',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'startsWith',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'subSequence',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'substring',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'substring',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'toCharArray',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_char_array',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array',
						},
					],
				},
				{
					'name' : 'toLowerCase',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.util.Locale',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'toLowerCase',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'toString',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'toUpperCase',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.util.Locale',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'toUpperCase',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'trim',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'valueOf',
					'tags' : ['_no_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : '_char_array',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'valueOf',
					'tags' : ['_no_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : '_char_array',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'valueOf',
					'tags' : ['_no_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'valueOf',
					'tags' : ['_no_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'char',
								'converter' : 'convert_char',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'valueOf',
					'tags' : ['_no_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'double',
								'converter' : 'convert_double',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'valueOf',
					'tags' : ['_no_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'float',
								'converter' : 'convert_float',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'valueOf',
					'tags' : ['_no_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'valueOf',
					'tags' : ['_no_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'valueOf',
					'tags' : ['_no_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
			],		
			'constructors' : [	
				{
					'name' : 'java.lang.String',
					'tags' : ['_no_proxy'],
					'params' : [
					],
				},
				{
					'name' : 'java.lang.String',
					'tags' : ['_no_proxy'],
					'params' : [
						{
								'type' : '_byte_array',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array',
						},
					],
				},
				{
					'name' : 'java.lang.String',
					'tags' : ['_no_proxy'],
					'params' : [
						{
								'type' : '_byte_array',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'java.lang.String',
					'tags' : ['_no_proxy'],
					'params' : [
						{
								'type' : '_byte_array',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'java.lang.String',
					'tags' : ['_no_proxy'],
					'params' : [
						{
								'type' : '_byte_array',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'java.lang.String',
					'tags' : ['_no_proxy'],
					'params' : [
						{
								'type' : '_byte_array',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'java.lang.String',
					'tags' : ['_no_proxy'],
					'params' : [
						{
								'type' : '_byte_array',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'java.nio.charset.Charset',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'java.lang.String',
					'tags' : ['_no_proxy'],
					'params' : [
						{
								'type' : '_byte_array',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'java.lang.String',
					'tags' : ['_no_proxy'],
					'params' : [
						{
								'type' : '_byte_array',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array',
						},
						{
								'type' : 'java.nio.charset.Charset',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'java.lang.String',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : '_char_array',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array',
						},
					],
				},
				{
					'name' : 'java.lang.String',
					'tags' : ['_no_proxy'],
					'params' : [
						{
								'type' : '_char_array',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'java.lang.String',
					'tags' : ['_no_proxy'],
					'params' : [
						{
								'type' : '_int_array',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'java.lang.String',
					'tags' : ['_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'java.lang.String',
					'tags' : ['_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.StringBuffer',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'java.lang.String',
					'tags' : ['_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.StringBuilder',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},		
		{
			'name' : 'java.util.List',
			'tags' : ['_interface', '_proxy', '_proxy_functions', '_no_proxy_constructors', '_no_proxy_fields', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_gen_converters'],
			'extends' : [{'name': 'java.lang.Object'}],
			'implements' : [{'name': 'java.util.Collection'}],
			'functions' : [
				{
					'name' : 'addAll',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'java.util.Collection',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'addAll',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.util.Collection',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'add',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'add',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'clear',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'containsAll',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.util.Collection',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'contains',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'equals',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'get',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'hashCode',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'indexOf',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'isEmpty',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'iterator',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.Iterator',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'lastIndexOf',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'listIterator',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'java.util.ListIterator',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'listIterator',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.ListIterator',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'removeAll',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.util.Collection',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'remove',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'remove',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'retainAll',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.util.Collection',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'set',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'size',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'subList',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'toArray',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
					],
					'returns' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
					],
				},
				{
					'name' : 'toArray',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
					],
				},
			],	
		},
		{
			'name' : 'java.util.Collection',
			'tags' : ['_interface', '_proxy', '_proxy_functions', '_no_proxy_constructors', '_no_proxy_fields', '_no_gen_2d_array_converters', '_no_gen_array_converters', ],
			'extends' : [{'name': 'java.lang.Object'}],
			'implements' : [{'name': 'java.lang.Iterable'}],
			'functions' : [
				{
					'name' : 'addAll',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.util.Collection',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'add',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'clear',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'containsAll',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.util.Collection',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'contains',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'equals',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'hashCode',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'isEmpty',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'iterator',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.Iterator',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'removeAll',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.util.Collection',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'remove',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'retainAll',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.util.Collection',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'size',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'toArray',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
					],
					'returns' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
					],
				},
				{
					'name' : 'toArray',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
					],
				},
			],	
		},
		{
			'name' : 'java.util.Iterator',
			'tags' : ['_interface', '_proxy', '_proxy_functions', '_no_proxy_constructors', '_no_proxy_fields', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_gen_converters'],
			'extends' : [{'name': 'java.lang.Object'}],
			'functions' : [
				{
					'name' : 'hasNext',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'next',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'remove',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
			],	
		},
		{
			'name' : 'java.util.ArrayList',
			'tags' : ['_instance', '_proxy', '_no_proxy_functions', '_no_proxy_fields', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_no_gen_converters'],
			'constructors' : [	
				{
					'name' : 'java.util.ArrayList',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
				{
					'name' : 'java.util.ArrayList',
					'tags' : ['_no_proxy'],
					'params' : [
						{
								'type' : 'int',
						},
					],
				},
				{
					'name' : 'java.util.ArrayList',
					'tags' : ['_no_proxy'],
					'params' : [
						{
								'type' : 'java.util.Collection',
								'children' : [{'type': 'java.lang.Object'}],
						},
					],
				},
			],			
		},
		{
			'name' : 'java.util.Arrays',
			'tags' : ['_proxy', '_proxy_functions', '_no_proxy_constructors', '_no_proxy_fields', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_no_gen_converters'],
			'extends' : [{'name': 'java.lang.Object'}],
			'functions' : [
				{
					'name' : 'asList',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
					],
					'returns' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'binarySearch',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_byte_array',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array',
						},
						{
								'type' : 'byte',
								'converter' : 'convert_byte',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'binarySearch',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_byte_array',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'byte',
								'converter' : 'convert_byte',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'binarySearch',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_char_array',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array',
						},
						{
								'type' : 'char',
								'converter' : 'convert_char',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'binarySearch',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_char_array',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'char',
								'converter' : 'convert_char',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'binarySearch',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_double_array',
								'children' : [{'type': 'double', 'converter': 'convert_double'}],
								'converter' : 'convert__double_array',
						},
						{
								'type' : 'double',
								'converter' : 'convert_double',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'binarySearch',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_double_array',
								'children' : [{'type': 'double', 'converter': 'convert_double'}],
								'converter' : 'convert__double_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'double',
								'converter' : 'convert_double',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'binarySearch',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_float_array',
								'children' : [{'type': 'float', 'converter': 'convert_float'}],
								'converter' : 'convert__float_array',
						},
						{
								'type' : 'float',
								'converter' : 'convert_float',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'binarySearch',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_float_array',
								'children' : [{'type': 'float', 'converter': 'convert_float'}],
								'converter' : 'convert__float_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'float',
								'converter' : 'convert_float',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'binarySearch',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_int_array',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'binarySearch',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_int_array',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'binarySearch',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_long_array',
								'children' : [{'type': 'long', 'converter': 'convert_long'}],
								'converter' : 'convert__long_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'binarySearch',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_long_array',
								'children' : [{'type': 'long', 'converter': 'convert_long'}],
								'converter' : 'convert__long_array',
						},
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'binarySearch',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.util.Comparator',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'binarySearch',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'binarySearch',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.util.Comparator',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'binarySearch',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'binarySearch',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_short_array',
								'children' : [{'type': 'short', 'converter': 'convert_short'}],
								'converter' : 'convert__short_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'short',
								'converter' : 'convert_short',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'binarySearch',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_short_array',
								'children' : [{'type': 'short', 'converter': 'convert_short'}],
								'converter' : 'convert__short_array',
						},
						{
								'type' : 'short',
								'converter' : 'convert_short',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'copyOf',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_boolean_array',
								'children' : [{'type': 'boolean', 'converter': 'convert_boolean'}],
								'converter' : 'convert__boolean_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : '_boolean_array',
								'children' : [{'type': 'boolean', 'converter': 'convert_boolean'}],
								'converter' : 'convert__boolean_array',
						},
					],
				},
				{
					'name' : 'copyOf',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_byte_array',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : '_byte_array',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array',
						},
					],
				},
				{
					'name' : 'copyOf',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_char_array',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : '_char_array',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array',
						},
					],
				},
				{
					'name' : 'copyOf',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_double_array',
								'children' : [{'type': 'double', 'converter': 'convert_double'}],
								'converter' : 'convert__double_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : '_double_array',
								'children' : [{'type': 'double', 'converter': 'convert_double'}],
								'converter' : 'convert__double_array',
						},
					],
				},
				{
					'name' : 'copyOf',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_float_array',
								'children' : [{'type': 'float', 'converter': 'convert_float'}],
								'converter' : 'convert__float_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : '_float_array',
								'children' : [{'type': 'float', 'converter': 'convert_float'}],
								'converter' : 'convert__float_array',
						},
					],
				},
				{
					'name' : 'copyOf',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_int_array',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : '_int_array',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array',
						},
					],
				},
				{
					'name' : 'copyOf',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_long_array',
								'children' : [{'type': 'long', 'converter': 'convert_long'}],
								'converter' : 'convert__long_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : '_long_array',
								'children' : [{'type': 'long', 'converter': 'convert_long'}],
								'converter' : 'convert__long_array',
						},
					],
				},
				{
					'name' : 'copyOf',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'java.lang.Class',
								'children' : [{'type': '_object_array', 'converter': 'convert__object_array'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
					],
				},
				{
					'name' : 'copyOf',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
					],
				},
				{
					'name' : 'copyOf',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_short_array',
								'children' : [{'type': 'short', 'converter': 'convert_short'}],
								'converter' : 'convert__short_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : '_short_array',
								'children' : [{'type': 'short', 'converter': 'convert_short'}],
								'converter' : 'convert__short_array',
						},
					],
				},
				{
					'name' : 'copyOfRange',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_boolean_array',
								'children' : [{'type': 'boolean', 'converter': 'convert_boolean'}],
								'converter' : 'convert__boolean_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : '_boolean_array',
								'children' : [{'type': 'boolean', 'converter': 'convert_boolean'}],
								'converter' : 'convert__boolean_array',
						},
					],
				},
				{
					'name' : 'copyOfRange',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_byte_array',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : '_byte_array',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array',
						},
					],
				},
				{
					'name' : 'copyOfRange',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_char_array',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : '_char_array',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array',
						},
					],
				},
				{
					'name' : 'copyOfRange',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_double_array',
								'children' : [{'type': 'double', 'converter': 'convert_double'}],
								'converter' : 'convert__double_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : '_double_array',
								'children' : [{'type': 'double', 'converter': 'convert_double'}],
								'converter' : 'convert__double_array',
						},
					],
				},
				{
					'name' : 'copyOfRange',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_float_array',
								'children' : [{'type': 'float', 'converter': 'convert_float'}],
								'converter' : 'convert__float_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : '_float_array',
								'children' : [{'type': 'float', 'converter': 'convert_float'}],
								'converter' : 'convert__float_array',
						},
					],
				},
				{
					'name' : 'copyOfRange',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_int_array',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : '_int_array',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array',
						},
					],
				},
				{
					'name' : 'copyOfRange',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_long_array',
								'children' : [{'type': 'long', 'converter': 'convert_long'}],
								'converter' : 'convert__long_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : '_long_array',
								'children' : [{'type': 'long', 'converter': 'convert_long'}],
								'converter' : 'convert__long_array',
						},
					],
				},
				{
					'name' : 'copyOfRange',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'java.lang.Class',
								'children' : [{'type': '_object_array', 'converter': 'convert__object_array'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
					],
				},
				{
					'name' : 'copyOfRange',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
					],
				},
				{
					'name' : 'copyOfRange',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_short_array',
								'children' : [{'type': 'short', 'converter': 'convert_short'}],
								'converter' : 'convert__short_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : '_short_array',
								'children' : [{'type': 'short', 'converter': 'convert_short'}],
								'converter' : 'convert__short_array',
						},
					],
				},
				{
					'name' : 'deepEquals',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'deepHashCode',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'deepToString',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'equals',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_boolean_array',
								'children' : [{'type': 'boolean', 'converter': 'convert_boolean'}],
								'converter' : 'convert__boolean_array',
						},
						{
								'type' : '_boolean_array',
								'children' : [{'type': 'boolean', 'converter': 'convert_boolean'}],
								'converter' : 'convert__boolean_array',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'equals',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_byte_array',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array',
						},
						{
								'type' : '_byte_array',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'equals',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_char_array',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array',
						},
						{
								'type' : '_char_array',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'equals',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_double_array',
								'children' : [{'type': 'double', 'converter': 'convert_double'}],
								'converter' : 'convert__double_array',
						},
						{
								'type' : '_double_array',
								'children' : [{'type': 'double', 'converter': 'convert_double'}],
								'converter' : 'convert__double_array',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'equals',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_float_array',
								'children' : [{'type': 'float', 'converter': 'convert_float'}],
								'converter' : 'convert__float_array',
						},
						{
								'type' : '_float_array',
								'children' : [{'type': 'float', 'converter': 'convert_float'}],
								'converter' : 'convert__float_array',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'equals',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_int_array',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array',
						},
						{
								'type' : '_int_array',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'equals',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_long_array',
								'children' : [{'type': 'long', 'converter': 'convert_long'}],
								'converter' : 'convert__long_array',
						},
						{
								'type' : '_long_array',
								'children' : [{'type': 'long', 'converter': 'convert_long'}],
								'converter' : 'convert__long_array',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'equals',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'equals',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_short_array',
								'children' : [{'type': 'short', 'converter': 'convert_short'}],
								'converter' : 'convert__short_array',
						},
						{
								'type' : '_short_array',
								'children' : [{'type': 'short', 'converter': 'convert_short'}],
								'converter' : 'convert__short_array',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'fill',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_boolean_array',
								'children' : [{'type': 'boolean', 'converter': 'convert_boolean'}],
								'converter' : 'convert__boolean_array',
						},
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'fill',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_boolean_array',
								'children' : [{'type': 'boolean', 'converter': 'convert_boolean'}],
								'converter' : 'convert__boolean_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'fill',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_byte_array',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array',
						},
						{
								'type' : 'byte',
								'converter' : 'convert_byte',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'fill',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_byte_array',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'byte',
								'converter' : 'convert_byte',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'fill',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_char_array',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array',
						},
						{
								'type' : 'char',
								'converter' : 'convert_char',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'fill',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_char_array',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'char',
								'converter' : 'convert_char',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'fill',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_double_array',
								'children' : [{'type': 'double', 'converter': 'convert_double'}],
								'converter' : 'convert__double_array',
						},
						{
								'type' : 'double',
								'converter' : 'convert_double',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'fill',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_double_array',
								'children' : [{'type': 'double', 'converter': 'convert_double'}],
								'converter' : 'convert__double_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'double',
								'converter' : 'convert_double',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'fill',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_float_array',
								'children' : [{'type': 'float', 'converter': 'convert_float'}],
								'converter' : 'convert__float_array',
						},
						{
								'type' : 'float',
								'converter' : 'convert_float',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'fill',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_float_array',
								'children' : [{'type': 'float', 'converter': 'convert_float'}],
								'converter' : 'convert__float_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'float',
								'converter' : 'convert_float',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'fill',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_int_array',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'fill',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_int_array',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'fill',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_long_array',
								'children' : [{'type': 'long', 'converter': 'convert_long'}],
								'converter' : 'convert__long_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'fill',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_long_array',
								'children' : [{'type': 'long', 'converter': 'convert_long'}],
								'converter' : 'convert__long_array',
						},
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'fill',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'fill',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'fill',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_short_array',
								'children' : [{'type': 'short', 'converter': 'convert_short'}],
								'converter' : 'convert__short_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'short',
								'converter' : 'convert_short',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'fill',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_short_array',
								'children' : [{'type': 'short', 'converter': 'convert_short'}],
								'converter' : 'convert__short_array',
						},
						{
								'type' : 'short',
								'converter' : 'convert_short',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'hashCode',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_boolean_array',
								'children' : [{'type': 'boolean', 'converter': 'convert_boolean'}],
								'converter' : 'convert__boolean_array',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'hashCode',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_byte_array',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'hashCode',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_char_array',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'hashCode',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_double_array',
								'children' : [{'type': 'double', 'converter': 'convert_double'}],
								'converter' : 'convert__double_array',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'hashCode',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_float_array',
								'children' : [{'type': 'float', 'converter': 'convert_float'}],
								'converter' : 'convert__float_array',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'hashCode',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_int_array',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'hashCode',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_long_array',
								'children' : [{'type': 'long', 'converter': 'convert_long'}],
								'converter' : 'convert__long_array',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'hashCode',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'hashCode',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_short_array',
								'children' : [{'type': 'short', 'converter': 'convert_short'}],
								'converter' : 'convert__short_array',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'sort',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_byte_array',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'sort',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_byte_array',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'sort',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_char_array',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'sort',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_char_array',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'sort',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_double_array',
								'children' : [{'type': 'double', 'converter': 'convert_double'}],
								'converter' : 'convert__double_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'sort',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_double_array',
								'children' : [{'type': 'double', 'converter': 'convert_double'}],
								'converter' : 'convert__double_array',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'sort',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_float_array',
								'children' : [{'type': 'float', 'converter': 'convert_float'}],
								'converter' : 'convert__float_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'sort',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_float_array',
								'children' : [{'type': 'float', 'converter': 'convert_float'}],
								'converter' : 'convert__float_array',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'sort',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_int_array',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'sort',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_int_array',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'sort',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_long_array',
								'children' : [{'type': 'long', 'converter': 'convert_long'}],
								'converter' : 'convert__long_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'sort',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_long_array',
								'children' : [{'type': 'long', 'converter': 'convert_long'}],
								'converter' : 'convert__long_array',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'sort',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'java.util.Comparator',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'sort',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'sort',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
						{
								'type' : 'java.util.Comparator',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'sort',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'sort',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_short_array',
								'children' : [{'type': 'short', 'converter': 'convert_short'}],
								'converter' : 'convert__short_array',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'sort',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_short_array',
								'children' : [{'type': 'short', 'converter': 'convert_short'}],
								'converter' : 'convert__short_array',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'toString',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_boolean_array',
								'children' : [{'type': 'boolean', 'converter': 'convert_boolean'}],
								'converter' : 'convert__boolean_array',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'toString',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_byte_array',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'toString',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_char_array',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'toString',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_double_array',
								'children' : [{'type': 'double', 'converter': 'convert_double'}],
								'converter' : 'convert__double_array',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'toString',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_float_array',
								'children' : [{'type': 'float', 'converter': 'convert_float'}],
								'converter' : 'convert__float_array',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'toString',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_int_array',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'toString',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_long_array',
								'children' : [{'type': 'long', 'converter': 'convert_long'}],
								'converter' : 'convert__long_array',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'toString',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'toString',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : '_short_array',
								'children' : [{'type': 'short', 'converter': 'convert_short'}],
								'converter' : 'convert__short_array',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
		},
		{
			'name' : 'android.os.AsyncTask',
			'tags' : ['_abstract', '_proxy', '_proxy_functions', '_no_proxy_constructors', '_no_proxy_fields', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_gen_converters'],
			'extends' : [{'name': 'java.lang.Object'}],
			'functions' : [
				{
					'name' : 'cancel',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
					'params' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'executeOnExecutor',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.util.concurrent.Executor',
								'converter' : 'convert_proxy',
						},
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
					],
					'returns' : [
						{
								'type' : 'android.os.AsyncTask',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}, {'type': 'java.lang.Object', 'converter': 'convert_proxy'}, {'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'execute',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
					],
					'returns' : [
						{
								'type' : 'android.os.AsyncTask',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}, {'type': 'java.lang.Object', 'converter': 'convert_proxy'}, {'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'execute',
					'tags' : ['_no_proxy', '_static'],
					'params' : [
						{
								'type' : 'java.lang.Runnable',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'get',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
					'params' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
						{
								'type' : 'java.util.concurrent.TimeUnit',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'get',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getStatus',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.os.AsyncTask$Status',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'isCancelled',
					'tags' : ['_instance', '_no_callback', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
			],	
		},
		{
			'name' : 'android.os.Bundle',
			'tags' : ['_instance', '_no_callback', '_proxy', '_proxy_functions', '_proxy_constructors', '_no_proxy_fields', '_no_gen_2d_array_converters', '_no_gen_array_converters', ],
			'extends' : [{'name': 'java.lang.Object'}],
			'implements' : [{'name': 'android.os.Parcelable'}, {'name': 'java.lang.Cloneable'}],
			'functions' : [
				{
					'name' : 'clear',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'clone',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'containsKey',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'describeContents',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'getBinder',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.os.IBinder',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getBooleanArray',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : '_boolean_array',
								'children' : [{'type': 'boolean', 'converter': 'convert_boolean'}],
								'converter' : 'convert__boolean_array',
						},
					],
				},
				{
					'name' : 'getBoolean',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'getBoolean',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'getBundle',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getByteArray',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : '_byte_array',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array',
						},
					],
				},
				{
					'name' : 'getByte',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'byte',
								'converter' : 'convert_byte',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.Byte',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getByte',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'byte',
								'converter' : 'convert_byte',
						},
					],
				},
				{
					'name' : 'getCharArray',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : '_char_array',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array',
						},
					],
				},
				{
					'name' : 'getChar',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'char',
								'converter' : 'convert_char',
						},
					],
					'returns' : [
						{
								'type' : 'char',
								'converter' : 'convert_char',
						},
					],
				},
				{
					'name' : 'getChar',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'char',
								'converter' : 'convert_char',
						},
					],
				},
				{
					'name' : 'getCharSequenceArrayList',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.util.ArrayList',
								'children' : [{'type': 'java.lang.CharSequence', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getCharSequenceArray',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.CharSequence', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
					],
				},
				{
					'name' : 'getCharSequence',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getCharSequence',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getClassLoader',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.ClassLoader',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getDoubleArray',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : '_double_array',
								'children' : [{'type': 'double', 'converter': 'convert_double'}],
								'converter' : 'convert__double_array',
						},
					],
				},
				{
					'name' : 'getDouble',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'double',
								'converter' : 'convert_double',
						},
					],
					'returns' : [
						{
								'type' : 'double',
								'converter' : 'convert_double',
						},
					],
				},
				{
					'name' : 'getDouble',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'double',
								'converter' : 'convert_double',
						},
					],
				},
				{
					'name' : 'getFloatArray',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : '_float_array',
								'children' : [{'type': 'float', 'converter': 'convert_float'}],
								'converter' : 'convert__float_array',
						},
					],
				},
				{
					'name' : 'getFloat',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'float',
								'converter' : 'convert_float',
						},
					],
					'returns' : [
						{
								'type' : 'float',
								'converter' : 'convert_float',
						},
					],
				},
				{
					'name' : 'getFloat',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'float',
								'converter' : 'convert_float',
						},
					],
				},
				{
					'name' : 'getIntArray',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : '_int_array',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array',
						},
					],
				},
				{
					'name' : 'getInt',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'getInt',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'getIntegerArrayList',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.util.ArrayList',
								'children' : [{'type': 'java.lang.Integer', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getLongArray',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : '_long_array',
								'children' : [{'type': 'long', 'converter': 'convert_long'}],
								'converter' : 'convert__long_array',
						},
					],
				},
				{
					'name' : 'getLong',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
					'returns' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
				},
				{
					'name' : 'getLong',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
				},
				{
					'name' : 'get',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getParcelableArrayList',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.util.ArrayList',
								'children' : [{'type': 'android.os.Parcelable', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getParcelableArray',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'android.os.Parcelable', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
					],
				},
				{
					'name' : 'getParcelable',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.os.Parcelable',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getSerializable',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.io.Serializable',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getShortArray',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : '_short_array',
								'children' : [{'type': 'short', 'converter': 'convert_short'}],
								'converter' : 'convert__short_array',
						},
					],
				},
				{
					'name' : 'getShort',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'short',
								'converter' : 'convert_short',
						},
					],
					'returns' : [
						{
								'type' : 'short',
								'converter' : 'convert_short',
						},
					],
				},
				{
					'name' : 'getShort',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'short',
								'converter' : 'convert_short',
						},
					],
				},
				{
					'name' : 'getSparseParcelableArray',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.util.SparseArray',
								'children' : [{'type': 'android.os.Parcelable', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getStringArrayList',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.util.ArrayList',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getStringArray',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
					],
				},
				{
					'name' : 'getString',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getString',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'hasFileDescriptors',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'isEmpty',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'keySet',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.Set',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'putAll',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'putBinder',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.os.IBinder',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'putBooleanArray',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : '_boolean_array',
								'children' : [{'type': 'boolean', 'converter': 'convert_boolean'}],
								'converter' : 'convert__boolean_array',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'putBoolean',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'putBundle',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'putByteArray',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : '_byte_array',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'putByte',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'byte',
								'converter' : 'convert_byte',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'putCharArray',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : '_char_array',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'putChar',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'char',
								'converter' : 'convert_char',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'putCharSequenceArrayList',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.util.ArrayList',
								'children' : [{'type': 'java.lang.CharSequence', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'putCharSequenceArray',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.CharSequence', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'putCharSequence',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'putDoubleArray',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : '_double_array',
								'children' : [{'type': 'double', 'converter': 'convert_double'}],
								'converter' : 'convert__double_array',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'putDouble',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'double',
								'converter' : 'convert_double',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'putFloatArray',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : '_float_array',
								'children' : [{'type': 'float', 'converter': 'convert_float'}],
								'converter' : 'convert__float_array',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'putFloat',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'float',
								'converter' : 'convert_float',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'putIntArray',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : '_int_array',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'putInt',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'putIntegerArrayList',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.util.ArrayList',
								'children' : [{'type': 'java.lang.Integer', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'putLongArray',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : '_long_array',
								'children' : [{'type': 'long', 'converter': 'convert_long'}],
								'converter' : 'convert__long_array',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'putLong',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'putParcelableArrayList',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.util.ArrayList',
								'children' : [{'type': 'android.os.Parcelable', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'putParcelableArray',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : '_object_array',
								'children' : [{'type': 'android.os.Parcelable', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'putParcelable',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.os.Parcelable',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'putSerializable',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.io.Serializable',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'putShortArray',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : '_short_array',
								'children' : [{'type': 'short', 'converter': 'convert_short'}],
								'converter' : 'convert__short_array',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'putShort',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'short',
								'converter' : 'convert_short',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'putSparseParcelableArray',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.SparseArray',
								'children' : [{'type': 'android.os.Parcelable', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'putStringArrayList',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.util.ArrayList',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'putStringArray',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : '_object_array',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'putString',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'readFromParcel',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'android.os.Parcel',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'remove',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'setClassLoader',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.ClassLoader',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'size',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'toString',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'writeToParcel',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'android.os.Parcel',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'android.os.Bundle',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
				{
					'name' : 'android.os.Bundle',
					'tags' : ['_no_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.os.Bundle',
					'tags' : ['_no_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'android.os.Bundle',
					'tags' : ['_no_proxy'],
					'params' : [
						{
								'type' : 'java.lang.ClassLoader',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.Toast',
			'tags' : ['_instance', '_proxy', '_proxy_functions', '_no_proxy_constructors', '_no_proxy_fields', '_no_gen_2d_array_converters', '_no_gen_array_converters', '_gen_converters'],
			'extends' : [{'name': 'java.lang.Object'}],
			'functions' : [
				{
					'name' : 'cancel',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'getDuration',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'getGravity',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'getHorizontalMargin',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'float',
								'converter' : 'convert_float',
						},
					],
				},
				{
					'name' : 'getVerticalMargin',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'float',
								'converter' : 'convert_float',
						},
					],
				},
				{
					'name' : 'getView',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getXOffset',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'getYOffset',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'makeText',
					'tags' : ['_no_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'android.widget.Toast',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'makeText',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'android.widget.Toast',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setDuration',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'setGravity',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'setMargin',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'float',
								'converter' : 'convert_float',
						},
						{
								'type' : 'float',
								'converter' : 'convert_float',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'setText',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'setText',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'setView',
					'tags' : ['_instance', '_no_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'show',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
			],	
		},
	],
}
