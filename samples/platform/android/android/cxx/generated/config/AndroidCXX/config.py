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
#   Special Class Tags
#		_enum 												Tag to indicate class should be enumerated
#		_interface											Tag to indicate class is an interface
#		_abstract											Tag to indicate class is abstract
#		_instance											Tag to indicate class is an instance
#		_singleton											Tag to indicate class instance is a singleton (field or instance)									
#		_static 											Tag to indicate class has only static methods
#		_callback 											Tag to indicate class is a callback
#		_proxy 												Tag to indicate class will be proxied
#		_no_proxy											Tag to indicate class will not be proxied
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
			'java' : {'type': '_object_array_type'},
			'name' : 'convert_jni__object_array_type',
		},
		{
			'jni' : {'type': 'jbyteArray'},
			'java' : {'type': '_byte_array_type'},
			'name' : 'convert_jni__byte_array_type',
		},
		{
			'jni' : {'type': 'jshortArray'},
			'java' : {'type': '_short_array_type'},
			'name' : 'convert_jni__short_array_type',
		},
		{
			'jni' : {'type': 'jintArray'},
			'java' : {'type': '_int_array_type'},
			'name' : 'convert_jni__int_array_type',
		},
		{
			'jni' : {'type': 'jlongArray'},
			'java' : {'type': '_long_array_type'},
			'name' : 'convert_jni__long_array_type',
		},
		{
			'jni' : {'type': 'jfloatArray'},
			'java' : {'type': '_float_array_type'},
			'name' : 'convert_jni__float_array_type',
		},
		{
			'jni' : {'type': 'jdoubleArray'},
			'java' : {'type': '_double_array_type'},
			'name' : 'convert_jni__double_array_type',
		},
		{
			'jni' : {'type': 'jbooleanArray'},
			'java' : {'type': '_boolean_array_type'},
			'name' : 'convert_jni__boolean_array_type',
		},
		{
			'jni' : {'type': 'jcharArray'},
			'java' : {'type': '_char_array_type'},
			'name' : 'convert_jni__char_array_type',
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
			'cxx' : {'type': 'std::vector<long>'},
			'java' : {'type': '_object_array_type'},
			'name' : 'convert__object_array_type',
		},
		{
			'cxx' : {'type': 'std::vector<byte>'},
			'java' : {'type': '_byte_array_type'},
			'name' : 'convert__byte_array_type',
		},
		{
			'cxx' : {'type': 'std::vector<short>'},
			'java' : {'type': '_short_array_type'},
			'name' : 'convert__short_array_type',
		},
		{
			'cxx' : {'type': 'std::vector<int>'},
			'java' : {'type': '_int_array_type'},
			'name' : 'convert__int_array_type',
		},
		{
			'cxx' : {'type': 'std::vector<long>'},
			'java' : {'type': '_long_array_type'},
			'name' : 'convert__long_array_type',
		},
		{
			'cxx' : {'type': 'std::vector<float>'},
			'java' : {'type': '_float_array_type'},
			'name' : 'convert__float_array_type',
		},
		{
			'cxx' : {'type': 'std::vector<double>'},
			'java' : {'type': '_double_array_type'},
			'name' : 'convert__double_array_type',
		},
		{
			'cxx' : {'type': 'std::vector<bool>'},
			'java' : {'type': '_boolean_array_type'},
			'name' : 'convert__boolean_array_type',
		},
		{
			'cxx' : {'type': 'std::vector<char>'},
			'java' : {'type': '_char_array_type'},
			'name' : 'convert__char_array_type',
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
			'name' : 'java.lang.String',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				# {
				# 	'name' : 'CASE_INSENSITIVE_ORDER',
				# 	'tags' : ['_proxy', '_static'],
				# 	'type' : 
				# 	{
				# 			'type' : 'java.util.Comparator',
				# 			'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
				# 			'converter' : 'convert_proxy',
				# 	},
				# },
			],	
			'functions' : [
				{
					'name' : 'equals',
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
					'name' : 'toString',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				# {
				# 	'name' : 'hashCode',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'compareTo',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'indexOf',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'indexOf',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'indexOf',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'indexOf',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'valueOf',
				# 	'tags' : ['_proxy', '_singleton', '_static'],
				# 	'params' : [
				# 		{
				# 				'type' : 'java.lang.Object',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'valueOf',
				# 	'tags' : ['_proxy', '_singleton', '_static'],
				# 	'params' : [
				# 		{
				# 				'type' : 'double',
				# 				'converter' : 'convert_double',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'valueOf',
				# 	'tags' : ['_proxy', '_singleton', '_static'],
				# 	'params' : [
				# 		{
				# 				'type' : 'float',
				# 				'converter' : 'convert_float',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'valueOf',
				# 	'tags' : ['_proxy', '_singleton', '_static'],
				# 	'params' : [
				# 		{
				# 				'type' : 'long',
				# 				'converter' : 'convert_long',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'valueOf',
				# 	'tags' : ['_proxy', '_singleton', '_static'],
				# 	'params' : [
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'valueOf',
				# 	'tags' : ['_proxy', '_singleton', '_static'],
				# 	'params' : [
				# 		{
				# 				'type' : 'char',
				# 				'converter' : 'convert_char',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'valueOf',
				# 	'tags' : ['_proxy', '_singleton', '_static'],
				# 	'params' : [
				# 		{
				# 				'type' : 'boolean',
				# 				'converter' : 'convert_boolean',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'valueOf',
				# 	'tags' : ['_proxy', '_singleton', '_static'],
				# 	'params' : [
				# 		{
				# 				'type' : '_char_array_type',
				# 				'children' : [{'type': 'char', 'converter': 'convert_char'}],
				# 				'converter' : 'convert__char_array_type',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'valueOf',
				# 	'tags' : ['_proxy', '_singleton', '_static'],
				# 	'params' : [
				# 		{
				# 				'type' : '_char_array_type',
				# 				'children' : [{'type': 'char', 'converter': 'convert_char'}],
				# 				'converter' : 'convert__char_array_type',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'length',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'isEmpty',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'boolean',
				# 				'converter' : 'convert_boolean',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'charAt',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'char',
				# 				'converter' : 'convert_char',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'codePointAt',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'codePointBefore',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'codePointCount',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'offsetByCodePoints',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'getChars',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 		{
				# 				'type' : '_char_array_type',
				# 				'children' : [{'type': 'char', 'converter': 'convert_char'}],
				# 				'converter' : 'convert__char_array_type',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'void',
				# 				'converter' : 'convert_void',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'getBytes',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : '_byte_array_type',
				# 				'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
				# 				'converter' : 'convert__byte_array_type',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'getBytes',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 		{
				# 				'type' : '_byte_array_type',
				# 				'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
				# 				'converter' : 'convert__byte_array_type',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'void',
				# 				'converter' : 'convert_void',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'getBytes',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'java.nio.charset.Charset',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : '_byte_array_type',
				# 				'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
				# 				'converter' : 'convert__byte_array_type',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'getBytes',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : '_byte_array_type',
				# 				'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
				# 				'converter' : 'convert__byte_array_type',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'contentEquals',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'java.lang.StringBuffer',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'boolean',
				# 				'converter' : 'convert_boolean',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'contentEquals',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'java.lang.CharSequence',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'boolean',
				# 				'converter' : 'convert_boolean',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'equalsIgnoreCase',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'boolean',
				# 				'converter' : 'convert_boolean',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'compareToIgnoreCase',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'regionMatches',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'boolean',
				# 				'converter' : 'convert_boolean',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'regionMatches',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'boolean',
				# 				'converter' : 'convert_boolean',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'boolean',
				# 				'converter' : 'convert_boolean',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'startsWith',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'boolean',
				# 				'converter' : 'convert_boolean',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'startsWith',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'boolean',
				# 				'converter' : 'convert_boolean',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'endsWith',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'boolean',
				# 				'converter' : 'convert_boolean',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'lastIndexOf',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'lastIndexOf',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'lastIndexOf',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'lastIndexOf',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'substring',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'substring',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'subSequence',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'java.lang.CharSequence',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'concat',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'replace',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'java.lang.CharSequence',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 		{
				# 				'type' : 'java.lang.CharSequence',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'replace',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'char',
				# 				'converter' : 'convert_char',
				# 		},
				# 		{
				# 				'type' : 'char',
				# 				'converter' : 'convert_char',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'matches',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'boolean',
				# 				'converter' : 'convert_boolean',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'contains',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'java.lang.CharSequence',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'boolean',
				# 				'converter' : 'convert_boolean',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'replaceFirst',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'replaceAll',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'split',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : '_object_array_type',
				# 				'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
				# 				'converter' : 'convert__object_array_type',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'split',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : '_object_array_type',
				# 				'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
				# 				'converter' : 'convert__object_array_type',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'toLowerCase',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'toLowerCase',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'java.util.Locale',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'toUpperCase',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'java.util.Locale',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'toUpperCase',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'trim',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'toCharArray',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : '_char_array_type',
				# 				'children' : [{'type': 'char', 'converter': 'convert_char'}],
				# 				'converter' : 'convert__char_array_type',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'format',
				# 	'tags' : ['_proxy', '_singleton', '_static'],
				# 	'params' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 		{
				# 				'type' : '_object_array_type',
				# 				'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
				# 				'converter' : 'convert__object_array_type',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'format',
				# 	'tags' : ['_proxy', '_singleton', '_static'],
				# 	'params' : [
				# 		{
				# 				'type' : 'java.util.Locale',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 		{
				# 				'type' : '_object_array_type',
				# 				'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
				# 				'converter' : 'convert__object_array_type',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'copyValueOf',
				# 	'tags' : ['_proxy', '_singleton', '_static'],
				# 	'params' : [
				# 		{
				# 				'type' : '_char_array_type',
				# 				'children' : [{'type': 'char', 'converter': 'convert_char'}],
				# 				'converter' : 'convert__char_array_type',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'copyValueOf',
				# 	'tags' : ['_proxy', '_singleton', '_static'],
				# 	'params' : [
				# 		{
				# 				'type' : '_char_array_type',
				# 				'children' : [{'type': 'char', 'converter': 'convert_char'}],
				# 				'converter' : 'convert__char_array_type',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'intern',
				# 	'tags' : ['_instance', '_proxy'],
				# 	'params' : [
				# 	],
				# 	'returns' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# },
			],	
			'constructors' : [	
				# {
				# 	'name' : 'java.lang.String',
				# 	'tags' : ['_proxy'],
				# 	'params' : [
				# 	],
				# },
				# {
				# 	'name' : 'java.lang.String',
				# 	'tags' : ['_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'java.lang.String',
				# 	'tags' : ['_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : '_char_array_type',
				# 				'children' : [{'type': 'char', 'converter': 'convert_char'}],
				# 				'converter' : 'convert__char_array_type',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'java.lang.String',
				# 	'tags' : ['_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : '_char_array_type',
				# 				'children' : [{'type': 'char', 'converter': 'convert_char'}],
				# 				'converter' : 'convert__char_array_type',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'java.lang.String',
				# 	'tags' : ['_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : '_int_array_type',
				# 				'children' : [{'type': 'int', 'converter': 'convert_int'}],
				# 				'converter' : 'convert__int_array_type',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'java.lang.String',
				# 	'tags' : ['_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : '_byte_array_type',
				# 				'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
				# 				'converter' : 'convert__byte_array_type',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'java.lang.String',
				# 	'tags' : ['_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : '_byte_array_type',
				# 				'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
				# 				'converter' : 'convert__byte_array_type',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'java.lang.String',
				# 	'tags' : ['_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : '_byte_array_type',
				# 				'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
				# 				'converter' : 'convert__byte_array_type',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'java.lang.String',
				# 	'tags' : ['_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : '_byte_array_type',
				# 				'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
				# 				'converter' : 'convert__byte_array_type',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 		{
				# 				'type' : 'java.nio.charset.Charset',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'java.lang.String',
				# 	'tags' : ['_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : '_byte_array_type',
				# 				'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
				# 				'converter' : 'convert__byte_array_type',
				# 		},
				# 		{
				# 				'type' : 'java.lang.String',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'java.lang.String',
				# 	'tags' : ['_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : '_byte_array_type',
				# 				'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
				# 				'converter' : 'convert__byte_array_type',
				# 		},
				# 		{
				# 				'type' : 'java.nio.charset.Charset',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'java.lang.String',
				# 	'tags' : ['_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : '_byte_array_type',
				# 				'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
				# 				'converter' : 'convert__byte_array_type',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 		{
				# 				'type' : 'int',
				# 				'converter' : 'convert_int',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'java.lang.String',
				# 	'tags' : ['_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : '_byte_array_type',
				# 				'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
				# 				'converter' : 'convert__byte_array_type',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'java.lang.String',
				# 	'tags' : ['_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'java.lang.StringBuffer',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# },
				# {
				# 	'name' : 'java.lang.String',
				# 	'tags' : ['_proxy'],
				# 	'params' : [
				# 		{
				# 				'type' : 'java.lang.StringBuilder',
				# 				'converter' : 'convert_proxy',
				# 		},
				# 	],
				# },
			],
		},
		# {
		# 	'name' : 'java.net.Proxy$Type',
		# 	'tags' : ['_enum', '_proxy'],
		# 	'fields' : [
		# 		{
		# 			'name' : 'DIRECT',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'type' : 
		# 			{
		# 					'type' : 'java.net.Proxy$Type',
		# 					'converter' : 'convert_proxy',
		# 			},
		# 		},
		# 		{
		# 			'name' : 'HTTP',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'type' : 
		# 			{
		# 					'type' : 'java.net.Proxy$Type',
		# 					'converter' : 'convert_proxy',
		# 			},
		# 		},
		# 		{
		# 			'name' : 'SOCKS',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'type' : 
		# 			{
		# 					'type' : 'java.net.Proxy$Type',
		# 					'converter' : 'convert_proxy',
		# 			},
		# 		},
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'values',
		# 			'tags' : ['_proxy', '_static'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.net.Proxy$Type', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'valueOf',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.net.Proxy$Type',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.nio.charset.Charset',
		# 	'tags' : ['_abstract', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'name',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'forName',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.charset.Charset',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'equals',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hashCode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'compareTo',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.nio.charset.Charset',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'contains',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.nio.charset.Charset',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'decode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.CharBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'encode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.nio.CharBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'encode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isSupported',
		# 			'tags' : ['_proxy', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'defaultCharset',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.charset.Charset',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'aliases',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.util.Set',
		# 						'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'availableCharsets',
		# 			'tags' : ['_proxy', '_static'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.util.SortedMap',
		# 						'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}, {'type': 'java.nio.charset.Charset', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'displayName',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'displayName',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.util.Locale',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isRegistered',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'newDecoder',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.charset.CharsetDecoder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'newEncoder',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.charset.CharsetEncoder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'canEncode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		{
			'name' : 'java.lang.Object',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
		# 		{
		# 			'name' : 'wait',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'wait',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'long',
		# 						'converter' : 'convert_long',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'wait',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'long',
		# 						'converter' : 'convert_long',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'equals',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hashCode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getClass',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Class',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'notify',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'notifyAll',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
			],	
			'constructors' : [	
		# 		{
		# 			'name' : 'java.lang.Object',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 			],
		# 		},
			],
		},
		# {
		# 	'name' : 'java.lang.Class',
		# 	'tags' : ['_abstract', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'forName',
		# 			'tags' : ['_proxy', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Class',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'forName',
		# 			'tags' : ['_proxy', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 				{
		# 						'type' : 'java.lang.ClassLoader',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Class',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isAssignableFrom',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Class',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isInstance',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getModifiers',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isInterface',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isArray',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isPrimitive',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getSuperclass',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Class',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getComponentType',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Class',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getName',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'newInstance',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isAnnotation',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isSynthetic',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getClassLoader',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.ClassLoader',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getTypeParameters',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.reflect.TypeVariable', 'children': [{'type': 'java.lang.Class', 'children': [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getGenericSuperclass',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.reflect.Type',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getPackage',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Package',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getInterfaces',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.Class', 'children': [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getGenericInterfaces',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.reflect.Type', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getSigners',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getEnclosingMethod',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.reflect.Method',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getEnclosingConstructor',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.reflect.Constructor',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDeclaringClass',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Class',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getEnclosingClass',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Class',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getSimpleName',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getCanonicalName',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isAnonymousClass',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isLocalClass',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isMemberClass',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getClasses',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.Class', 'children': [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getFields',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.reflect.Field', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getMethods',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.reflect.Method', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getConstructors',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.reflect.Constructor', 'children': [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getField',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.reflect.Field',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getMethod',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.Class', 'children': [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.reflect.Method',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getConstructor',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.Class', 'children': [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.reflect.Constructor',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDeclaredClasses',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.Class', 'children': [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDeclaredFields',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.reflect.Field', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDeclaredMethods',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.reflect.Method', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDeclaredConstructors',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.reflect.Constructor', 'children': [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDeclaredField',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.reflect.Field',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDeclaredMethod',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.Class', 'children': [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.reflect.Method',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDeclaredConstructor',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.Class', 'children': [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.reflect.Constructor',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getResourceAsStream',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.io.InputStream',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getResource',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.net.URL',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getProtectionDomain',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.security.ProtectionDomain',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'desiredAssertionStatus',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isEnum',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getEnumConstants',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'cast',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'asSubclass',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Class',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Class',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getAnnotation',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Class',
		# 						'children' : [{'type': 'java.lang.annotation.Annotation', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.annotation.Annotation',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isAnnotationPresent',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Class',
		# 						'children' : [{'type': 'java.lang.annotation.Annotation', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getAnnotations',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.annotation.Annotation', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDeclaredAnnotations',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.annotation.Annotation', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.lang.ClassLoader',
		# 	'tags' : ['_abstract', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'loadClass',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Class',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getSystemClassLoader',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.ClassLoader',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getResourceAsStream',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.io.InputStream',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getResource',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.net.URL',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getSystemResourceAsStream',
		# 			'tags' : ['_proxy', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.io.InputStream',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getSystemResource',
		# 			'tags' : ['_proxy', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.net.URL',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getResources',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.util.Enumeration',
		# 						'children' : [{'type': 'java.net.URL', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getSystemResources',
		# 			'tags' : ['_proxy', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.util.Enumeration',
		# 						'children' : [{'type': 'java.net.URL', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getParent',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.ClassLoader',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setDefaultAssertionStatus',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setPackageAssertionStatus',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setClassAssertionStatus',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'clearAssertionStatus',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.io.InputStream',
		# 	'tags' : ['_abstract', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'close',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'mark',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'reset',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'read',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_byte_array_type',
		# 						'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
		# 						'converter' : 'convert__byte_array_type',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'read',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_byte_array_type',
		# 						'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
		# 						'converter' : 'convert__byte_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'read',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'skip',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'long',
		# 						'converter' : 'convert_long',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'long',
		# 						'converter' : 'convert_long',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'available',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'markSupported',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 		{
		# 			'name' : 'java.io.InputStream',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 			],
		# 		},
		# 	],
		# },
		# {
		# 	'name' : 'java.net.URL',
		# 	'tags' : ['_instance', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'equals',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hashCode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'openStream',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.io.InputStream',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getPath',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toURI',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.net.URI',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getAuthority',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getQuery',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getUserInfo',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getPort',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDefaultPort',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getProtocol',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getHost',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getFile',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getRef',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'sameFile',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.net.URL',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toExternalForm',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'openConnection',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.net.Proxy',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.net.URLConnection',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'openConnection',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.net.URLConnection',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getContent',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.Class', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getContent',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setURLStreamHandlerFactory',
		# 			'tags' : ['_proxy', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.net.URLStreamHandlerFactory',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 		{
		# 			'name' : 'java.net.URL',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'java.net.URL',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'java.net.URL',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.net.URLStreamHandler',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'java.net.URL',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'java.net.URL',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.net.URL',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'java.net.URL',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.net.URL',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.net.URLStreamHandler',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],
		# },
		# {
		# 	'name' : 'java.net.URLStreamHandler',
		# 	'tags' : ['_abstract', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 	],	
		# 	'constructors' : [	
		# 		{
		# 			'name' : 'java.net.URLStreamHandler',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 			],
		# 		},
		# 	],
		# },
		# {
		# 	'name' : 'java.net.URI',
		# 	'tags' : ['_instance', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'equals',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hashCode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'compareTo',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.net.URI',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isAbsolute',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getPath',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toURL',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.net.URL',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'resolve',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.net.URI',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'resolve',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.net.URI',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.net.URI',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'normalize',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.net.URI',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isOpaque',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getScheme',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getAuthority',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getFragment',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getQuery',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getUserInfo',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getPort',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getHost',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'create',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.net.URI',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'parseServerAuthority',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.net.URI',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'relativize',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.net.URI',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.net.URI',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getRawSchemeSpecificPart',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getSchemeSpecificPart',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getRawAuthority',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getRawUserInfo',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getRawPath',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getRawQuery',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getRawFragment',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toASCIIString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 		{
		# 			'name' : 'java.net.URI',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'java.net.URI',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'java.net.URI',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'java.net.URI',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'java.net.URI',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],
		# },
		# {
		# 	'name' : 'java.net.Proxy',
		# 	'tags' : ['_instance', '_proxy'],
		# 	'fields' : [
		# 		{
		# 			'name' : 'NO_PROXY',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'type' : 
		# 			{
		# 					'type' : 'java.net.Proxy',
		# 					'converter' : 'convert_proxy',
		# 			},
		# 		},
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'type',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.net.Proxy$Type',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'equals',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hashCode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'address',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.net.SocketAddress',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 		{
		# 			'name' : 'java.net.Proxy',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.net.Proxy$Type',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.net.SocketAddress',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],
		# },
		# {
		# 	'name' : 'java.net.SocketAddress',
		# 	'tags' : ['_abstract', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 	],	
		# 	'constructors' : [	
		# 		{
		# 			'name' : 'java.net.SocketAddress',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 			],
		# 		},
		# 	],
		# },
		# {
		# 	'name' : 'java.net.URLConnection',
		# 	'tags' : ['_abstract', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'toString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getURL',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.net.URL',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getContent',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.Class', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getContent',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getInputStream',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.io.InputStream',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getPermission',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.security.Permission',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'connect',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setRequestProperty',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDate',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'long',
		# 						'converter' : 'convert_long',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getContentType',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getContentLength',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getHeaderField',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getHeaderField',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getHeaderFieldKey',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getLastModified',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'long',
		# 						'converter' : 'convert_long',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getFileNameMap',
		# 			'tags' : ['_proxy', '_static'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.net.FileNameMap',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'addRequestProperty',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getRequestProperty',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getRequestProperties',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.util.Map',
		# 						'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}, {'type': 'java.util.List', 'children': [{'type': 'java.lang.String', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'guessContentTypeFromStream',
		# 			'tags' : ['_proxy', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.io.InputStream',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'guessContentTypeFromName',
		# 			'tags' : ['_proxy', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setFileNameMap',
		# 			'tags' : ['_proxy', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.net.FileNameMap',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setConnectTimeout',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getConnectTimeout',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setReadTimeout',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getReadTimeout',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getContentEncoding',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getExpiration',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'long',
		# 						'converter' : 'convert_long',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getHeaderFields',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.util.Map',
		# 						'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}, {'type': 'java.util.List', 'children': [{'type': 'java.lang.String', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getHeaderFieldInt',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getHeaderFieldDate',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'long',
		# 						'converter' : 'convert_long',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'long',
		# 						'converter' : 'convert_long',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getOutputStream',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.io.OutputStream',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setDoInput',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDoInput',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setDoOutput',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDoOutput',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setAllowUserInteraction',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getAllowUserInteraction',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setDefaultAllowUserInteraction',
		# 			'tags' : ['_proxy', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDefaultAllowUserInteraction',
		# 			'tags' : ['_proxy', '_static'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setUseCaches',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getUseCaches',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setIfModifiedSince',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'long',
		# 						'converter' : 'convert_long',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getIfModifiedSince',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'long',
		# 						'converter' : 'convert_long',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDefaultUseCaches',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setDefaultUseCaches',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setDefaultRequestProperty',
		# 			'tags' : ['_proxy', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDefaultRequestProperty',
		# 			'tags' : ['_proxy', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setContentHandlerFactory',
		# 			'tags' : ['_proxy', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.net.ContentHandlerFactory',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.security.Permission',
		# 	'tags' : ['_abstract', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'equals',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hashCode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getName',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'implies',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.security.Permission',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getActions',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'newPermissionCollection',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.security.PermissionCollection',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'checkGuard',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 		{
		# 			'name' : 'java.security.Permission',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],
		# },
		# {
		# 	'name' : 'java.security.PermissionCollection',
		# 	'tags' : ['_abstract', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'add',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.security.Permission',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'implies',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.security.Permission',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setReadOnly',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'elements',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.util.Enumeration',
		# 						'children' : [{'type': 'java.security.Permission', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isReadOnly',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 		{
		# 			'name' : 'java.security.PermissionCollection',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 			],
		# 		},
		# 	],
		# },
		# {
		# 	'name' : 'java.util.Enumeration',
		# 	'tags' : ['_callback', '_interface', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'hasMoreElements',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'nextElement',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.net.FileNameMap',
		# 	'tags' : ['_callback', '_interface', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'getContentTypeFor',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.util.Map',
		# 	'tags' : ['_callback', '_interface', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'get',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'equals',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'values',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.util.Collection',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hashCode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'clear',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isEmpty',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'size',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'entrySet',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.util.Set',
		# 						'children' : [{'type': 'java.util.Map$Entry', 'children': [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}, {'type': 'java.lang.Object', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'putAll',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.util.Map',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}, {'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'remove',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'keySet',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.util.Set',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'containsValue',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'containsKey',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.util.Collection',
		# 	'tags' : ['_callback', '_interface', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'add',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'equals',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hashCode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'clear',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isEmpty',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'contains',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'addAll',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.util.Collection',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'size',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toArray',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toArray',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'iterator',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.util.Iterator',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'remove',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'removeAll',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.util.Collection',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'containsAll',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.util.Collection',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'retainAll',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.util.Collection',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.util.Iterator',
		# 	'tags' : ['_callback', '_interface', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'hasNext',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'next',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'remove',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.util.Set',
		# 	'tags' : ['_callback', '_interface', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'add',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'equals',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hashCode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'clear',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isEmpty',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'contains',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'addAll',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.util.Collection',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'size',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toArray',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toArray',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'iterator',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.util.Iterator',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'remove',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'removeAll',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.util.Collection',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'containsAll',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.util.Collection',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'retainAll',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.util.Collection',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.util.Map$Entry',
		# 	'tags' : ['_callback', '_interface', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'equals',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hashCode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getValue',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getKey',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setValue',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.util.List',
		# 	'tags' : ['_callback', '_interface', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'add',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'add',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'get',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'equals',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hashCode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'indexOf',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'clear',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isEmpty',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'lastIndexOf',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'contains',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'addAll',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'java.util.Collection',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'addAll',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.util.Collection',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'size',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toArray',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toArray',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'iterator',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.util.Iterator',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'remove',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'remove',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'set',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'listIterator',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.util.ListIterator',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'listIterator',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.util.ListIterator',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'subList',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.util.List',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'removeAll',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.util.Collection',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'containsAll',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.util.Collection',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'retainAll',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.util.Collection',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.util.ListIterator',
		# 	'tags' : ['_callback', '_interface', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'add',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hasNext',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'next',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'remove',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'set',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'nextIndex',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'previous',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'previousIndex',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hasPrevious',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.io.OutputStream',
		# 	'tags' : ['_abstract', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'write',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'write',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_byte_array_type',
		# 						'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
		# 						'converter' : 'convert__byte_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'write',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_byte_array_type',
		# 						'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
		# 						'converter' : 'convert__byte_array_type',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'flush',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'close',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 		{
		# 			'name' : 'java.io.OutputStream',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 			],
		# 		},
		# 	],
		# },
		# {
		# 	'name' : 'java.net.ContentHandlerFactory',
		# 	'tags' : ['_callback', '_interface', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'createContentHandler',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.net.ContentHandler',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.net.ContentHandler',
		# 	'tags' : ['_abstract', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'getContent',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.net.URLConnection',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getContent',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.net.URLConnection',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.Class', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 		{
		# 			'name' : 'java.net.ContentHandler',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 			],
		# 		},
		# 	],
		# },
		# {
		# 	'name' : 'java.net.URLStreamHandlerFactory',
		# 	'tags' : ['_callback', '_interface', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'createURLStreamHandler',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.net.URLStreamHandler',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.lang.reflect.TypeVariable',
		# 	'tags' : ['_callback', '_interface', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'getName',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getBounds',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.reflect.Type', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getGenericDeclaration',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.reflect.GenericDeclaration',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.lang.reflect.Type',
		# 	'tags' : ['_callback', '_interface', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.lang.reflect.GenericDeclaration',
		# 	'tags' : ['_callback', '_interface', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'getTypeParameters',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.reflect.TypeVariable', 'children': [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.lang.Package',
		# 	'tags' : ['_abstract', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'toString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hashCode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getName',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getPackage',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Package',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getAnnotation',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Class',
		# 						'children' : [{'type': 'java.lang.annotation.Annotation', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.annotation.Annotation',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isAnnotationPresent',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Class',
		# 						'children' : [{'type': 'java.lang.annotation.Annotation', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getAnnotations',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.annotation.Annotation', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDeclaredAnnotations',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.annotation.Annotation', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getPackages',
		# 			'tags' : ['_proxy', '_static'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.Package', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isSealed',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isSealed',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.net.URL',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getSpecificationTitle',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getSpecificationVersion',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getSpecificationVendor',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getImplementationTitle',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getImplementationVersion',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getImplementationVendor',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isCompatibleWith',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.lang.annotation.Annotation',
		# 	'tags' : ['_callback', '_interface', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'equals',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hashCode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'annotationType',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Class',
		# 						'children' : [{'type': 'java.lang.annotation.Annotation', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.lang.reflect.Method',
		# 	'tags' : ['_abstract', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'invoke',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'equals',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hashCode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getModifiers',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getName',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isSynthetic',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getTypeParameters',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.reflect.TypeVariable', 'children': [{'type': 'java.lang.reflect.Method', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDeclaringClass',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Class',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getAnnotation',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Class',
		# 						'children' : [{'type': 'java.lang.annotation.Annotation', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.annotation.Annotation',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDeclaredAnnotations',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.annotation.Annotation', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getReturnType',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Class',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getParameterTypes',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.Class', 'children': [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toGenericString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getGenericReturnType',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.reflect.Type',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getGenericParameterTypes',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.reflect.Type', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getExceptionTypes',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.Class', 'children': [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getGenericExceptionTypes',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.reflect.Type', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isBridge',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isVarArgs',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDefaultValue',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getParameterAnnotations',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': '_object_array_type', 'children': [{'type': 'java.lang.annotation.Annotation', 'converter': 'convert_proxy'}], 'converter': 'convert__object_array_type'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.lang.reflect.Constructor',
		# 	'tags' : ['_abstract', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'equals',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hashCode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getModifiers',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getName',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'newInstance',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isSynthetic',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getTypeParameters',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.reflect.TypeVariable', 'children': [{'type': 'java.lang.reflect.Constructor', 'children': [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDeclaringClass',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Class',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getAnnotation',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Class',
		# 						'children' : [{'type': 'java.lang.annotation.Annotation', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.annotation.Annotation',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDeclaredAnnotations',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.annotation.Annotation', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getParameterTypes',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.Class', 'children': [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toGenericString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getGenericParameterTypes',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.reflect.Type', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getExceptionTypes',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.Class', 'children': [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getGenericExceptionTypes',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.reflect.Type', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isVarArgs',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getParameterAnnotations',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': '_object_array_type', 'children': [{'type': 'java.lang.annotation.Annotation', 'converter': 'convert_proxy'}], 'converter': 'convert__object_array_type'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.lang.reflect.Field',
		# 	'tags' : ['_abstract', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'get',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'equals',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hashCode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getModifiers',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getBoolean',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getByte',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'byte',
		# 						'converter' : 'convert_byte',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getShort',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'short',
		# 						'converter' : 'convert_short',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getChar',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'char',
		# 						'converter' : 'convert_char',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getInt',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getLong',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'long',
		# 						'converter' : 'convert_long',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getFloat',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'float',
		# 						'converter' : 'convert_float',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDouble',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'double',
		# 						'converter' : 'convert_double',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getName',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isSynthetic',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDeclaringClass',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Class',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getAnnotation',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Class',
		# 						'children' : [{'type': 'java.lang.annotation.Annotation', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.annotation.Annotation',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDeclaredAnnotations',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.annotation.Annotation', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isEnumConstant',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getType',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Class',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getGenericType',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.reflect.Type',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toGenericString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'set',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setBoolean',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setByte',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'byte',
		# 						'converter' : 'convert_byte',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setChar',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'char',
		# 						'converter' : 'convert_char',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setShort',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'short',
		# 						'converter' : 'convert_short',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setInt',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setLong',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'long',
		# 						'converter' : 'convert_long',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setFloat',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'float',
		# 						'converter' : 'convert_float',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setDouble',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'double',
		# 						'converter' : 'convert_double',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.security.ProtectionDomain',
		# 	'tags' : ['_instance', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'toString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getClassLoader',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.ClassLoader',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getCodeSource',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.security.CodeSource',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getPrincipals',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.security.Principal', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getPermissions',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.security.PermissionCollection',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'implies',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.security.Permission',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 		{
		# 			'name' : 'java.security.ProtectionDomain',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.security.CodeSource',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.security.PermissionCollection',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'java.security.ProtectionDomain',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.security.CodeSource',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.security.PermissionCollection',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.lang.ClassLoader',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.security.Principal', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 	],
		# },
		# {
		# 	'name' : 'java.security.CodeSource',
		# 	'tags' : ['_instance', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'equals',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hashCode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getLocation',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.net.URL',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getCertificates',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.security.cert.Certificate', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'implies',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.security.CodeSource',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getCodeSigners',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.security.CodeSigner', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 		{
		# 			'name' : 'java.security.CodeSource',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.net.URL',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.security.CodeSigner', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'java.security.CodeSource',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.net.URL',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.security.cert.Certificate', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 	],
		# },
		# {
		# 	'name' : 'java.security.CodeSigner',
		# 	'tags' : ['_instance', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'equals',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hashCode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getSignerCertPath',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.security.cert.CertPath',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getTimestamp',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.security.Timestamp',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 		{
		# 			'name' : 'java.security.CodeSigner',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.security.cert.CertPath',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.security.Timestamp',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],
		# },
		# {
		# 	'name' : 'java.security.cert.CertPath',
		# 	'tags' : ['_abstract', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'equals',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hashCode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getCertificates',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.util.List',
		# 						'children' : [{'type': 'java.security.cert.Certificate', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getType',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getEncoded',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_byte_array_type',
		# 						'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
		# 						'converter' : 'convert__byte_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getEncoded',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_byte_array_type',
		# 						'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
		# 						'converter' : 'convert__byte_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getEncodings',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.util.Iterator',
		# 						'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.security.cert.Certificate',
		# 	'tags' : ['_abstract', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'equals',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hashCode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getType',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getEncoded',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_byte_array_type',
		# 						'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
		# 						'converter' : 'convert__byte_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'verify',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.security.PublicKey',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'verify',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.security.PublicKey',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getPublicKey',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.security.PublicKey',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.security.PublicKey',
		# 	'tags' : ['_callback', '_interface', '_proxy'],
		# 	'fields' : [
		# 		{
		# 			'name' : 'serialVersionUID',
		# 			'tags' : ['_proxy', '_static'],
		# 			'type' : 
		# 			{
		# 					'type' : 'long',
		# 					'converter' : 'convert_long',
		# 			},
		# 		},
		# 	],	
		# 	'functions' : [
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.security.Timestamp',
		# 	'tags' : ['_instance', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'equals',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hashCode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getSignerCertPath',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.security.cert.CertPath',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getTimestamp',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.util.Date',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 		{
		# 			'name' : 'java.security.Timestamp',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.util.Date',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.security.cert.CertPath',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],
		# },
		# {
		# 	'name' : 'java.util.Date',
		# 	'tags' : ['_instance', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'equals',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hashCode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'clone',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'compareTo',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.util.Date',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'after',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.util.Date',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'before',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.util.Date',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'parse',
		# 			'tags' : ['_proxy', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'long',
		# 						'converter' : 'convert_long',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setTime',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'long',
		# 						'converter' : 'convert_long',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getTime',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'long',
		# 						'converter' : 'convert_long',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getYear',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getMonth',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDate',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getHours',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getMinutes',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getSeconds',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'UTC',
		# 			'tags' : ['_proxy', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'long',
		# 						'converter' : 'convert_long',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setDate',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setMonth',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setHours',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setMinutes',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setSeconds',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setYear',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDay',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toLocaleString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toGMTString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getTimezoneOffset',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 		{
		# 			'name' : 'java.util.Date',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 			],
		# 		},
		# 		{
		# 			'name' : 'java.util.Date',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'long',
		# 						'converter' : 'convert_long',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'java.util.Date',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'java.util.Date',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'java.util.Date',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'java.util.Date',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],
		# },
		# {
		# 	'name' : 'java.security.Principal',
		# 	'tags' : ['_callback', '_interface', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'equals',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hashCode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getName',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.nio.ByteBuffer',
		# 	'tags' : ['_abstract', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'get',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'byte',
		# 						'converter' : 'convert_byte',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'get',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_byte_array_type',
		# 						'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
		# 						'converter' : 'convert__byte_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'get',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_byte_array_type',
		# 						'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
		# 						'converter' : 'convert__byte_array_type',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'get',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'byte',
		# 						'converter' : 'convert_byte',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_byte_array_type',
		# 						'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
		# 						'converter' : 'convert__byte_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'byte',
		# 						'converter' : 'convert_byte',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'byte',
		# 						'converter' : 'convert_byte',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_byte_array_type',
		# 						'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
		# 						'converter' : 'convert__byte_array_type',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'equals',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hashCode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'compareTo',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getShort',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'short',
		# 						'converter' : 'convert_short',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getShort',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'short',
		# 						'converter' : 'convert_short',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'putShort',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'short',
		# 						'converter' : 'convert_short',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'putShort',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'short',
		# 						'converter' : 'convert_short',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getChar',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'char',
		# 						'converter' : 'convert_char',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getChar',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'char',
		# 						'converter' : 'convert_char',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'putChar',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'char',
		# 						'converter' : 'convert_char',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'putChar',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'char',
		# 						'converter' : 'convert_char',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getInt',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getInt',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'putInt',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'putInt',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getLong',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'long',
		# 						'converter' : 'convert_long',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getLong',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'long',
		# 						'converter' : 'convert_long',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'putLong',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'long',
		# 						'converter' : 'convert_long',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'putLong',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'long',
		# 						'converter' : 'convert_long',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getFloat',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'float',
		# 						'converter' : 'convert_float',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getFloat',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'float',
		# 						'converter' : 'convert_float',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'putFloat',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'float',
		# 						'converter' : 'convert_float',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'putFloat',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'float',
		# 						'converter' : 'convert_float',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDouble',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'double',
		# 						'converter' : 'convert_double',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDouble',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'double',
		# 						'converter' : 'convert_double',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'putDouble',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'double',
		# 						'converter' : 'convert_double',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'putDouble',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'double',
		# 						'converter' : 'convert_double',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isDirect',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hasArray',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'array',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_byte_array_type',
		# 						'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
		# 						'converter' : 'convert__byte_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'arrayOffset',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'wrap',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : '_byte_array_type',
		# 						'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
		# 						'converter' : 'convert__byte_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'wrap',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : '_byte_array_type',
		# 						'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
		# 						'converter' : 'convert__byte_array_type',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'allocate',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'duplicate',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'allocateDirect',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'slice',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'asReadOnlyBuffer',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'compact',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'order',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.nio.ByteOrder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'order',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteOrder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'asCharBuffer',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.CharBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'asShortBuffer',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ShortBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'asIntBuffer',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.IntBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'asLongBuffer',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.LongBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'asFloatBuffer',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.FloatBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'asDoubleBuffer',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.DoubleBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.nio.ByteOrder',
		# 	'tags' : ['_instance', '_proxy', '_singleton'],
		# 	'fields' : [
		# 		{
		# 			'name' : 'BIG_ENDIAN',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'type' : 
		# 			{
		# 					'type' : 'java.nio.ByteOrder',
		# 					'converter' : 'convert_proxy',
		# 			},
		# 		},
		# 		{
		# 			'name' : 'LITTLE_ENDIAN',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'type' : 
		# 			{
		# 					'type' : 'java.nio.ByteOrder',
		# 					'converter' : 'convert_proxy',
		# 			},
		# 		},
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'toString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'nativeOrder',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteOrder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.nio.CharBuffer',
		# 	'tags' : ['_abstract', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'get',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_char_array_type',
		# 						'children' : [{'type': 'char', 'converter': 'convert_char'}],
		# 						'converter' : 'convert__char_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.CharBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'get',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_char_array_type',
		# 						'children' : [{'type': 'char', 'converter': 'convert_char'}],
		# 						'converter' : 'convert__char_array_type',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.CharBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'get',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'char',
		# 						'converter' : 'convert_char',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'get',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'char',
		# 						'converter' : 'convert_char',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'char',
		# 						'converter' : 'convert_char',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.CharBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'char',
		# 						'converter' : 'convert_char',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.CharBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.CharBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.CharBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_char_array_type',
		# 						'children' : [{'type': 'char', 'converter': 'convert_char'}],
		# 						'converter' : 'convert__char_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.CharBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_char_array_type',
		# 						'children' : [{'type': 'char', 'converter': 'convert_char'}],
		# 						'converter' : 'convert__char_array_type',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.CharBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.nio.CharBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.CharBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'equals',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'append',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.CharSequence',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.CharBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'append',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'char',
		# 						'converter' : 'convert_char',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.CharBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'append',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.CharSequence',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.CharBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hashCode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'compareTo',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.nio.CharBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'length',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'charAt',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'char',
		# 						'converter' : 'convert_char',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'subSequence',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.CharSequence',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isDirect',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hasArray',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'array',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_char_array_type',
		# 						'children' : [{'type': 'char', 'converter': 'convert_char'}],
		# 						'converter' : 'convert__char_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'arrayOffset',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'wrap',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.CharSequence',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.CharBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'wrap',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : '_char_array_type',
		# 						'children' : [{'type': 'char', 'converter': 'convert_char'}],
		# 						'converter' : 'convert__char_array_type',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.CharBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'wrap',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : '_char_array_type',
		# 						'children' : [{'type': 'char', 'converter': 'convert_char'}],
		# 						'converter' : 'convert__char_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.CharBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'wrap',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.CharSequence',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.CharBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'read',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.nio.CharBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'allocate',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.CharBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'duplicate',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.CharBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'slice',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.CharBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'asReadOnlyBuffer',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.CharBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'compact',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.CharBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'order',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteOrder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.lang.CharSequence',
		# 	'tags' : ['_callback', '_interface', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'toString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'length',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'charAt',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'char',
		# 						'converter' : 'convert_char',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'subSequence',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.CharSequence',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.nio.ShortBuffer',
		# 	'tags' : ['_abstract', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'get',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'short',
		# 						'converter' : 'convert_short',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'get',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_short_array_type',
		# 						'children' : [{'type': 'short', 'converter': 'convert_short'}],
		# 						'converter' : 'convert__short_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ShortBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'get',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_short_array_type',
		# 						'children' : [{'type': 'short', 'converter': 'convert_short'}],
		# 						'converter' : 'convert__short_array_type',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ShortBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'get',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'short',
		# 						'converter' : 'convert_short',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.nio.ShortBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ShortBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'short',
		# 						'converter' : 'convert_short',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ShortBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'short',
		# 						'converter' : 'convert_short',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ShortBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_short_array_type',
		# 						'children' : [{'type': 'short', 'converter': 'convert_short'}],
		# 						'converter' : 'convert__short_array_type',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ShortBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_short_array_type',
		# 						'children' : [{'type': 'short', 'converter': 'convert_short'}],
		# 						'converter' : 'convert__short_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ShortBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'equals',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hashCode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'compareTo',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.nio.ShortBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isDirect',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hasArray',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'array',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_short_array_type',
		# 						'children' : [{'type': 'short', 'converter': 'convert_short'}],
		# 						'converter' : 'convert__short_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'arrayOffset',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'wrap',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : '_short_array_type',
		# 						'children' : [{'type': 'short', 'converter': 'convert_short'}],
		# 						'converter' : 'convert__short_array_type',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ShortBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'wrap',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : '_short_array_type',
		# 						'children' : [{'type': 'short', 'converter': 'convert_short'}],
		# 						'converter' : 'convert__short_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ShortBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'allocate',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ShortBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'duplicate',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ShortBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'slice',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ShortBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'asReadOnlyBuffer',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ShortBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'compact',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ShortBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'order',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteOrder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.nio.IntBuffer',
		# 	'tags' : ['_abstract', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'get',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'get',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_int_array_type',
		# 						'children' : [{'type': 'int', 'converter': 'convert_int'}],
		# 						'converter' : 'convert__int_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.IntBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'get',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_int_array_type',
		# 						'children' : [{'type': 'int', 'converter': 'convert_int'}],
		# 						'converter' : 'convert__int_array_type',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.IntBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'get',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.nio.IntBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.IntBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.IntBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.IntBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_int_array_type',
		# 						'children' : [{'type': 'int', 'converter': 'convert_int'}],
		# 						'converter' : 'convert__int_array_type',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.IntBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_int_array_type',
		# 						'children' : [{'type': 'int', 'converter': 'convert_int'}],
		# 						'converter' : 'convert__int_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.IntBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'equals',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hashCode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'compareTo',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.nio.IntBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isDirect',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hasArray',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'array',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_int_array_type',
		# 						'children' : [{'type': 'int', 'converter': 'convert_int'}],
		# 						'converter' : 'convert__int_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'arrayOffset',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'wrap',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : '_int_array_type',
		# 						'children' : [{'type': 'int', 'converter': 'convert_int'}],
		# 						'converter' : 'convert__int_array_type',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.IntBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'wrap',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : '_int_array_type',
		# 						'children' : [{'type': 'int', 'converter': 'convert_int'}],
		# 						'converter' : 'convert__int_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.IntBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'allocate',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.IntBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'duplicate',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.IntBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'slice',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.IntBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'asReadOnlyBuffer',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.IntBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'compact',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.IntBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'order',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteOrder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.nio.LongBuffer',
		# 	'tags' : ['_abstract', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'get',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'long',
		# 						'converter' : 'convert_long',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'get',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_long_array_type',
		# 						'children' : [{'type': 'long', 'converter': 'convert_long'}],
		# 						'converter' : 'convert__long_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.LongBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'get',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_long_array_type',
		# 						'children' : [{'type': 'long', 'converter': 'convert_long'}],
		# 						'converter' : 'convert__long_array_type',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.LongBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'get',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'long',
		# 						'converter' : 'convert_long',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.nio.LongBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.LongBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'long',
		# 						'converter' : 'convert_long',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.LongBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'long',
		# 						'converter' : 'convert_long',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.LongBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_long_array_type',
		# 						'children' : [{'type': 'long', 'converter': 'convert_long'}],
		# 						'converter' : 'convert__long_array_type',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.LongBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_long_array_type',
		# 						'children' : [{'type': 'long', 'converter': 'convert_long'}],
		# 						'converter' : 'convert__long_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.LongBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'equals',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hashCode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'compareTo',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.nio.LongBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isDirect',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hasArray',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'array',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_long_array_type',
		# 						'children' : [{'type': 'long', 'converter': 'convert_long'}],
		# 						'converter' : 'convert__long_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'arrayOffset',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'wrap',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : '_long_array_type',
		# 						'children' : [{'type': 'long', 'converter': 'convert_long'}],
		# 						'converter' : 'convert__long_array_type',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.LongBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'wrap',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : '_long_array_type',
		# 						'children' : [{'type': 'long', 'converter': 'convert_long'}],
		# 						'converter' : 'convert__long_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.LongBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'allocate',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.LongBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'duplicate',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.LongBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'slice',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.LongBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'asReadOnlyBuffer',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.LongBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'compact',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.LongBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'order',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteOrder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.nio.FloatBuffer',
		# 	'tags' : ['_abstract', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'get',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'float',
		# 						'converter' : 'convert_float',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'get',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_float_array_type',
		# 						'children' : [{'type': 'float', 'converter': 'convert_float'}],
		# 						'converter' : 'convert__float_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.FloatBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'get',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_float_array_type',
		# 						'children' : [{'type': 'float', 'converter': 'convert_float'}],
		# 						'converter' : 'convert__float_array_type',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.FloatBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'get',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'float',
		# 						'converter' : 'convert_float',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.nio.FloatBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.FloatBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'float',
		# 						'converter' : 'convert_float',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.FloatBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'float',
		# 						'converter' : 'convert_float',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.FloatBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_float_array_type',
		# 						'children' : [{'type': 'float', 'converter': 'convert_float'}],
		# 						'converter' : 'convert__float_array_type',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.FloatBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_float_array_type',
		# 						'children' : [{'type': 'float', 'converter': 'convert_float'}],
		# 						'converter' : 'convert__float_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.FloatBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'equals',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hashCode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'compareTo',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.nio.FloatBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isDirect',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hasArray',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'array',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_float_array_type',
		# 						'children' : [{'type': 'float', 'converter': 'convert_float'}],
		# 						'converter' : 'convert__float_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'arrayOffset',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'wrap',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : '_float_array_type',
		# 						'children' : [{'type': 'float', 'converter': 'convert_float'}],
		# 						'converter' : 'convert__float_array_type',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.FloatBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'wrap',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : '_float_array_type',
		# 						'children' : [{'type': 'float', 'converter': 'convert_float'}],
		# 						'converter' : 'convert__float_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.FloatBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'allocate',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.FloatBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'duplicate',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.FloatBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'slice',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.FloatBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'asReadOnlyBuffer',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.FloatBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'compact',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.FloatBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'order',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteOrder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.nio.DoubleBuffer',
		# 	'tags' : ['_abstract', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'get',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'double',
		# 						'converter' : 'convert_double',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'get',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_double_array_type',
		# 						'children' : [{'type': 'double', 'converter': 'convert_double'}],
		# 						'converter' : 'convert__double_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.DoubleBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'get',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_double_array_type',
		# 						'children' : [{'type': 'double', 'converter': 'convert_double'}],
		# 						'converter' : 'convert__double_array_type',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.DoubleBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'get',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'double',
		# 						'converter' : 'convert_double',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.nio.DoubleBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.DoubleBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'double',
		# 						'converter' : 'convert_double',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.DoubleBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'double',
		# 						'converter' : 'convert_double',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.DoubleBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_double_array_type',
		# 						'children' : [{'type': 'double', 'converter': 'convert_double'}],
		# 						'converter' : 'convert__double_array_type',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.DoubleBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'put',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_double_array_type',
		# 						'children' : [{'type': 'double', 'converter': 'convert_double'}],
		# 						'converter' : 'convert__double_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.DoubleBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'equals',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hashCode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'compareTo',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.nio.DoubleBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isDirect',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hasArray',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'array',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_double_array_type',
		# 						'children' : [{'type': 'double', 'converter': 'convert_double'}],
		# 						'converter' : 'convert__double_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'arrayOffset',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'wrap',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : '_double_array_type',
		# 						'children' : [{'type': 'double', 'converter': 'convert_double'}],
		# 						'converter' : 'convert__double_array_type',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.DoubleBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'wrap',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : '_double_array_type',
		# 						'children' : [{'type': 'double', 'converter': 'convert_double'}],
		# 						'converter' : 'convert__double_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.DoubleBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'allocate',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.DoubleBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'duplicate',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.DoubleBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'slice',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.DoubleBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'asReadOnlyBuffer',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.DoubleBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'compact',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.DoubleBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'order',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteOrder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.util.SortedMap',
		# 	'tags' : ['_callback', '_interface', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'values',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.util.Collection',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'entrySet',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.util.Set',
		# 						'children' : [{'type': 'java.util.Map$Entry', 'children': [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}, {'type': 'java.lang.Object', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'keySet',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.util.Set',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'comparator',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.util.Comparator',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'subMap',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.util.SortedMap',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}, {'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'headMap',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.util.SortedMap',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}, {'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'tailMap',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.util.SortedMap',
		# 						'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}, {'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'firstKey',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'lastKey',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.util.Comparator',
		# 	'tags' : ['_callback', '_interface', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'equals',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'compare',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.util.Locale',
		# 	'tags' : ['_instance', '_proxy'],
		# 	'fields' : [
		# 		{
		# 			'name' : 'ENGLISH',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'type' : 
		# 			{
		# 					'type' : 'java.util.Locale',
		# 					'converter' : 'convert_proxy',
		# 			},
		# 		},
		# 		{
		# 			'name' : 'FRENCH',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'type' : 
		# 			{
		# 					'type' : 'java.util.Locale',
		# 					'converter' : 'convert_proxy',
		# 			},
		# 		},
		# 		{
		# 			'name' : 'GERMAN',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'type' : 
		# 			{
		# 					'type' : 'java.util.Locale',
		# 					'converter' : 'convert_proxy',
		# 			},
		# 		},
		# 		{
		# 			'name' : 'ITALIAN',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'type' : 
		# 			{
		# 					'type' : 'java.util.Locale',
		# 					'converter' : 'convert_proxy',
		# 			},
		# 		},
		# 		{
		# 			'name' : 'JAPANESE',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'type' : 
		# 			{
		# 					'type' : 'java.util.Locale',
		# 					'converter' : 'convert_proxy',
		# 			},
		# 		},
		# 		{
		# 			'name' : 'KOREAN',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'type' : 
		# 			{
		# 					'type' : 'java.util.Locale',
		# 					'converter' : 'convert_proxy',
		# 			},
		# 		},
		# 		{
		# 			'name' : 'CHINESE',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'type' : 
		# 			{
		# 					'type' : 'java.util.Locale',
		# 					'converter' : 'convert_proxy',
		# 			},
		# 		},
		# 		{
		# 			'name' : 'SIMPLIFIED_CHINESE',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'type' : 
		# 			{
		# 					'type' : 'java.util.Locale',
		# 					'converter' : 'convert_proxy',
		# 			},
		# 		},
		# 		{
		# 			'name' : 'TRADITIONAL_CHINESE',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'type' : 
		# 			{
		# 					'type' : 'java.util.Locale',
		# 					'converter' : 'convert_proxy',
		# 			},
		# 		},
		# 		{
		# 			'name' : 'FRANCE',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'type' : 
		# 			{
		# 					'type' : 'java.util.Locale',
		# 					'converter' : 'convert_proxy',
		# 			},
		# 		},
		# 		{
		# 			'name' : 'GERMANY',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'type' : 
		# 			{
		# 					'type' : 'java.util.Locale',
		# 					'converter' : 'convert_proxy',
		# 			},
		# 		},
		# 		{
		# 			'name' : 'ITALY',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'type' : 
		# 			{
		# 					'type' : 'java.util.Locale',
		# 					'converter' : 'convert_proxy',
		# 			},
		# 		},
		# 		{
		# 			'name' : 'JAPAN',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'type' : 
		# 			{
		# 					'type' : 'java.util.Locale',
		# 					'converter' : 'convert_proxy',
		# 			},
		# 		},
		# 		{
		# 			'name' : 'KOREA',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'type' : 
		# 			{
		# 					'type' : 'java.util.Locale',
		# 					'converter' : 'convert_proxy',
		# 			},
		# 		},
		# 		{
		# 			'name' : 'CHINA',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'type' : 
		# 			{
		# 					'type' : 'java.util.Locale',
		# 					'converter' : 'convert_proxy',
		# 			},
		# 		},
		# 		{
		# 			'name' : 'PRC',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'type' : 
		# 			{
		# 					'type' : 'java.util.Locale',
		# 					'converter' : 'convert_proxy',
		# 			},
		# 		},
		# 		{
		# 			'name' : 'TAIWAN',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'type' : 
		# 			{
		# 					'type' : 'java.util.Locale',
		# 					'converter' : 'convert_proxy',
		# 			},
		# 		},
		# 		{
		# 			'name' : 'UK',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'type' : 
		# 			{
		# 					'type' : 'java.util.Locale',
		# 					'converter' : 'convert_proxy',
		# 			},
		# 		},
		# 		{
		# 			'name' : 'US',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'type' : 
		# 			{
		# 					'type' : 'java.util.Locale',
		# 					'converter' : 'convert_proxy',
		# 			},
		# 		},
		# 		{
		# 			'name' : 'CANADA',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'type' : 
		# 			{
		# 					'type' : 'java.util.Locale',
		# 					'converter' : 'convert_proxy',
		# 			},
		# 		},
		# 		{
		# 			'name' : 'CANADA_FRENCH',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'type' : 
		# 			{
		# 					'type' : 'java.util.Locale',
		# 					'converter' : 'convert_proxy',
		# 			},
		# 		},
		# 		{
		# 			'name' : 'ROOT',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'type' : 
		# 			{
		# 					'type' : 'java.util.Locale',
		# 					'converter' : 'convert_proxy',
		# 			},
		# 		},
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'equals',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'toString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'hashCode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'clone',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getLanguage',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDefault',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.util.Locale',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setDefault',
		# 			'tags' : ['_proxy', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.util.Locale',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getAvailableLocales',
		# 			'tags' : ['_proxy', '_static'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.util.Locale', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getISOCountries',
		# 			'tags' : ['_proxy', '_static'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getISOLanguages',
		# 			'tags' : ['_proxy', '_static'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_object_array_type',
		# 						'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
		# 						'converter' : 'convert__object_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getCountry',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getVariant',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getISO3Language',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getISO3Country',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDisplayLanguage',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.util.Locale',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDisplayLanguage',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDisplayCountry',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.util.Locale',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDisplayCountry',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDisplayVariant',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDisplayVariant',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.util.Locale',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDisplayName',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.util.Locale',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getDisplayName',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 		{
		# 			'name' : 'java.util.Locale',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'java.util.Locale',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'java.util.Locale',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],
		# },
		# {
		# 	'name' : 'java.nio.charset.CharsetDecoder',
		# 	'tags' : ['_abstract', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'charset',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.charset.Charset',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'decode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.nio.CharBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.charset.CoderResult',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'decode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.CharBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'flush',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.nio.CharBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.charset.CoderResult',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'reset',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.charset.CharsetDecoder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'onMalformedInput',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.nio.charset.CodingErrorAction',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.charset.CharsetDecoder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'onUnmappableCharacter',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.nio.charset.CodingErrorAction',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.charset.CharsetDecoder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'replacement',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'malformedInputAction',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.charset.CodingErrorAction',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'unmappableCharacterAction',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.charset.CodingErrorAction',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'replaceWith',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.charset.CharsetDecoder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'maxCharsPerByte',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'float',
		# 						'converter' : 'convert_float',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'averageCharsPerByte',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'float',
		# 						'converter' : 'convert_float',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isAutoDetecting',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isCharsetDetected',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'detectedCharset',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.charset.Charset',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.nio.charset.CoderResult',
		# 	'tags' : ['_instance', '_proxy', '_singleton'],
		# 	'fields' : [
		# 		{
		# 			'name' : 'UNDERFLOW',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'type' : 
		# 			{
		# 					'type' : 'java.nio.charset.CoderResult',
		# 					'converter' : 'convert_proxy',
		# 			},
		# 		},
		# 		{
		# 			'name' : 'OVERFLOW',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'type' : 
		# 			{
		# 					'type' : 'java.nio.charset.CoderResult',
		# 					'converter' : 'convert_proxy',
		# 			},
		# 		},
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'toString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'length',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'throwException',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isUnderflow',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isError',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isOverflow',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'malformedForLength',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.charset.CoderResult',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isMalformed',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isUnmappable',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'unmappableForLength',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.charset.CoderResult',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.nio.charset.CodingErrorAction',
		# 	'tags' : ['_instance', '_proxy', '_singleton'],
		# 	'fields' : [
		# 		{
		# 			'name' : 'IGNORE',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'type' : 
		# 			{
		# 					'type' : 'java.nio.charset.CodingErrorAction',
		# 					'converter' : 'convert_proxy',
		# 			},
		# 		},
		# 		{
		# 			'name' : 'REPLACE',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'type' : 
		# 			{
		# 					'type' : 'java.nio.charset.CodingErrorAction',
		# 					'converter' : 'convert_proxy',
		# 			},
		# 		},
		# 		{
		# 			'name' : 'REPORT',
		# 			'tags' : ['_proxy', '_singleton', '_static'],
		# 			'type' : 
		# 			{
		# 					'type' : 'java.nio.charset.CodingErrorAction',
		# 					'converter' : 'convert_proxy',
		# 			},
		# 		},
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'toString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.nio.charset.CharsetEncoder',
		# 	'tags' : ['_abstract', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'charset',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.charset.Charset',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'encode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.nio.CharBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.charset.CoderResult',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'encode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.nio.CharBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'flush',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.nio.ByteBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.charset.CoderResult',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'reset',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.charset.CharsetEncoder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'canEncode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'char',
		# 						'converter' : 'convert_char',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'canEncode',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.CharSequence',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'onMalformedInput',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.nio.charset.CodingErrorAction',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.charset.CharsetEncoder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'onUnmappableCharacter',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.nio.charset.CodingErrorAction',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.charset.CharsetEncoder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'maxBytesPerChar',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'float',
		# 						'converter' : 'convert_float',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'isLegalReplacement',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_byte_array_type',
		# 						'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
		# 						'converter' : 'convert__byte_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'averageBytesPerChar',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'float',
		# 						'converter' : 'convert_float',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'replacement',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : '_byte_array_type',
		# 						'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
		# 						'converter' : 'convert__byte_array_type',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'malformedInputAction',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.charset.CodingErrorAction',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'unmappableCharacterAction',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.charset.CodingErrorAction',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'replaceWith',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_byte_array_type',
		# 						'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
		# 						'converter' : 'convert__byte_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.nio.charset.CharsetEncoder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 	],
		# },
		# {
		# 	'name' : 'java.lang.StringBuffer',
		# 	'tags' : ['_instance', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'toString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'append',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_char_array_type',
		# 						'children' : [{'type': 'char', 'converter': 'convert_char'}],
		# 						'converter' : 'convert__char_array_type',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'append',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'append',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'append',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.StringBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'append',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.CharSequence',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'append',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.CharSequence',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'append',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_char_array_type',
		# 						'children' : [{'type': 'char', 'converter': 'convert_char'}],
		# 						'converter' : 'convert__char_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'append',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'append',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'char',
		# 						'converter' : 'convert_char',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'append',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'append',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'long',
		# 						'converter' : 'convert_long',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'append',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'float',
		# 						'converter' : 'convert_float',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'append',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'double',
		# 						'converter' : 'convert_double',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'indexOf',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'indexOf',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'length',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'charAt',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'char',
		# 						'converter' : 'convert_char',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'codePointAt',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'codePointBefore',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'codePointCount',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'offsetByCodePoints',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'getChars',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : '_char_array_type',
		# 						'children' : [{'type': 'char', 'converter': 'convert_char'}],
		# 						'converter' : 'convert__char_array_type',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'lastIndexOf',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'lastIndexOf',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'substring',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'substring',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'subSequence',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.CharSequence',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'replace',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'capacity',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'ensureCapacity',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'trimToSize',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setLength',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'setCharAt',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'char',
		# 						'converter' : 'convert_char',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'void',
		# 						'converter' : 'convert_void',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'appendCodePoint',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'delete',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'deleteCharAt',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'insert',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'long',
		# 						'converter' : 'convert_long',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'insert',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'insert',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'char',
		# 						'converter' : 'convert_char',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'insert',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'insert',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'java.lang.CharSequence',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'insert',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'java.lang.CharSequence',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'insert',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : '_char_array_type',
		# 						'children' : [{'type': 'char', 'converter': 'convert_char'}],
		# 						'converter' : 'convert__char_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'insert',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : '_char_array_type',
		# 						'children' : [{'type': 'char', 'converter': 'convert_char'}],
		# 						'converter' : 'convert__char_array_type',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'insert',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'double',
		# 						'converter' : 'convert_double',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'insert',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'float',
		# 						'converter' : 'convert_float',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'insert',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'insert',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'reverse',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 		{
		# 			'name' : 'java.lang.StringBuffer',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 			],
		# 		},
		# 		{
		# 			'name' : 'java.lang.StringBuffer',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'java.lang.StringBuffer',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'java.lang.StringBuffer',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.CharSequence',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],
		# },
		# {
		# 	'name' : 'java.lang.StringBuilder',
		# 	'tags' : ['_instance', '_proxy'],
		# 	'fields' : [
		# 	],	
		# 	'functions' : [
		# 		{
		# 			'name' : 'toString',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'append',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.CharSequence',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuilder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'append',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.CharSequence',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuilder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'append',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_char_array_type',
		# 						'children' : [{'type': 'char', 'converter': 'convert_char'}],
		# 						'converter' : 'convert__char_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuilder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'append',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuilder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'append',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'char',
		# 						'converter' : 'convert_char',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuilder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'append',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuilder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'append',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'long',
		# 						'converter' : 'convert_long',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuilder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'append',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'float',
		# 						'converter' : 'convert_float',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuilder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'append',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'double',
		# 						'converter' : 'convert_double',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuilder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'append',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : '_char_array_type',
		# 						'children' : [{'type': 'char', 'converter': 'convert_char'}],
		# 						'converter' : 'convert__char_array_type',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuilder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'append',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuilder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'append',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuilder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'append',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.StringBuffer',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuilder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'indexOf',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'indexOf',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'lastIndexOf',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'lastIndexOf',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'replace',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuilder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'appendCodePoint',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuilder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'delete',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuilder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'deleteCharAt',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuilder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'insert',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'float',
		# 						'converter' : 'convert_float',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuilder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'insert',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'double',
		# 						'converter' : 'convert_double',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuilder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'insert',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : '_char_array_type',
		# 						'children' : [{'type': 'char', 'converter': 'convert_char'}],
		# 						'converter' : 'convert__char_array_type',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuilder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'insert',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'java.lang.Object',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuilder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'insert',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuilder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'insert',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : '_char_array_type',
		# 						'children' : [{'type': 'char', 'converter': 'convert_char'}],
		# 						'converter' : 'convert__char_array_type',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuilder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'insert',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'java.lang.CharSequence',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuilder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'insert',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'java.lang.CharSequence',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuilder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'insert',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'boolean',
		# 						'converter' : 'convert_boolean',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuilder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'insert',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'char',
		# 						'converter' : 'convert_char',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuilder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'insert',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuilder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'insert',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 				{
		# 						'type' : 'long',
		# 						'converter' : 'convert_long',
		# 				},
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuilder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'reverse',
		# 			'tags' : ['_instance', '_proxy'],
		# 			'params' : [
		# 			],
		# 			'returns' : [
		# 				{
		# 						'type' : 'java.lang.StringBuilder',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],	
		# 	'constructors' : [	
		# 		{
		# 			'name' : 'java.lang.StringBuilder',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'int',
		# 						'converter' : 'convert_int',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'java.lang.StringBuilder',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 			],
		# 		},
		# 		{
		# 			'name' : 'java.lang.StringBuilder',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.String',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 		{
		# 			'name' : 'java.lang.StringBuilder',
		# 			'tags' : ['_proxy'],
		# 			'params' : [
		# 				{
		# 						'type' : 'java.lang.CharSequence',
		# 						'converter' : 'convert_proxy',
		# 				},
		# 			],
		# 		},
		# 	],
		# },
	],
}
