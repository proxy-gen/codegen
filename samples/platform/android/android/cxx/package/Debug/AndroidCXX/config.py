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
			'name' : 'java.math.BigDecimal',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'ZERO',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'java.math.BigDecimal',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'ONE',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'java.math.BigDecimal',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'TEN',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'java.math.BigDecimal',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'ROUND_UP',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'ROUND_DOWN',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'ROUND_CEILING',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'ROUND_FLOOR',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'ROUND_HALF_UP',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'ROUND_HALF_DOWN',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'ROUND_HALF_EVEN',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'ROUND_UNNECESSARY',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'add',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.math.MathContext',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'add',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
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
				{
					'name' : 'hashCode',
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
					'name' : 'abs',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'abs',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.math.MathContext',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'pow',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'pow',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'java.math.MathContext',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'min',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'max',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'compareTo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.math.BigDecimal',
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
					'name' : 'intValue',
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
					'name' : 'longValue',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
				},
				{
					'name' : 'floatValue',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'doubleValue',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'double',
								'converter' : 'convert_double',
						},
					],
				},
				{
					'name' : 'valueOf',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'double',
								'converter' : 'convert_double',
						},
					],
					'returns' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'valueOf',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
					'returns' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'valueOf',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'signum',
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
					'name' : 'round',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.math.MathContext',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'ulp',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'scale',
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
					'name' : 'precision',
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
					'name' : 'subtract',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'subtract',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.math.MathContext',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'multiply',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'multiply',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.math.MathContext',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'divide',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.math.MathContext',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'divide',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'java.math.RoundingMode',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'divide',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'divide',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.math.RoundingMode',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'divide',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'divide',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.math.BigDecimal',
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
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'divideToIntegralValue',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'divideToIntegralValue',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.math.MathContext',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'remainder',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'remainder',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.math.MathContext',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'divideAndRemainder',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.math.MathContext',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.math.BigDecimal', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'divideAndRemainder',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.math.BigDecimal', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'negate',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'negate',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.math.MathContext',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'plus',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.math.MathContext',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'plus',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'unscaledValue',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.math.BigInteger',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setScale',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'java.math.RoundingMode',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setScale',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setScale',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'movePointLeft',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'movePointRight',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'scaleByPowerOfTen',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'stripTrailingZeros',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.math.BigDecimal',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'toEngineeringString',
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
				{
					'name' : 'toPlainString',
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
				{
					'name' : 'toBigInteger',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.math.BigInteger',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'toBigIntegerExact',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.math.BigInteger',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'longValueExact',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
				},
				{
					'name' : 'intValueExact',
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
					'name' : 'shortValueExact',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'short',
								'converter' : 'convert_short',
						},
					],
				},
				{
					'name' : 'byteValueExact',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'byte',
								'converter' : 'convert_byte',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'java.math.BigDecimal',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : '_char_array_type',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array_type',
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
					'name' : 'java.math.BigDecimal',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : '_char_array_type',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array_type',
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
								'type' : 'java.math.MathContext',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'java.math.BigDecimal',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : '_char_array_type',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array_type',
						},
					],
				},
				{
					'name' : 'java.math.BigDecimal',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : '_char_array_type',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array_type',
						},
						{
								'type' : 'java.math.MathContext',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'java.math.BigDecimal',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'java.math.BigDecimal',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.math.MathContext',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'java.math.BigDecimal',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'double',
								'converter' : 'convert_double',
						},
					],
				},
				{
					'name' : 'java.math.BigDecimal',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'double',
								'converter' : 'convert_double',
						},
						{
								'type' : 'java.math.MathContext',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'java.math.BigDecimal',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.math.BigInteger',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'java.math.BigDecimal',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.math.BigInteger',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.math.MathContext',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'java.math.BigDecimal',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.math.BigInteger',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'java.math.BigDecimal',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.math.BigInteger',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'java.math.MathContext',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'java.math.BigDecimal',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'java.math.BigDecimal',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'java.math.MathContext',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'java.math.BigDecimal',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
				},
				{
					'name' : 'java.math.BigDecimal',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
						{
								'type' : 'java.math.MathContext',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'java.lang.String',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'CASE_INSENSITIVE_ORDER',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.util.Comparator',
							'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
							'converter' : 'convert_proxy',
					},
				},
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
				{
					'name' : 'hashCode',
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
					'name' : 'compareTo',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'indexOf',
					'tags' : ['_instance', '_proxy'],
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
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'indexOf',
					'tags' : ['_instance', '_proxy'],
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
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'valueOf',
					'tags' : ['_proxy', '_singleton', '_static'],
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
					'tags' : ['_proxy', '_singleton', '_static'],
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
					'tags' : ['_proxy', '_singleton', '_static'],
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
					'tags' : ['_proxy', '_singleton', '_static'],
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
				{
					'name' : 'valueOf',
					'tags' : ['_proxy', '_singleton', '_static'],
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
					'tags' : ['_proxy', '_singleton', '_static'],
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
					'tags' : ['_proxy', '_singleton', '_static'],
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
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : '_char_array_type',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array_type',
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
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : '_char_array_type',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array_type',
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
					'name' : 'isEmpty',
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
					'name' : 'charAt',
					'tags' : ['_instance', '_proxy'],
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
					'tags' : ['_instance', '_proxy'],
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
					'tags' : ['_instance', '_proxy'],
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
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'offsetByCodePoints',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getChars',
					'tags' : ['_instance', '_proxy'],
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
								'type' : '_char_array_type',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array_type',
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
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : '_byte_array_type',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array_type',
						},
					],
				},
				{
					'name' : 'getBytes',
					'tags' : ['_instance', '_proxy'],
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
								'type' : '_byte_array_type',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array_type',
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
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.nio.charset.Charset',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : '_byte_array_type',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array_type',
						},
					],
				},
				{
					'name' : 'getBytes',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_byte_array_type',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array_type',
						},
					],
				},
				{
					'name' : 'contentEquals',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'contentEquals',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'equalsIgnoreCase',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'compareToIgnoreCase',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'regionMatches',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'regionMatches',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'startsWith',
					'tags' : ['_instance', '_proxy'],
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
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'endsWith',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'lastIndexOf',
					'tags' : ['_instance', '_proxy'],
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
					'tags' : ['_instance', '_proxy'],
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
					'tags' : ['_instance', '_proxy'],
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
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'substring',
					'tags' : ['_instance', '_proxy'],
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
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'subSequence',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'concat',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'replace',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'replace',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'matches',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'contains',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'replaceFirst',
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
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'replaceAll',
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
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'split',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'split',
					'tags' : ['_instance', '_proxy'],
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
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'toLowerCase',
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
				{
					'name' : 'toLowerCase',
					'tags' : ['_instance', '_proxy'],
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
					'tags' : ['_instance', '_proxy'],
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
				{
					'name' : 'trim',
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
				{
					'name' : 'toCharArray',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_char_array_type',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array_type',
						},
					],
				},
				{
					'name' : 'format',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
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
					'tags' : ['_proxy', '_singleton', '_static'],
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
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
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
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : '_char_array_type',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array_type',
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
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : '_char_array_type',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array_type',
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
					'name' : 'intern',
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
			],	
			'constructors' : [	
				{
					'name' : 'java.lang.String',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
				{
					'name' : 'java.lang.String',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'java.lang.String',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : '_char_array_type',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array_type',
						},
					],
				},
				{
					'name' : 'java.lang.String',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : '_char_array_type',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array_type',
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
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : '_int_array_type',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array_type',
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
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : '_byte_array_type',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array_type',
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
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : '_byte_array_type',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array_type',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'java.lang.String',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : '_byte_array_type',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array_type',
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
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : '_byte_array_type',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array_type',
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
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : '_byte_array_type',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array_type',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'java.lang.String',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : '_byte_array_type',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array_type',
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
								'type' : '_byte_array_type',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array_type',
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
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : '_byte_array_type',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array_type',
						},
					],
				},
				{
					'name' : 'java.lang.String',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.StringBuffer',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'java.lang.String',
					'tags' : ['_proxy'],
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
			'name' : 'java.net.Proxy$Type',
			'tags' : ['_enum', '_proxy'],
			'fields' : [
				{
					'name' : 'DIRECT',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'java.net.Proxy$Type',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'HTTP',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'java.net.Proxy$Type',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'SOCKS',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'java.net.Proxy$Type',
							'converter' : 'convert_proxy',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'values',
					'tags' : ['_proxy', '_static'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.net.Proxy$Type', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'valueOf',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.net.Proxy$Type',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'org.json.JSONObject',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'NULL',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.Object',
							'converter' : 'convert_proxy',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'get',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'put',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'org.json.JSONObject',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'put',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'org.json.JSONObject',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'put',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'org.json.JSONObject',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'put',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'org.json.JSONObject',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'put',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'org.json.JSONObject',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'toString',
					'tags' : ['_instance', '_proxy'],
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
				{
					'name' : 'getBoolean',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getInt',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getLong',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getDouble',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'remove',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'keys',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.Iterator',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'names',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'org.json.JSONArray',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'quote',
					'tags' : ['_proxy', '_static'],
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
					'name' : 'getString',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'has',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'putOpt',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'org.json.JSONObject',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'accumulate',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'org.json.JSONObject',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'isNull',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'opt',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'optBoolean',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'optBoolean',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'optDouble',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'optDouble',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'optInt',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'optInt',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'optLong',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'optLong',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'optString',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'optString',
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
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getJSONArray',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'org.json.JSONArray',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'optJSONArray',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'org.json.JSONArray',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getJSONObject',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'org.json.JSONObject',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'optJSONObject',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'org.json.JSONObject',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'toJSONArray',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'org.json.JSONArray',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'org.json.JSONArray',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'numberToString',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'java.lang.Number',
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
			],	
			'constructors' : [	
				{
					'name' : 'org.json.JSONObject',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'org.json.JSONObject',
								'converter' : 'convert_proxy',
						},
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'org.json.JSONObject',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'org.json.JSONTokener',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'org.json.JSONObject',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'org.json.JSONObject',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
				{
					'name' : 'org.json.JSONObject',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.util.Map',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'org.json.JSONArray',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'get',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'put',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'org.json.JSONArray',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'put',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
								'type' : 'org.json.JSONArray',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'put',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'org.json.JSONArray',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'put',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
								'type' : 'org.json.JSONArray',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'put',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'org.json.JSONArray',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'put',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
								'type' : 'org.json.JSONArray',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'put',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
					'returns' : [
						{
								'type' : 'org.json.JSONArray',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'put',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'double',
								'converter' : 'convert_double',
						},
					],
					'returns' : [
						{
								'type' : 'org.json.JSONArray',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'put',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'org.json.JSONArray',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'put',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
					'returns' : [
						{
								'type' : 'org.json.JSONArray',
								'converter' : 'convert_proxy',
						},
					],
				},
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
				{
					'name' : 'toString',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'hashCode',
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
					'name' : 'getBoolean',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getInt',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getLong',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'getDouble',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'join',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getString',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'isNull',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'opt',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'optBoolean',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'optBoolean',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'optDouble',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
								'type' : 'double',
								'converter' : 'convert_double',
						},
					],
				},
				{
					'name' : 'optDouble',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'optInt',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'optInt',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'optLong',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
				},
				{
					'name' : 'optLong',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'optString',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'optString',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getJSONArray',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'org.json.JSONArray',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'optJSONArray',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'org.json.JSONArray',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getJSONObject',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'org.json.JSONObject',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'optJSONObject',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'org.json.JSONObject',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'toJSONObject',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'org.json.JSONArray',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'org.json.JSONObject',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'org.json.JSONArray',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'org.json.JSONTokener',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'org.json.JSONArray',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'org.json.JSONArray',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
				{
					'name' : 'org.json.JSONArray',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.util.Collection',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'java.lang.Error',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
				{
					'name' : 'java.lang.Error',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
				{
					'name' : 'java.lang.Error',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'java.lang.Error',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.Throwable',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'java.lang.Error',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Throwable',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'java.util.concurrent.Executor',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'execute',
					'tags' : ['_instance', '_proxy'],
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'java.io.BufferedOutputStream',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'write',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'write',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : '_byte_array_type',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array_type',
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
					'name' : 'flush',
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
			'constructors' : [	
				{
					'name' : 'java.io.BufferedOutputStream',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.io.OutputStream',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'java.io.BufferedOutputStream',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.io.OutputStream',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
			],
		},
		{
			'name' : 'java.io.FileNotFoundException',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
				{
					'name' : 'java.io.FileNotFoundException',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
				{
					'name' : 'java.io.FileNotFoundException',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'java.io.IOException',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
				{
					'name' : 'java.io.IOException',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
				{
					'name' : 'java.io.IOException',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'java.io.IOException',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.Throwable',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'java.io.IOException',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Throwable',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'java.io.Closeable',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'close',
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
			'constructors' : [	
			],
		},
		{
			'name' : 'java.net.HttpURLConnection',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
				{
					'name' : 'HTTP_OK',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'HTTP_CREATED',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'HTTP_ACCEPTED',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'HTTP_NOT_AUTHORITATIVE',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'HTTP_NO_CONTENT',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'HTTP_RESET',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'HTTP_PARTIAL',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'HTTP_MULT_CHOICE',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'HTTP_MOVED_PERM',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'HTTP_MOVED_TEMP',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'HTTP_SEE_OTHER',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'HTTP_NOT_MODIFIED',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'HTTP_USE_PROXY',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'HTTP_BAD_REQUEST',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'HTTP_UNAUTHORIZED',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'HTTP_PAYMENT_REQUIRED',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'HTTP_FORBIDDEN',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'HTTP_NOT_FOUND',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'HTTP_BAD_METHOD',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'HTTP_NOT_ACCEPTABLE',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'HTTP_PROXY_AUTH',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'HTTP_CLIENT_TIMEOUT',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'HTTP_CONFLICT',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'HTTP_GONE',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'HTTP_LENGTH_REQUIRED',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'HTTP_PRECON_FAILED',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'HTTP_ENTITY_TOO_LARGE',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'HTTP_REQ_TOO_LONG',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'HTTP_UNSUPPORTED_TYPE',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'HTTP_SERVER_ERROR',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'HTTP_INTERNAL_ERROR',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'HTTP_NOT_IMPLEMENTED',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'HTTP_BAD_GATEWAY',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'HTTP_UNAVAILABLE',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'HTTP_GATEWAY_TIMEOUT',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'HTTP_VERSION',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'getPermission',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.security.Permission',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setRequestMethod',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getResponseCode',
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
					'name' : 'getHeaderField',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getHeaderFieldKey',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getHeaderFieldDate',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setFixedLengthStreamingMode',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setChunkedStreamingMode',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setFollowRedirects',
					'tags' : ['_proxy', '_static'],
					'params' : [
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
					'name' : 'getFollowRedirects',
					'tags' : ['_proxy', '_static'],
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
					'name' : 'setInstanceFollowRedirects',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getInstanceFollowRedirects',
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
					'name' : 'getRequestMethod',
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
				{
					'name' : 'getResponseMessage',
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
				{
					'name' : 'disconnect',
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
				{
					'name' : 'usingProxy',
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
					'name' : 'getErrorStream',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.io.InputStream',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'java.net.MalformedURLException',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
				{
					'name' : 'java.net.MalformedURLException',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
				{
					'name' : 'java.net.MalformedURLException',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'java.util.Currency',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
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
				{
					'name' : 'getInstance',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'java.util.Locale',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.util.Currency',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getInstance',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.util.Currency',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getCurrencyCode',
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
				{
					'name' : 'getSymbol',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getSymbol',
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
				{
					'name' : 'getDefaultFractionDigits',
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.location.Location',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'FORMAT_DEGREES',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'FORMAT_MINUTES',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'FORMAT_SECONDS',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'CREATOR',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'android.os.Parcelable$Creator',
							'children' : [{'type': 'android.location.Location', 'converter': 'convert_proxy'}],
							'converter' : 'convert_proxy',
					},
				},
			],	
			'functions' : [
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
				{
					'name' : 'set',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.location.Location',
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
					'name' : 'reset',
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
				{
					'name' : 'setTime',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getTime',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
				},
				{
					'name' : 'getProvider',
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
				{
					'name' : 'convert',
					'tags' : ['_proxy', '_static'],
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
					'name' : 'convert',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'double',
								'converter' : 'convert_double',
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
					'name' : 'distanceBetween',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'double',
								'converter' : 'convert_double',
						},
						{
								'type' : 'double',
								'converter' : 'convert_double',
						},
						{
								'type' : 'double',
								'converter' : 'convert_double',
						},
						{
								'type' : 'double',
								'converter' : 'convert_double',
						},
						{
								'type' : '_float_array_type',
								'children' : [{'type': 'float', 'converter': 'convert_float'}],
								'converter' : 'convert__float_array_type',
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
					'name' : 'distanceTo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.location.Location',
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
					'name' : 'bearingTo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.location.Location',
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
					'name' : 'setProvider',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getElapsedRealtimeNanos',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
				},
				{
					'name' : 'setElapsedRealtimeNanos',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getLatitude',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'double',
								'converter' : 'convert_double',
						},
					],
				},
				{
					'name' : 'setLatitude',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getLongitude',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'double',
								'converter' : 'convert_double',
						},
					],
				},
				{
					'name' : 'setLongitude',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'hasAltitude',
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
					'name' : 'getAltitude',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'double',
								'converter' : 'convert_double',
						},
					],
				},
				{
					'name' : 'setAltitude',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'removeAltitude',
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
				{
					'name' : 'hasSpeed',
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
					'name' : 'getSpeed',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setSpeed',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'removeSpeed',
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
				{
					'name' : 'hasBearing',
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
					'name' : 'getBearing',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setBearing',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'removeBearing',
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
				{
					'name' : 'hasAccuracy',
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
					'name' : 'getAccuracy',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setAccuracy',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'removeAccuracy',
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
				{
					'name' : 'getExtras',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setExtras',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'dump',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.util.Printer',
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
					'name' : 'describeContents',
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
					'name' : 'writeToParcel',
					'tags' : ['_instance', '_proxy'],
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
				{
					'name' : 'isFromMockProvider',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.location.Location',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.location.Location',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.location.Location',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.net.http.SslError',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'SSL_NOTYETVALID',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'SSL_EXPIRED',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'SSL_IDMISMATCH',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'SSL_UNTRUSTED',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'SSL_DATE_INVALID',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'SSL_INVALID',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'SSL_MAX_ERROR',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
			],	
			'functions' : [
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
				{
					'name' : 'getCertificate',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.net.http.SslCertificate',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getUrl',
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
				{
					'name' : 'addError',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'hasError',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getPrimaryError',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.net.http.SslError',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.net.http.SslCertificate',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.net.http.SslError',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'java.security.cert.X509Certificate',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.net.http.SslError',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.net.http.SslCertificate',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.net.http.SslError',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'java.security.cert.X509Certificate',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.os.Parcel',
			'tags' : ['_instance', '_proxy', '_singleton'],
			'fields' : [
				{
					'name' : 'STRING_CREATOR',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'android.os.Parcelable$Creator',
							'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
							'converter' : 'convert_proxy',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'writeInt',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'readInt',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'readLong',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
				},
				{
					'name' : 'readByte',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'byte',
								'converter' : 'convert_byte',
						},
					],
				},
				{
					'name' : 'writeLong',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
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
					'name' : 'writeByte',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
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
					'name' : 'writeFloat',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
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
					'name' : 'readFloat',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'writeDouble',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
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
					'name' : 'writeString',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'writeArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
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
					'name' : 'readDouble',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'double',
								'converter' : 'convert_double',
						},
					],
				},
				{
					'name' : 'readString',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'readArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.ClassLoader',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'dataSize',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'writeValue',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
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
					'name' : 'readFileDescriptor',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.os.ParcelFileDescriptor',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'writeFileDescriptor',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'java.io.FileDescriptor',
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
					'name' : 'hasFileDescriptors',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'obtain',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.os.Parcel',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'recycle',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'dataAvail',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'dataPosition',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'dataCapacity',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'setDataSize',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'setDataPosition',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'setDataCapacity',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'marshall',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_byte_array_type',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array_type',
						},
					],
				},
				{
					'name' : 'unmarshall',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : '_byte_array_type',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array_type',
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
					'name' : 'appendFrom',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Parcel',
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'writeInterfaceToken',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'enforceInterface',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'writeByteArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : '_byte_array_type',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array_type',
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
					'name' : 'writeByteArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : '_byte_array_type',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array_type',
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
					'name' : 'writeStrongBinder',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
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
					'name' : 'writeStrongInterface',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.IInterface',
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
					'name' : 'writeMap',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.Map',
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
					'name' : 'writeBundle',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'writeList',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.List',
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
					'name' : 'writeSparseArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'android.util.SparseArray',
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
					'name' : 'writeSparseBooleanArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'android.util.SparseBooleanArray',
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
					'name' : 'writeBooleanArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : '_boolean_array_type',
								'children' : [{'type': 'boolean', 'converter': 'convert_boolean'}],
								'converter' : 'convert__boolean_array_type',
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
					'name' : 'createBooleanArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_boolean_array_type',
								'children' : [{'type': 'boolean', 'converter': 'convert_boolean'}],
								'converter' : 'convert__boolean_array_type',
						},
					],
				},
				{
					'name' : 'readBooleanArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : '_boolean_array_type',
								'children' : [{'type': 'boolean', 'converter': 'convert_boolean'}],
								'converter' : 'convert__boolean_array_type',
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
					'name' : 'writeCharArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : '_char_array_type',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array_type',
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
					'name' : 'createCharArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_char_array_type',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array_type',
						},
					],
				},
				{
					'name' : 'readCharArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : '_char_array_type',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array_type',
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
					'name' : 'writeIntArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : '_int_array_type',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array_type',
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
					'name' : 'createIntArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_int_array_type',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array_type',
						},
					],
				},
				{
					'name' : 'readIntArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : '_int_array_type',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array_type',
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
					'name' : 'writeLongArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : '_long_array_type',
								'children' : [{'type': 'long', 'converter': 'convert_long'}],
								'converter' : 'convert__long_array_type',
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
					'name' : 'createLongArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_long_array_type',
								'children' : [{'type': 'long', 'converter': 'convert_long'}],
								'converter' : 'convert__long_array_type',
						},
					],
				},
				{
					'name' : 'readLongArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : '_long_array_type',
								'children' : [{'type': 'long', 'converter': 'convert_long'}],
								'converter' : 'convert__long_array_type',
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
					'name' : 'writeFloatArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : '_float_array_type',
								'children' : [{'type': 'float', 'converter': 'convert_float'}],
								'converter' : 'convert__float_array_type',
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
					'name' : 'createFloatArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_float_array_type',
								'children' : [{'type': 'float', 'converter': 'convert_float'}],
								'converter' : 'convert__float_array_type',
						},
					],
				},
				{
					'name' : 'readFloatArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : '_float_array_type',
								'children' : [{'type': 'float', 'converter': 'convert_float'}],
								'converter' : 'convert__float_array_type',
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
					'name' : 'writeDoubleArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : '_double_array_type',
								'children' : [{'type': 'double', 'converter': 'convert_double'}],
								'converter' : 'convert__double_array_type',
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
					'name' : 'createDoubleArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_double_array_type',
								'children' : [{'type': 'double', 'converter': 'convert_double'}],
								'converter' : 'convert__double_array_type',
						},
					],
				},
				{
					'name' : 'readDoubleArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : '_double_array_type',
								'children' : [{'type': 'double', 'converter': 'convert_double'}],
								'converter' : 'convert__double_array_type',
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
					'name' : 'writeStringArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
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
					'name' : 'createStringArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'readStringArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
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
					'name' : 'writeBinderArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'android.os.IBinder', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
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
					'name' : 'createBinderArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'android.os.IBinder', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'readBinderArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'android.os.IBinder', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
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
					'name' : 'writeTypedList',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.List',
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
					'name' : 'writeStringList',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.List',
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
					'name' : 'writeBinderList',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'android.os.IBinder', 'converter': 'convert_proxy'}],
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
					'name' : 'writeTypedArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'android.os.Parcelable', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
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
					'name' : 'writeParcelable',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Parcelable',
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
					'name' : 'writeSerializable',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
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
					'name' : 'writeException',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Exception',
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
					'name' : 'writeNoException',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'readException',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'readException',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'readStrongBinder',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.os.IBinder',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'readMap',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.Map',
								'converter' : 'convert_proxy',
						},
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
					'name' : 'readList',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.List',
								'converter' : 'convert_proxy',
						},
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
					'name' : 'readHashMap',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.ClassLoader',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.util.HashMap',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'readBundle',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'readBundle',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.ClassLoader',
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
					'name' : 'createByteArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_byte_array_type',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array_type',
						},
					],
				},
				{
					'name' : 'readByteArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : '_byte_array_type',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array_type',
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
					'name' : 'readArrayList',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.ClassLoader',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.util.ArrayList',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'readSparseArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.ClassLoader',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.util.SparseArray',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'readSparseBooleanArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.util.SparseBooleanArray',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'createTypedArrayList',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Parcelable$Creator',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.util.ArrayList',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'readTypedList',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.os.Parcelable$Creator',
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
					'name' : 'createStringArrayList',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
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
					'name' : 'createBinderArrayList',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.ArrayList',
								'children' : [{'type': 'android.os.IBinder', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'readStringList',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.List',
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
					'name' : 'readBinderList',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'android.os.IBinder', 'converter': 'convert_proxy'}],
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
					'name' : 'createTypedArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Parcelable$Creator',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'readTypedArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
						{
								'type' : 'android.os.Parcelable$Creator',
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
					'name' : 'writeParcelableArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'android.os.Parcelable', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
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
					'name' : 'readValue',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.ClassLoader',
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
					'name' : 'readParcelable',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.ClassLoader',
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
					'name' : 'readParcelableArray',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.ClassLoader',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'android.os.Parcelable', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'readSerializable',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.io.Serializable',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.support.v4.app.Fragment',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'equals',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
				{
					'name' : 'hashCode',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'getResources',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.content.res.Resources',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getId',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'isHidden',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'getString',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
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
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'getTag',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'dump',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.io.FileDescriptor',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.io.PrintWriter',
								'converter' : 'convert_proxy',
						},
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
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
					'name' : 'instantiate',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
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
								'type' : 'android.support.v4.app.Fragment',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'instantiate',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.support.v4.app.Fragment',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setArguments',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getArguments',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setInitialSavedState',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.support.v4.app.Fragment$SavedState',
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
					'name' : 'setTargetFragment',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.support.v4.app.Fragment',
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
					'name' : 'getTargetFragment',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.support.v4.app.Fragment',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getTargetRequestCode',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'getActivity',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.support.v4.app.FragmentActivity',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getText',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
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
					'name' : 'getFragmentManager',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.support.v4.app.FragmentManager',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getChildFragmentManager',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.support.v4.app.FragmentManager',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getParentFragment',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.support.v4.app.Fragment',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'isAdded',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'isDetached',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'isRemoving',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'isInLayout',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'isResumed',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'isVisible',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'hasOptionsMenu',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'isMenuVisible',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'onHiddenChanged',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setRetainInstance',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getRetainInstance',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'setHasOptionsMenu',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setMenuVisibility',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setUserVisibleHint',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getUserVisibleHint',
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
					'name' : 'getLoaderManager',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.support.v4.app.LoaderManager',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'startActivity',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Intent',
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
					'name' : 'startActivityForResult',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Intent',
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
					'name' : 'onActivityResult',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'android.content.Intent',
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
					'name' : 'getLayoutInflater',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.LayoutInflater',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'onInflate',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.app.Activity',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
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
					'name' : 'onAttach',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.app.Activity',
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
					'name' : 'onCreateAnimation',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.animation.Animation',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'onCreate',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'onCreateView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.LayoutInflater',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.ViewGroup',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'onViewCreated',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
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
					'name' : 'getView',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'onActivityCreated',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'onViewStateRestored',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'onStart',
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
				{
					'name' : 'onResume',
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
				{
					'name' : 'onSaveInstanceState',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'onConfigurationChanged',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.res.Configuration',
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
					'name' : 'onPause',
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
				{
					'name' : 'onStop',
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
				{
					'name' : 'onLowMemory',
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
				{
					'name' : 'onDestroyView',
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
				{
					'name' : 'onDestroy',
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
				{
					'name' : 'onDetach',
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
				{
					'name' : 'onCreateOptionsMenu',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.Menu',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.MenuInflater',
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
					'name' : 'onPrepareOptionsMenu',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.Menu',
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
					'name' : 'onDestroyOptionsMenu',
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
				{
					'name' : 'onOptionsItemSelected',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MenuItem',
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
					'name' : 'onOptionsMenuClosed',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.Menu',
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
					'name' : 'onCreateContextMenu',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.ContextMenu',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.ContextMenu$ContextMenuInfo',
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
					'name' : 'registerForContextMenu',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'unregisterForContextMenu',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'onContextItemSelected',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MenuItem',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.support.v4.app.Fragment',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
			],
		},
		{
			'name' : 'android.webkit.WebView',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'SCHEME_TEL',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'SCHEME_MAILTO',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'SCHEME_GEO',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'destroy',
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
				{
					'name' : 'freeMemory',
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
				{
					'name' : 'getCertificate',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.net.http.SslCertificate',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'clearCache',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getUrl',
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
				{
					'name' : 'saveState',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.webkit.WebBackForwardList',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'restoreState',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Bundle',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.webkit.WebBackForwardList',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'onResume',
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
				{
					'name' : 'onPause',
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
				{
					'name' : 'onKeyDown',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.KeyEvent',
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
					'name' : 'onKeyUp',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.KeyEvent',
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
					'name' : 'onKeyMultiple',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'android.view.KeyEvent',
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
					'name' : 'onTouchEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'onTrackballEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'onGenericMotionEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'onWindowFocusChanged',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'dispatchKeyEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.KeyEvent',
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
					'name' : 'getTitle',
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
				{
					'name' : 'setBackgroundColor',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'requestChildRectangleOnScreen',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.graphics.Rect',
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
					'name' : 'requestFocus',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.graphics.Rect',
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
					'name' : 'shouldDelayChildPressedState',
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
					'name' : 'performLongClick',
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
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'performAccessibilityAction',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.os.Bundle',
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
					'name' : 'onCreateInputConnection',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.inputmethod.EditorInfo',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.inputmethod.InputConnection',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'onHoverEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'setLayoutParams',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.ViewGroup$LayoutParams',
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
					'name' : 'computeScroll',
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
				{
					'name' : 'setScrollBarStyle',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setLayerType',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.graphics.Paint',
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
					'name' : 'setOverScrollMode',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'onChildViewAdded',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
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
					'name' : 'onChildViewRemoved',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
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
					'name' : 'onGlobalFocusChanged',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
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
					'name' : 'stopLoading',
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
				{
					'name' : 'setHorizontalScrollbarOverlay',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setVerticalScrollbarOverlay',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'overlayHorizontalScrollbar',
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
					'name' : 'overlayVerticalScrollbar',
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
					'name' : 'setCertificate',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.net.http.SslCertificate',
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
					'name' : 'savePassword',
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
					'name' : 'setHttpAuthUsernamePassword',
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
					'name' : 'getHttpAuthUsernamePassword',
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
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'setNetworkAvailable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'loadUrl',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'loadUrl',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.util.Map',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}, {'type': 'java.lang.String', 'converter': 'convert_proxy'}],
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
					'name' : 'postUrl',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : '_byte_array_type',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array_type',
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
					'name' : 'loadData',
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
					'name' : 'loadDataWithBaseURL',
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
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
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
					'name' : 'saveWebArchive',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
						{
								'type' : 'android.webkit.ValueCallback',
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
					'name' : 'saveWebArchive',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'reload',
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
				{
					'name' : 'canGoBack',
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
					'name' : 'goBack',
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
				{
					'name' : 'canGoForward',
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
					'name' : 'goForward',
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
				{
					'name' : 'canGoBackOrForward',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'goBackOrForward',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'isPrivateBrowsingEnabled',
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
					'name' : 'pageUp',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'pageDown',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'clearView',
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
				{
					'name' : 'capturePicture',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.graphics.Picture',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getScale',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setInitialScale',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'invokeZoomPicker',
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
				{
					'name' : 'getHitTestResult',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.webkit.WebView$HitTestResult',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'requestFocusNodeHref',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Message',
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
					'name' : 'requestImageRef',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Message',
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
					'name' : 'getOriginalUrl',
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
				{
					'name' : 'getFavicon',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.graphics.Bitmap',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getProgress',
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
					'name' : 'getContentHeight',
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
					'name' : 'pauseTimers',
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
				{
					'name' : 'resumeTimers',
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
				{
					'name' : 'clearFormData',
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
				{
					'name' : 'clearHistory',
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
				{
					'name' : 'clearSslPreferences',
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
				{
					'name' : 'copyBackForwardList',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.webkit.WebBackForwardList',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setFindListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.webkit.WebView$FindListener',
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
					'name' : 'findNext',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'findAll',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'findAllAsync',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'showFindDialog',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'findAddress',
					'tags' : ['_proxy', '_static'],
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
					'name' : 'clearMatches',
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
				{
					'name' : 'documentHasImages',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.os.Message',
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
					'name' : 'setWebViewClient',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.webkit.WebViewClient',
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
					'name' : 'setDownloadListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.webkit.DownloadListener',
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
					'name' : 'setWebChromeClient',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.webkit.WebChromeClient',
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
					'name' : 'setPictureListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.webkit.WebView$PictureListener',
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
					'name' : 'addJavascriptInterface',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Object',
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
					'name' : 'removeJavascriptInterface',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getSettings',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.webkit.WebSettings',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setMapTrackballToArrowKeys',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'flingScroll',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'canZoomIn',
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
					'name' : 'canZoomOut',
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
					'name' : 'zoomIn',
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
					'name' : 'zoomOut',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.webkit.WebView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.webkit.WebView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.webkit.WebView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'android.webkit.WebView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
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
				},
			],
		},
		{
			'name' : 'android.webkit.SslErrorHandler',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'cancel',
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
				{
					'name' : 'proceed',
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
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.AbsListView',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
				{
					'name' : 'TRANSCRIPT_MODE_DISABLED',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'TRANSCRIPT_MODE_NORMAL',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'TRANSCRIPT_MODE_ALWAYS_SCROLL',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'CHOICE_MODE_NONE',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'CHOICE_MODE_SINGLE',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'CHOICE_MODE_MULTIPLE',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'CHOICE_MODE_MULTIPLE_MODAL',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'onSaveInstanceState',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.os.Parcelable',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'onKeyDown',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.KeyEvent',
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
					'name' : 'onRestoreInstanceState',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'onKeyUp',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.KeyEvent',
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
					'name' : 'onTouchEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'onGenericMotionEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'onWindowFocusChanged',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getSelector',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setSelector',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
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
					'name' : 'setSelector',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'showContextMenuForChild',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
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
					'name' : 'addTouchables',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.ArrayList',
								'children' : [{'type': 'android.view.View', 'converter': 'convert_proxy'}],
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
					'name' : 'requestDisallowInterceptTouchEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'onInterceptTouchEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'generateLayoutParams',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.widget.AbsListView$LayoutParams',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'jumpDrawablesToCurrentState',
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
				{
					'name' : 'requestLayout',
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
				{
					'name' : 'getVerticalScrollbarWidth',
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
					'name' : 'setVerticalScrollbarPosition',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'sendAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'performAccessibilityAction',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.os.Bundle',
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
					'name' : 'onCreateInputConnection',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.inputmethod.EditorInfo',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.inputmethod.InputConnection',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'checkInputConnectionProxy',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
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
					'name' : 'getFocusedRect',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.Rect',
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
					'name' : 'onRtlPropertiesChanged',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'draw',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.Canvas',
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
					'name' : 'getSolidColor',
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
					'name' : 'verifyDrawable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
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
					'name' : 'setOverScrollMode',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'onGlobalLayout',
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
				{
					'name' : 'onTouchModeChanged',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setAdapter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.ListAdapter',
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
					'name' : 'getCheckedItemCount',
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
					'name' : 'isItemChecked',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getCheckedItemPosition',
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
					'name' : 'getCheckedItemPositions',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.util.SparseBooleanArray',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getCheckedItemIds',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_long_array_type',
								'children' : [{'type': 'long', 'converter': 'convert_long'}],
								'converter' : 'convert__long_array_type',
						},
					],
				},
				{
					'name' : 'clearChoices',
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
				{
					'name' : 'setItemChecked',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'performItemClick',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
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
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'getChoiceMode',
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
					'name' : 'setChoiceMode',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setMultiChoiceModeListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.AbsListView$MultiChoiceModeListener',
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
					'name' : 'setFastScrollEnabled',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setFastScrollAlwaysVisible',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'isFastScrollAlwaysVisible',
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
					'name' : 'isFastScrollEnabled',
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
					'name' : 'setSmoothScrollbarEnabled',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'isSmoothScrollbarEnabled',
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
					'name' : 'setOnScrollListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.AbsListView$OnScrollListener',
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
					'name' : 'isScrollingCacheEnabled',
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
					'name' : 'setScrollingCacheEnabled',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setTextFilterEnabled',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'isTextFilterEnabled',
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
					'name' : 'isStackFromBottom',
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
					'name' : 'setStackFromBottom',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setFilterText',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getTextFilter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getSelectedView',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getListPaddingTop',
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
					'name' : 'getListPaddingBottom',
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
					'name' : 'getListPaddingLeft',
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
					'name' : 'getListPaddingRight',
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
					'name' : 'setDrawSelectorOnTop',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setScrollIndicators',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
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
					'name' : 'pointToPosition',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'pointToRowId',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
				},
				{
					'name' : 'setFriction',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setVelocityScale',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'smoothScrollToPosition',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'smoothScrollToPosition',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'smoothScrollToPositionFromTop',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'smoothScrollToPositionFromTop',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'smoothScrollBy',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'invalidateViews',
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
				{
					'name' : 'clearTextFilter',
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
				{
					'name' : 'hasTextFilter',
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
					'name' : 'beforeTextChanged',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.CharSequence',
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
					'name' : 'onTextChanged',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.CharSequence',
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
					'name' : 'afterTextChanged',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.text.Editable',
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
					'name' : 'onFilterComplete',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setTranscriptMode',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getTranscriptMode',
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
					'name' : 'setCacheColorHint',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getCacheColorHint',
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
					'name' : 'reclaimViews',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'android.view.View', 'converter': 'convert_proxy'}],
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
					'name' : 'setRemoteViewsAdapter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Intent',
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
					'name' : 'deferNotifyDataSetChanged',
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
				{
					'name' : 'onRemoteAdapterConnected',
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
					'name' : 'onRemoteAdapterDisconnected',
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
				{
					'name' : 'setRecyclerListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.AbsListView$RecyclerListener',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.AbsListView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.AbsListView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'android.widget.AbsListView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.AbsListView$LayoutParams',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.AbsListView$LayoutParams',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.AbsListView$LayoutParams',
					'tags' : ['_proxy'],
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
				},
				{
					'name' : 'android.widget.AbsListView$LayoutParams',
					'tags' : ['_proxy'],
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
				},
				{
					'name' : 'android.widget.AbsListView$LayoutParams',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.view.ViewGroup$LayoutParams',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.AbsListView$MultiChoiceModeListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onItemCheckedStateChanged',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.ActionMode',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'long',
								'converter' : 'convert_long',
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.AbsListView$OnScrollListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
				{
					'name' : 'SCROLL_STATE_IDLE',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'SCROLL_STATE_TOUCH_SCROLL',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'SCROLL_STATE_FLING',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'onScrollStateChanged',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.AbsListView',
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
					'name' : 'onScroll',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.AbsListView',
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
			],
		},
		{
			'name' : 'android.widget.AbsListView$RecyclerListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onMovedToScrapHeap',
					'tags' : ['_instance', '_proxy'],
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.AbsListView$SelectionBoundsAdjuster',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'adjustListItemSelectionBounds',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.Rect',
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.Adapter',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
				{
					'name' : 'IGNORE_ITEM_VIEW_TYPE',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'NO_SELECTION',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'isEmpty',
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
					'name' : 'getView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.ViewGroup',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getItem',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getItemId',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'getCount',
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
					'name' : 'registerDataSetObserver',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.database.DataSetObserver',
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
					'name' : 'unregisterDataSetObserver',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.database.DataSetObserver',
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
					'name' : 'hasStableIds',
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
					'name' : 'getItemViewType',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getViewTypeCount',
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.AdapterView$OnItemClickListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onItemClick',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.AdapterView',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.AdapterView$OnItemLongClickListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onItemLongClick',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.AdapterView',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
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
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.AdapterView$OnItemSelectedListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onItemSelected',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.AdapterView',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
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
					'name' : 'onNothingSelected',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.AdapterView',
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.Advanceable',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'advance',
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
				{
					'name' : 'fyiWillBeAdvancedByHostKThx',
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
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.AutoCompleteTextView$OnDismissListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onDismiss',
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
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.AutoCompleteTextView$Validator',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'isValid',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'fixText',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.CalendarView$OnDateChangeListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onSelectedDayChange',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.CalendarView',
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
			],
		},
		{
			'name' : 'android.widget.Checkable',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'setChecked',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'isChecked',
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
					'name' : 'toggle',
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
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.Chronometer$OnChronometerTickListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onChronometerTick',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.Chronometer',
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.CompoundButton$OnCheckedChangeListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCheckedChanged',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.CompoundButton',
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.DatePicker$OnDateChangedListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onDateChanged',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.DatePicker',
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
			],
		},
		{
			'name' : 'android.widget.ExpandableListAdapter',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'isEmpty',
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
					'name' : 'getGroupId',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'registerDataSetObserver',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.database.DataSetObserver',
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
					'name' : 'unregisterDataSetObserver',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.database.DataSetObserver',
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
					'name' : 'getChild',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'hasStableIds',
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
					'name' : 'areAllItemsEnabled',
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
					'name' : 'getGroupCount',
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
					'name' : 'getChildrenCount',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getGroup',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getChildId',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
				},
				{
					'name' : 'getGroupView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.ViewGroup',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getChildView',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.ViewGroup',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'isChildSelectable',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'onGroupExpanded',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'onGroupCollapsed',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getCombinedChildId',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
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
					'name' : 'getCombinedGroupId',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.ExpandableListView$OnChildClickListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onChildClick',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.ExpandableListView',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.View',
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
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
					'returns' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.ExpandableListView$OnGroupClickListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onGroupClick',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.ExpandableListView',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
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
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.ExpandableListView$OnGroupCollapseListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onGroupCollapse',
					'tags' : ['_instance', '_proxy'],
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.ExpandableListView$OnGroupExpandListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onGroupExpand',
					'tags' : ['_instance', '_proxy'],
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.Filter$FilterListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onFilterComplete',
					'tags' : ['_instance', '_proxy'],
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.Filterable',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getFilter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.Filter',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.FilterQueryProvider',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'runQuery',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.database.Cursor',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.HeterogeneousExpandableList',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getGroupType',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getChildType',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getGroupTypeCount',
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
					'name' : 'getChildTypeCount',
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.ListAdapter',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'isEnabled',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'areAllItemsEnabled',
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.MediaController$MediaPlayerControl',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'start',
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
				{
					'name' : 'getDuration',
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
					'name' : 'pause',
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
				{
					'name' : 'getCurrentPosition',
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
					'name' : 'seekTo',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'isPlaying',
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
					'name' : 'getBufferPercentage',
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
					'name' : 'canPause',
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
					'name' : 'canSeekBackward',
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
					'name' : 'canSeekForward',
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
					'name' : 'getAudioSessionId',
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.MultiAutoCompleteTextView$Tokenizer',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'findTokenStart',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'findTokenEnd',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'terminateToken',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.NumberPicker$Formatter',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'format',
					'tags' : ['_instance', '_proxy'],
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.NumberPicker$OnScrollListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
				{
					'name' : 'SCROLL_STATE_IDLE',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'SCROLL_STATE_TOUCH_SCROLL',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'SCROLL_STATE_FLING',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'onScrollStateChange',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.NumberPicker',
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
			],
		},
		{
			'name' : 'android.widget.NumberPicker$OnValueChangeListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onValueChange',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.NumberPicker',
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.PopupMenu$OnDismissListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onDismiss',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.PopupMenu',
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.PopupMenu$OnMenuItemClickListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onMenuItemClick',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MenuItem',
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.PopupWindow$OnDismissListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onDismiss',
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
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.RadioGroup$OnCheckedChangeListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCheckedChanged',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.RadioGroup',
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
			],
		},
		{
			'name' : 'android.widget.RatingBar$OnRatingBarChangeListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onRatingChanged',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.RatingBar',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'float',
								'converter' : 'convert_float',
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.RemoteViewsService$RemoteViewsFactory',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onCreate',
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
				{
					'name' : 'onDestroy',
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
				{
					'name' : 'getItemId',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'getCount',
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
					'name' : 'hasStableIds',
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
					'name' : 'getViewTypeCount',
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
					'name' : 'onDataSetChanged',
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
				{
					'name' : 'getViewAt',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'android.widget.RemoteViews',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getLoadingView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.RemoteViews',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.SearchView$OnCloseListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onClose',
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.SearchView$OnQueryTextListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onQueryTextSubmit',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'onQueryTextChange',
					'tags' : ['_instance', '_proxy'],
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.SearchView$OnSuggestionListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onSuggestionSelect',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'onSuggestionClick',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.SectionIndexer',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getSections',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'getPositionForSection',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getSectionForPosition',
					'tags' : ['_instance', '_proxy'],
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.SeekBar$OnSeekBarChangeListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onProgressChanged',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.SeekBar',
								'converter' : 'convert_proxy',
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
					'name' : 'onStartTrackingTouch',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.SeekBar',
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
					'name' : 'onStopTrackingTouch',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.SeekBar',
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.ShareActionProvider$OnShareTargetSelectedListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onShareTargetSelected',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.ShareActionProvider',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.content.Intent',
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.SimpleAdapter$ViewBinder',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'setViewValue',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.SimpleCursorAdapter$CursorToStringConverter',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'convertToString',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.database.Cursor',
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.SimpleCursorAdapter$ViewBinder',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'setViewValue',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.database.Cursor',
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.SimpleCursorTreeAdapter$ViewBinder',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'setViewValue',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.database.Cursor',
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.SlidingDrawer$OnDrawerCloseListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onDrawerClosed',
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
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.SlidingDrawer$OnDrawerOpenListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onDrawerOpened',
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
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.SlidingDrawer$OnDrawerScrollListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onScrollStarted',
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
				{
					'name' : 'onScrollEnded',
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
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.SpinnerAdapter',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getDropDownView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.ViewGroup',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.TabHost$OnTabChangeListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onTabChanged',
					'tags' : ['_instance', '_proxy'],
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.TabHost$TabContentFactory',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'createTabContent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.TextView$OnEditorActionListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onEditorAction',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.TextView',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.KeyEvent',
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.TimePicker$OnTimeChangedListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onTimeChanged',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.TimePicker',
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.ViewSwitcher$ViewFactory',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'makeView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.WrapperListAdapter',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getWrappedAdapter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.ListAdapter',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.ZoomButtonsController$OnZoomListener',
			'tags' : ['_interface', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onVisibilityChanged',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'onZoom',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.AbsoluteLayout',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'generateLayoutParams',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.ViewGroup$LayoutParams',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'shouldDelayChildPressedState',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.AbsoluteLayout',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.AbsoluteLayout',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.AbsoluteLayout',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.AbsoluteLayout$LayoutParams',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'x',
					'tags' : ['_instance', '_proxy'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'y',
					'tags' : ['_instance', '_proxy'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'debug',
					'tags' : ['_instance', '_proxy'],
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.AbsoluteLayout$LayoutParams',
					'tags' : ['_proxy'],
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
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'android.widget.AbsoluteLayout$LayoutParams',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.AbsoluteLayout$LayoutParams',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.view.ViewGroup$LayoutParams',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.AbsSeekBar',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onKeyDown',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.KeyEvent',
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
					'name' : 'onTouchEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'jumpDrawablesToCurrentState',
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
				{
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'performAccessibilityAction',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.os.Bundle',
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
					'name' : 'onRtlPropertiesChanged',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setMax',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setThumb',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
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
					'name' : 'getThumb',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getThumbOffset',
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
					'name' : 'setThumbOffset',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setKeyProgressIncrement',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getKeyProgressIncrement',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.AbsSeekBar',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.AbsSeekBar',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.AbsSeekBar',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.AbsSpinner',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onSaveInstanceState',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.os.Parcelable',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'onRestoreInstanceState',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'requestLayout',
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
				{
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'getCount',
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
					'name' : 'setSelection',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setSelection',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setAdapter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.SpinnerAdapter',
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
					'name' : 'getSelectedView',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'pointToPosition',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getAdapter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.SpinnerAdapter',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.AbsSpinner',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.AbsSpinner',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.AbsSpinner',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.AdapterView',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
				{
					'name' : 'ITEM_VIEW_TYPE_IGNORE',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'ITEM_VIEW_TYPE_HEADER_OR_FOOTER',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'INVALID_POSITION',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'INVALID_ROW_ID',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'long',
							'converter' : 'convert_long',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'addView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
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
					'name' : 'addView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.ViewGroup$LayoutParams',
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
					'name' : 'addView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.ViewGroup$LayoutParams',
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
					'name' : 'addView',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'removeView',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'dispatchPopulateAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onRequestSendAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'removeViewAt',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'removeAllViews',
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
				{
					'name' : 'setOnClickListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View$OnClickListener',
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
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'setFocusable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setFocusableInTouchMode',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getCount',
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
					'name' : 'setSelection',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setAdapter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.Adapter',
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
					'name' : 'performItemClick',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
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
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'getSelectedView',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setOnItemClickListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.AdapterView$OnItemClickListener',
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
					'name' : 'getOnItemClickListener',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.AdapterView$OnItemClickListener',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setOnItemLongClickListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.AdapterView$OnItemLongClickListener',
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
					'name' : 'getOnItemLongClickListener',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.AdapterView$OnItemLongClickListener',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setOnItemSelectedListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.AdapterView$OnItemSelectedListener',
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
					'name' : 'getOnItemSelectedListener',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.AdapterView$OnItemSelectedListener',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getAdapter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.Adapter',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getSelectedItemPosition',
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
					'name' : 'getSelectedItemId',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
				},
				{
					'name' : 'getSelectedItem',
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
					'name' : 'getPositionForView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
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
					'name' : 'getFirstVisiblePosition',
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
					'name' : 'getLastVisiblePosition',
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
					'name' : 'setEmptyView',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getEmptyView',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getItemAtPosition',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getItemIdAtPosition',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.AdapterView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.AdapterView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.AdapterView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.AdapterView$AdapterContextMenuInfo',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'targetView',
					'tags' : ['_instance', '_proxy'],
					'type' : 
					{
							'type' : 'android.view.View',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'position',
					'tags' : ['_instance', '_proxy'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'id',
					'tags' : ['_instance', '_proxy'],
					'type' : 
					{
							'type' : 'long',
							'converter' : 'convert_long',
					},
				},
			],	
			'functions' : [
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.AdapterView$AdapterContextMenuInfo',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
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
				},
			],
		},
		{
			'name' : 'android.widget.AdapterViewAnimator',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'advance',
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
				{
					'name' : 'onSaveInstanceState',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.os.Parcelable',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'onRestoreInstanceState',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'onTouchEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'getBaseline',
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
					'name' : 'setSelection',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setAdapter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.Adapter',
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
					'name' : 'getSelectedView',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setRemoteViewsAdapter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Intent',
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
					'name' : 'deferNotifyDataSetChanged',
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
				{
					'name' : 'onRemoteAdapterConnected',
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
					'name' : 'onRemoteAdapterDisconnected',
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
				{
					'name' : 'getAdapter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.Adapter',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'fyiWillBeAdvancedByHostKThx',
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
				{
					'name' : 'showNext',
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
				{
					'name' : 'showPrevious',
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
				{
					'name' : 'setDisplayedChild',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getDisplayedChild',
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
					'name' : 'getCurrentView',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getInAnimation',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.animation.ObjectAnimator',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setInAnimation',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.animation.ObjectAnimator',
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
					'name' : 'setInAnimation',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
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
					'name' : 'getOutAnimation',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.animation.ObjectAnimator',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setOutAnimation',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.animation.ObjectAnimator',
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
					'name' : 'setOutAnimation',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
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
					'name' : 'setAnimateFirstView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.AdapterViewAnimator',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.AdapterViewAnimator',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.AdapterViewAnimator',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.AdapterViewFlipper',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'setAdapter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.Adapter',
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
					'name' : 'fyiWillBeAdvancedByHostKThx',
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
				{
					'name' : 'showNext',
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
				{
					'name' : 'showPrevious',
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
				{
					'name' : 'getFlipInterval',
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
					'name' : 'setFlipInterval',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'startFlipping',
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
				{
					'name' : 'stopFlipping',
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
				{
					'name' : 'isFlipping',
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
					'name' : 'setAutoStart',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'isAutoStart',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.AdapterViewFlipper',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.AdapterViewFlipper',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.AlphabetIndexer',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onChanged',
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
				{
					'name' : 'onInvalidated',
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
				{
					'name' : 'getSections',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'getPositionForSection',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getSectionForPosition',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setCursor',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.database.Cursor',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.AlphabetIndexer',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.database.Cursor',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.AnalogClock',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.AnalogClock',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.AnalogClock',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.AnalogClock',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.ArrayAdapter',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'clear',
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
				{
					'name' : 'addAll',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.Collection',
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
					'name' : 'addAll',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
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
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getContext',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'insert',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Object',
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
					'name' : 'sort',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getPosition',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.ViewGroup',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getFilter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.Filter',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getItem',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getItemId',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'getCount',
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
					'name' : 'getDropDownView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.ViewGroup',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'notifyDataSetChanged',
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
				{
					'name' : 'setNotifyOnChange',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setDropDownViewResource',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'createFromResource',
					'tags' : ['_proxy', '_static'],
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
								'type' : 'android.widget.ArrayAdapter',
								'children' : [{'type': 'java.lang.CharSequence', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.ArrayAdapter',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'android.widget.ArrayAdapter',
					'tags' : ['_proxy'],
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
				},
				{
					'name' : 'android.widget.ArrayAdapter',
					'tags' : ['_proxy'],
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
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'android.widget.ArrayAdapter',
					'tags' : ['_proxy'],
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
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'android.widget.ArrayAdapter',
					'tags' : ['_proxy'],
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
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.ArrayAdapter',
					'tags' : ['_proxy'],
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
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.AutoCompleteTextView',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'setThreshold',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'onKeyDown',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.KeyEvent',
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
					'name' : 'onKeyUp',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.KeyEvent',
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
					'name' : 'onWindowFocusChanged',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setOnClickListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View$OnClickListener',
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
					'name' : 'onKeyPreIme',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.KeyEvent',
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
					'name' : 'setOnDismissListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.AutoCompleteTextView$OnDismissListener',
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
					'name' : 'setAdapter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.ListAdapter',
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
					'name' : 'onFilterComplete',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setOnItemClickListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.AdapterView$OnItemClickListener',
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
					'name' : 'getOnItemClickListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.AdapterView$OnItemClickListener',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setOnItemSelectedListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.AdapterView$OnItemSelectedListener',
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
					'name' : 'getOnItemSelectedListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.AdapterView$OnItemSelectedListener',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getAdapter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.ListAdapter',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'onCommitCompletion',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.inputmethod.CompletionInfo',
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
					'name' : 'setCompletionHint',
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
					'name' : 'getCompletionHint',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getDropDownWidth',
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
					'name' : 'setDropDownWidth',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getDropDownHeight',
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
					'name' : 'setDropDownHeight',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getDropDownAnchor',
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
					'name' : 'setDropDownAnchor',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getDropDownBackground',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setDropDownBackgroundDrawable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
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
					'name' : 'setDropDownBackgroundResource',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setDropDownVerticalOffset',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getDropDownVerticalOffset',
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
					'name' : 'setDropDownHorizontalOffset',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getDropDownHorizontalOffset',
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
					'name' : 'getThreshold',
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
					'name' : 'getItemClickListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.AdapterView$OnItemClickListener',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getItemSelectedListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.AdapterView$OnItemSelectedListener',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'enoughToFilter',
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
					'name' : 'isPopupShowing',
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
					'name' : 'clearListSelection',
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
				{
					'name' : 'setListSelection',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getListSelection',
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
					'name' : 'performCompletion',
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
				{
					'name' : 'isPerformingCompletion',
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
					'name' : 'dismissDropDown',
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
				{
					'name' : 'showDropDown',
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
				{
					'name' : 'setValidator',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.AutoCompleteTextView$Validator',
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
					'name' : 'getValidator',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.AutoCompleteTextView$Validator',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'performValidation',
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
			'constructors' : [	
				{
					'name' : 'android.widget.AutoCompleteTextView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.AutoCompleteTextView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'android.widget.AutoCompleteTextView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.BaseAdapter',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'isEmpty',
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
					'name' : 'isEnabled',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'registerDataSetObserver',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.database.DataSetObserver',
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
					'name' : 'unregisterDataSetObserver',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.database.DataSetObserver',
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
					'name' : 'getDropDownView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.ViewGroup',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'hasStableIds',
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
					'name' : 'getItemViewType',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getViewTypeCount',
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
					'name' : 'areAllItemsEnabled',
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
					'name' : 'notifyDataSetChanged',
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
				{
					'name' : 'notifyDataSetInvalidated',
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
			'constructors' : [	
				{
					'name' : 'android.widget.BaseAdapter',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
			],
		},
		{
			'name' : 'android.widget.BaseExpandableListAdapter',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'isEmpty',
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
					'name' : 'registerDataSetObserver',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.database.DataSetObserver',
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
					'name' : 'unregisterDataSetObserver',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.database.DataSetObserver',
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
					'name' : 'areAllItemsEnabled',
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
					'name' : 'onGroupExpanded',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'onGroupCollapsed',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getCombinedChildId',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
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
					'name' : 'getCombinedGroupId',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getGroupType',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getChildType',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getGroupTypeCount',
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
					'name' : 'getChildTypeCount',
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
					'name' : 'notifyDataSetChanged',
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
				{
					'name' : 'notifyDataSetInvalidated',
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
			'constructors' : [	
				{
					'name' : 'android.widget.BaseExpandableListAdapter',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
			],
		},
		{
			'name' : 'android.widget.Button',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.Button',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.Button',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.Button',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.CalendarView',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getDate',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
				},
				{
					'name' : 'setDate',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
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
					'name' : 'setDate',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'isEnabled',
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
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'setEnabled',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setShownWeekCount',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getShownWeekCount',
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
					'name' : 'setSelectedWeekBackgroundColor',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getSelectedWeekBackgroundColor',
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
					'name' : 'setFocusedMonthDateColor',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getFocusedMonthDateColor',
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
					'name' : 'setUnfocusedMonthDateColor',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getUnfocusedMonthDateColor',
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
					'name' : 'setWeekNumberColor',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getWeekNumberColor',
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
					'name' : 'setWeekSeparatorLineColor',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getWeekSeparatorLineColor',
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
					'name' : 'setSelectedDateVerticalBar',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
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
					'name' : 'setSelectedDateVerticalBar',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getSelectedDateVerticalBar',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setWeekDayTextAppearance',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getWeekDayTextAppearance',
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
					'name' : 'setDateTextAppearance',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getDateTextAppearance',
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
					'name' : 'getMinDate',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
				},
				{
					'name' : 'setMinDate',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getMaxDate',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
				},
				{
					'name' : 'setMaxDate',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setShowWeekNumber',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getShowWeekNumber',
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
					'name' : 'getFirstDayOfWeek',
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
					'name' : 'setFirstDayOfWeek',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setOnDateChangeListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.CalendarView$OnDateChangeListener',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.CalendarView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.CalendarView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'android.widget.CalendarView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.CheckBox',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.CheckBox',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.CheckBox',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.CheckBox',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.CheckedTextView',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'onRtlPropertiesChanged',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setChecked',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'isChecked',
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
					'name' : 'toggle',
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
				{
					'name' : 'setCheckMarkDrawable',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setCheckMarkDrawable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
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
					'name' : 'getCheckMarkDrawable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.CheckedTextView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.CheckedTextView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'android.widget.CheckedTextView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.Chronometer',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'start',
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
				{
					'name' : 'stop',
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
				{
					'name' : 'getFormat',
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
				{
					'name' : 'setFormat',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'setBase',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getBase',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
				},
				{
					'name' : 'setOnChronometerTickListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.Chronometer$OnChronometerTickListener',
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
					'name' : 'getOnChronometerTickListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.Chronometer$OnChronometerTickListener',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.Chronometer',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.Chronometer',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'android.widget.Chronometer',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.CompoundButton',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onSaveInstanceState',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.os.Parcelable',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'onRestoreInstanceState',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'jumpDrawablesToCurrentState',
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
				{
					'name' : 'performClick',
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
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'setChecked',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'isChecked',
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
					'name' : 'toggle',
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
				{
					'name' : 'getCompoundPaddingLeft',
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
					'name' : 'getCompoundPaddingRight',
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
					'name' : 'setOnCheckedChangeListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.CompoundButton$OnCheckedChangeListener',
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
					'name' : 'setButtonDrawable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
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
					'name' : 'setButtonDrawable',
					'tags' : ['_instance', '_proxy'],
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.CompoundButton',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.CompoundButton',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'android.widget.CompoundButton',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.CursorAdapter',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
				{
					'name' : 'FLAG_AUTO_REQUERY',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'FLAG_REGISTER_CONTENT_OBSERVER',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'getView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.ViewGroup',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getFilter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.Filter',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getItem',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getItemId',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'getCount',
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
					'name' : 'getDropDownView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.ViewGroup',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'hasStableIds',
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
					'name' : 'convertToString',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.database.Cursor',
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
					'name' : 'getCursor',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.database.Cursor',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'newView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.database.Cursor',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.ViewGroup',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'newDropDownView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.database.Cursor',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.ViewGroup',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'bindView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.database.Cursor',
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
					'name' : 'changeCursor',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.database.Cursor',
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
					'name' : 'swapCursor',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.database.Cursor',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.database.Cursor',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'runQueryOnBackgroundThread',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.database.Cursor',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getFilterQueryProvider',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.FilterQueryProvider',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setFilterQueryProvider',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.FilterQueryProvider',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.CursorAdapter',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.database.Cursor',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'android.widget.CursorAdapter',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.database.Cursor',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'android.widget.CursorAdapter',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.database.Cursor',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.CursorTreeAdapter',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getFilter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.Filter',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getGroupId',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'getChild',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'android.database.Cursor',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'hasStableIds',
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
					'name' : 'getGroupCount',
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
					'name' : 'getChildrenCount',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getGroup',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'android.database.Cursor',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getChildId',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
				},
				{
					'name' : 'getGroupView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.ViewGroup',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getChildView',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.ViewGroup',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'isChildSelectable',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'onGroupCollapsed',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'convertToString',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.database.Cursor',
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
					'name' : 'notifyDataSetChanged',
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
				{
					'name' : 'notifyDataSetChanged',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'notifyDataSetInvalidated',
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
				{
					'name' : 'getCursor',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.database.Cursor',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'changeCursor',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.database.Cursor',
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
					'name' : 'runQueryOnBackgroundThread',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.database.Cursor',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getFilterQueryProvider',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.FilterQueryProvider',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setFilterQueryProvider',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.FilterQueryProvider',
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
					'name' : 'setGroupCursor',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.database.Cursor',
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
					'name' : 'setChildrenCursor',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.database.Cursor',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.CursorTreeAdapter',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.database.Cursor',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.CursorTreeAdapter',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.database.Cursor',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.DatePicker',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'init',
					'tags' : ['_instance', '_proxy'],
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
						{
								'type' : 'android.widget.DatePicker$OnDateChangedListener',
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
					'name' : 'getYear',
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
					'name' : 'getMonth',
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
					'name' : 'getDayOfMonth',
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
					'name' : 'isEnabled',
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
					'name' : 'dispatchPopulateAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onPopulateAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'setEnabled',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getMinDate',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
				},
				{
					'name' : 'setMinDate',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getMaxDate',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
				},
				{
					'name' : 'setMaxDate',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getCalendarViewShown',
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
					'name' : 'getCalendarView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.CalendarView',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setCalendarViewShown',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getSpinnersShown',
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
					'name' : 'setSpinnersShown',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'updateDate',
					'tags' : ['_instance', '_proxy'],
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.DatePicker',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.DatePicker',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'android.widget.DatePicker',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.DialerFilter',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'DIGITS_AND_LETTERS',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'DIGITS_AND_LETTERS_NO_DIGITS',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'DIGITS_AND_LETTERS_NO_LETTERS',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'DIGITS_ONLY',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'LETTERS_ONLY',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'append',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setMode',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getMode',
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
					'name' : 'onKeyDown',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.KeyEvent',
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
					'name' : 'onKeyUp',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.KeyEvent',
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
					'name' : 'isQwertyKeyboard',
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
					'name' : 'getLetters',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getDigits',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getFilterText',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'clearText',
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
				{
					'name' : 'setLettersWatcher',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.text.TextWatcher',
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
					'name' : 'setDigitsWatcher',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.text.TextWatcher',
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
					'name' : 'setFilterWatcher',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.text.TextWatcher',
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
					'name' : 'removeFilterWatcher',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.text.TextWatcher',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.DialerFilter',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.DialerFilter',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.DigitalClock',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.DigitalClock',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.DigitalClock',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.EdgeEffect',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'setSize',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'finish',
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
				{
					'name' : 'draw',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.Canvas',
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
					'name' : 'isFinished',
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
					'name' : 'onPull',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'onRelease',
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
				{
					'name' : 'onAbsorb',
					'tags' : ['_instance', '_proxy'],
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.EdgeEffect',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.EditText',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'setText',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.widget.TextView$BufferType',
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
					'name' : 'getText',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.text.Editable',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'setSelection',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'setSelection',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setEllipsize',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.text.TextUtils$TruncateAt',
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
					'name' : 'selectAll',
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
				{
					'name' : 'extendSelection',
					'tags' : ['_instance', '_proxy'],
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.EditText',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.EditText',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'android.widget.EditText',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.ExpandableListView',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'PACKED_POSITION_TYPE_GROUP',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'PACKED_POSITION_TYPE_CHILD',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'PACKED_POSITION_TYPE_NULL',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'PACKED_POSITION_VALUE_NULL',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'long',
							'converter' : 'convert_long',
					},
				},
				{
					'name' : 'CHILD_INDICATOR_INHERIT',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'onSaveInstanceState',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.os.Parcelable',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'onRestoreInstanceState',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'onRtlPropertiesChanged',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setAdapter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.ExpandableListAdapter',
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
					'name' : 'setAdapter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.ListAdapter',
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
					'name' : 'performItemClick',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
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
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'setOnItemClickListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.AdapterView$OnItemClickListener',
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
					'name' : 'getAdapter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.ListAdapter',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setChildDivider',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
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
					'name' : 'getExpandableListAdapter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.ExpandableListAdapter',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'expandGroup',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'expandGroup',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'collapseGroup',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setOnGroupCollapseListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.ExpandableListView$OnGroupCollapseListener',
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
					'name' : 'setOnGroupExpandListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.ExpandableListView$OnGroupExpandListener',
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
					'name' : 'setOnGroupClickListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.ExpandableListView$OnGroupClickListener',
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
					'name' : 'setOnChildClickListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.ExpandableListView$OnChildClickListener',
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
					'name' : 'getExpandableListPosition',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'getFlatListPosition',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getSelectedPosition',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
				},
				{
					'name' : 'getSelectedId',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
				},
				{
					'name' : 'setSelectedGroup',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setSelectedChild',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'isGroupExpanded',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getPackedPositionType',
					'tags' : ['_proxy', '_static'],
					'params' : [
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
					'name' : 'getPackedPositionGroup',
					'tags' : ['_proxy', '_static'],
					'params' : [
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
					'name' : 'getPackedPositionChild',
					'tags' : ['_proxy', '_static'],
					'params' : [
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
					'name' : 'getPackedPositionForChild',
					'tags' : ['_proxy', '_static'],
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
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
				},
				{
					'name' : 'getPackedPositionForGroup',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'setChildIndicator',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
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
					'name' : 'setChildIndicatorBounds',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'setChildIndicatorBoundsRelative',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'setGroupIndicator',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
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
					'name' : 'setIndicatorBounds',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'setIndicatorBoundsRelative',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.ExpandableListView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.ExpandableListView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.ExpandableListView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.ExpandableListView$ExpandableListContextMenuInfo',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'targetView',
					'tags' : ['_instance', '_proxy'],
					'type' : 
					{
							'type' : 'android.view.View',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'packedPosition',
					'tags' : ['_instance', '_proxy'],
					'type' : 
					{
							'type' : 'long',
							'converter' : 'convert_long',
					},
				},
				{
					'name' : 'id',
					'tags' : ['_instance', '_proxy'],
					'type' : 
					{
							'type' : 'long',
							'converter' : 'convert_long',
					},
				},
			],	
			'functions' : [
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.ExpandableListView$ExpandableListContextMenuInfo',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.Filter',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'filter',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'filter',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.widget.Filter$FilterListener',
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
					'name' : 'convertResultToString',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Object',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.Filter',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
			],
		},
		{
			'name' : 'android.widget.Filter$FilterResults',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'values',
					'tags' : ['_instance', '_proxy'],
					'type' : 
					{
							'type' : 'java.lang.Object',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'count',
					'tags' : ['_instance', '_proxy'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
			],	
			'functions' : [
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.Filter$FilterResults',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
			],
		},
		{
			'name' : 'android.widget.FrameLayout',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'generateLayoutParams',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.widget.FrameLayout$LayoutParams',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'gatherTransparentRegion',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.Region',
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
					'name' : 'jumpDrawablesToCurrentState',
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
				{
					'name' : 'shouldDelayChildPressedState',
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
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'draw',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.Canvas',
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
					'name' : 'getForegroundGravity',
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
					'name' : 'setForegroundGravity',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setForeground',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
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
					'name' : 'getForeground',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setMeasureAllChildren',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getConsiderGoneChildrenWhenMeasuring',
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
					'name' : 'getMeasureAllChildren',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.FrameLayout',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.FrameLayout',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'android.widget.FrameLayout',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.FrameLayout$LayoutParams',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'gravity',
					'tags' : ['_instance', '_proxy'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
			],	
			'functions' : [
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.FrameLayout$LayoutParams',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.FrameLayout$LayoutParams',
					'tags' : ['_proxy'],
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
				},
				{
					'name' : 'android.widget.FrameLayout$LayoutParams',
					'tags' : ['_proxy'],
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
				},
				{
					'name' : 'android.widget.FrameLayout$LayoutParams',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.view.ViewGroup$LayoutParams',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.FrameLayout$LayoutParams',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.view.ViewGroup$MarginLayoutParams',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.Gallery',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onKeyDown',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.KeyEvent',
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
					'name' : 'onKeyUp',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.KeyEvent',
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
					'name' : 'onTouchEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'dispatchKeyEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.KeyEvent',
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
					'name' : 'showContextMenuForChild',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
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
					'name' : 'dispatchSetSelected',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'generateLayoutParams',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.ViewGroup$LayoutParams',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'showContextMenu',
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
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'performAccessibilityAction',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.os.Bundle',
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
					'name' : 'setGravity',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'onScroll',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.MotionEvent',
								'converter' : 'convert_proxy',
						},
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
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'setCallbackDuringFling',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setAnimationDuration',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setSpacing',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setUnselectedAlpha',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'onSingleTapUp',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'onFling',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.MotionEvent',
								'converter' : 'convert_proxy',
						},
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
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'onDown',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'onLongPress',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'onShowPress',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.Gallery',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.Gallery',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'android.widget.Gallery',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.Gallery$LayoutParams',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.Gallery$LayoutParams',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.Gallery$LayoutParams',
					'tags' : ['_proxy'],
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
				},
				{
					'name' : 'android.widget.Gallery$LayoutParams',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.view.ViewGroup$LayoutParams',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.GridLayout',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'HORIZONTAL',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'VERTICAL',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'UNDEFINED',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'ALIGN_BOUNDS',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'ALIGN_MARGINS',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'TOP',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'android.widget.GridLayout$Alignment',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'BOTTOM',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'android.widget.GridLayout$Alignment',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'START',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'android.widget.GridLayout$Alignment',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'END',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'android.widget.GridLayout$Alignment',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'LEFT',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'android.widget.GridLayout$Alignment',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'RIGHT',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'android.widget.GridLayout$Alignment',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'CENTER',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'android.widget.GridLayout$Alignment',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'BASELINE',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'android.widget.GridLayout$Alignment',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'FILL',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'android.widget.GridLayout$Alignment',
							'converter' : 'convert_proxy',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'generateLayoutParams',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.widget.GridLayout$LayoutParams',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'spec',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'android.widget.GridLayout$Spec',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'spec',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.widget.GridLayout$Alignment',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.widget.GridLayout$Spec',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'spec',
					'tags' : ['_proxy', '_static'],
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
								'type' : 'android.widget.GridLayout$Alignment',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.widget.GridLayout$Spec',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'spec',
					'tags' : ['_proxy', '_static'],
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
								'type' : 'android.widget.GridLayout$Spec',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'requestLayout',
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
				{
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'getOrientation',
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
					'name' : 'getColumnCount',
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
					'name' : 'setOrientation',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getRowCount',
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
					'name' : 'setRowCount',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setColumnCount',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getUseDefaultMargins',
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
					'name' : 'setUseDefaultMargins',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getAlignmentMode',
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
					'name' : 'setAlignmentMode',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'isRowOrderPreserved',
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
					'name' : 'setRowOrderPreserved',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'isColumnOrderPreserved',
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
					'name' : 'setColumnOrderPreserved',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.GridLayout',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'android.widget.GridLayout',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.GridLayout',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.GridLayout$Alignment',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.GridLayout$LayoutParams',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'rowSpec',
					'tags' : ['_instance', '_proxy'],
					'type' : 
					{
							'type' : 'android.widget.GridLayout$Spec',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'columnSpec',
					'tags' : ['_instance', '_proxy'],
					'type' : 
					{
							'type' : 'android.widget.GridLayout$Spec',
							'converter' : 'convert_proxy',
					},
				},
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
					'name' : 'hashCode',
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
					'name' : 'setGravity',
					'tags' : ['_instance', '_proxy'],
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.GridLayout$LayoutParams',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.widget.GridLayout$Spec',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.widget.GridLayout$Spec',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.GridLayout$LayoutParams',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
				{
					'name' : 'android.widget.GridLayout$LayoutParams',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.view.ViewGroup$LayoutParams',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.GridLayout$LayoutParams',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.view.ViewGroup$MarginLayoutParams',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.GridLayout$LayoutParams',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.widget.GridLayout$LayoutParams',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.GridLayout$LayoutParams',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.GridLayout$Spec',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
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
					'name' : 'hashCode',
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.GridView',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'NO_STRETCH',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'STRETCH_SPACING',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'STRETCH_COLUMN_WIDTH',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'STRETCH_SPACING_UNIFORM',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'AUTO_FIT',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'onKeyDown',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.KeyEvent',
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
					'name' : 'onKeyUp',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.KeyEvent',
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
					'name' : 'onKeyMultiple',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'android.view.KeyEvent',
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
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'setSelection',
					'tags' : ['_instance', '_proxy'],
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
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setAdapter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.ListAdapter',
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
					'name' : 'smoothScrollToPosition',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setRemoteViewsAdapter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Intent',
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
					'name' : 'getAdapter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.ListAdapter',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getGravity',
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
					'name' : 'smoothScrollByOffset',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setHorizontalSpacing',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getHorizontalSpacing',
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
					'name' : 'getRequestedHorizontalSpacing',
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
					'name' : 'setVerticalSpacing',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getVerticalSpacing',
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
					'name' : 'setStretchMode',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getStretchMode',
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
					'name' : 'setColumnWidth',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getColumnWidth',
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
					'name' : 'getRequestedColumnWidth',
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
					'name' : 'setNumColumns',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getNumColumns',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.GridView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.GridView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'android.widget.GridView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.HeaderViewListAdapter',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'isEmpty',
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
					'name' : 'getView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.ViewGroup',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'isEnabled',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getFilter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.Filter',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getItem',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getItemId',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'getCount',
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
					'name' : 'registerDataSetObserver',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.database.DataSetObserver',
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
					'name' : 'unregisterDataSetObserver',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.database.DataSetObserver',
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
					'name' : 'hasStableIds',
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
					'name' : 'getItemViewType',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getViewTypeCount',
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
					'name' : 'areAllItemsEnabled',
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
					'name' : 'getWrappedAdapter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.ListAdapter',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getHeadersCount',
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
					'name' : 'getFootersCount',
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
					'name' : 'removeHeader',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
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
					'name' : 'removeFooter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.HeaderViewListAdapter',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.util.ArrayList',
								'children' : [{'type': 'android.widget.ListView$FixedViewInfo', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.util.ArrayList',
								'children' : [{'type': 'android.widget.ListView$FixedViewInfo', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.widget.ListAdapter',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.HorizontalScrollView',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'addView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
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
					'name' : 'addView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.ViewGroup$LayoutParams',
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
					'name' : 'addView',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'addView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.ViewGroup$LayoutParams',
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
					'name' : 'onTouchEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'onGenericMotionEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'dispatchKeyEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.KeyEvent',
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
					'name' : 'requestChildFocus',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
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
					'name' : 'requestChildRectangleOnScreen',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.graphics.Rect',
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
					'name' : 'requestDisallowInterceptTouchEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'onInterceptTouchEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'shouldDelayChildPressedState',
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
					'name' : 'requestLayout',
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
				{
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'performAccessibilityAction',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.os.Bundle',
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
					'name' : 'scrollTo',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'computeScroll',
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
				{
					'name' : 'draw',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.Canvas',
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
					'name' : 'setOverScrollMode',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'smoothScrollBy',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'getMaxScrollAmount',
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
					'name' : 'fling',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'isFillViewport',
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
					'name' : 'setFillViewport',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'isSmoothScrollingEnabled',
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
					'name' : 'setSmoothScrollingEnabled',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'executeKeyEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.KeyEvent',
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
					'name' : 'pageScroll',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'fullScroll',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'arrowScroll',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'smoothScrollTo',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.HorizontalScrollView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.HorizontalScrollView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.HorizontalScrollView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.ImageButton',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.ImageButton',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.ImageButton',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.ImageButton',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.ImageSwitcher',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'setImageResource',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setImageURI',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.net.Uri',
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
					'name' : 'setImageDrawable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.ImageSwitcher',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.ImageSwitcher',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.ImageView',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'setVisibility',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getDrawable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'jumpDrawablesToCurrentState',
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
				{
					'name' : 'onCreateDrawableState',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : '_int_array_type',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array_type',
						},
					],
				},
				{
					'name' : 'onPopulateAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'hasOverlappingRendering',
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
					'name' : 'setAlpha',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'invalidateDrawable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
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
					'name' : 'setSelected',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getBaseline',
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
					'name' : 'setColorFilter',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.graphics.PorterDuff$Mode',
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
					'name' : 'setColorFilter',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'setColorFilter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.ColorFilter',
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
					'name' : 'clearColorFilter',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'getColorFilter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.graphics.ColorFilter',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setMaxHeight',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getMaxHeight',
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
					'name' : 'setMaxWidth',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getMaxWidth',
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
					'name' : 'getAdjustViewBounds',
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
					'name' : 'setAdjustViewBounds',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setImageResource',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setImageURI',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.net.Uri',
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
					'name' : 'setImageDrawable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
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
					'name' : 'setImageBitmap',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.Bitmap',
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
					'name' : 'setImageState',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : '_int_array_type',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array_type',
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
					'name' : 'setImageLevel',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setScaleType',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.ImageView$ScaleType',
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
					'name' : 'getScaleType',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.ImageView$ScaleType',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getImageMatrix',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.graphics.Matrix',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setImageMatrix',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.Matrix',
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
					'name' : 'getCropToPadding',
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
					'name' : 'setCropToPadding',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setBaseline',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setBaselineAlignBottom',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getBaselineAlignBottom',
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
					'name' : 'getImageAlpha',
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
					'name' : 'setImageAlpha',
					'tags' : ['_instance', '_proxy'],
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.ImageView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.ImageView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'android.widget.ImageView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.LinearLayout',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'HORIZONTAL',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'VERTICAL',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'SHOW_DIVIDER_NONE',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'SHOW_DIVIDER_BEGINNING',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'SHOW_DIVIDER_MIDDLE',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'SHOW_DIVIDER_END',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'generateLayoutParams',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.widget.LinearLayout$LayoutParams',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'shouldDelayChildPressedState',
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
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'getBaseline',
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
					'name' : 'getOrientation',
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
					'name' : 'setGravity',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setShowDividers',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getShowDividers',
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
					'name' : 'getDividerDrawable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setDividerDrawable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
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
					'name' : 'setDividerPadding',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getDividerPadding',
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
					'name' : 'isBaselineAligned',
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
					'name' : 'setBaselineAligned',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'isMeasureWithLargestChildEnabled',
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
					'name' : 'setMeasureWithLargestChildEnabled',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getBaselineAlignedChildIndex',
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
					'name' : 'setBaselineAlignedChildIndex',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getWeightSum',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setWeightSum',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setOrientation',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setHorizontalGravity',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setVerticalGravity',
					'tags' : ['_instance', '_proxy'],
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.LinearLayout',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.LinearLayout',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'android.widget.LinearLayout',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.LinearLayout$LayoutParams',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'weight',
					'tags' : ['_instance', '_proxy'],
					'type' : 
					{
							'type' : 'float',
							'converter' : 'convert_float',
					},
				},
				{
					'name' : 'gravity',
					'tags' : ['_instance', '_proxy'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'debug',
					'tags' : ['_instance', '_proxy'],
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.LinearLayout$LayoutParams',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.LinearLayout$LayoutParams',
					'tags' : ['_proxy'],
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
				},
				{
					'name' : 'android.widget.LinearLayout$LayoutParams',
					'tags' : ['_proxy'],
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
								'type' : 'float',
								'converter' : 'convert_float',
						},
					],
				},
				{
					'name' : 'android.widget.LinearLayout$LayoutParams',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.view.ViewGroup$LayoutParams',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.LinearLayout$LayoutParams',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.view.ViewGroup$MarginLayoutParams',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.ListPopupWindow',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'POSITION_PROMPT_ABOVE',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'POSITION_PROMPT_BELOW',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'MATCH_PARENT',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'WRAP_CONTENT',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'INPUT_METHOD_FROM_FOCUSABLE',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'INPUT_METHOD_NEEDED',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'INPUT_METHOD_NOT_NEEDED',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
			],	
			'functions' : [
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
				{
					'name' : 'onKeyDown',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.KeyEvent',
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
					'name' : 'onKeyUp',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.KeyEvent',
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
					'name' : 'onKeyPreIme',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.KeyEvent',
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
					'name' : 'getWidth',
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
					'name' : 'getHeight',
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
					'name' : 'setBackgroundDrawable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
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
					'name' : 'getBackground',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setSelection',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setSoftInputMode',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'isShowing',
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
					'name' : 'dismiss',
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
				{
					'name' : 'setOnDismissListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.PopupWindow$OnDismissListener',
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
					'name' : 'setAdapter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.ListAdapter',
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
					'name' : 'performItemClick',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getSelectedView',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setOnItemClickListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.AdapterView$OnItemClickListener',
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
					'name' : 'setOnItemSelectedListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.AdapterView$OnItemSelectedListener',
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
					'name' : 'getSelectedItemPosition',
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
					'name' : 'getSelectedItemId',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
				},
				{
					'name' : 'getSelectedItem',
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
					'name' : 'setHeight',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setWidth',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'clearListSelection',
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
				{
					'name' : 'setPromptPosition',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getPromptPosition',
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
					'name' : 'setModal',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'isModal',
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
					'name' : 'getSoftInputMode',
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
					'name' : 'setListSelector',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
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
					'name' : 'setAnimationStyle',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getAnimationStyle',
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
					'name' : 'getAnchorView',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setAnchorView',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getHorizontalOffset',
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
					'name' : 'setHorizontalOffset',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getVerticalOffset',
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
					'name' : 'setVerticalOffset',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setContentWidth',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setPromptView',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'postShow',
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
				{
					'name' : 'setInputMethodMode',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getInputMethodMode',
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
					'name' : 'isInputMethodNotNeeded',
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
					'name' : 'getListView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.ListView',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.ListPopupWindow',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.ListPopupWindow',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
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
				},
				{
					'name' : 'android.widget.ListPopupWindow',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.ListPopupWindow',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.ListView',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'isOpaque',
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
					'name' : 'onKeyDown',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.KeyEvent',
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
					'name' : 'onKeyUp',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.KeyEvent',
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
					'name' : 'onKeyMultiple',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'android.view.KeyEvent',
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
					'name' : 'dispatchKeyEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.KeyEvent',
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
					'name' : 'requestChildRectangleOnScreen',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.graphics.Rect',
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
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'setSelection',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setAdapter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.ListAdapter',
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
					'name' : 'smoothScrollToPosition',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setCacheColorHint',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setRemoteViewsAdapter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Intent',
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
					'name' : 'getAdapter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.ListAdapter',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getMaxScrollAmount',
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
					'name' : 'addHeaderView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.Object',
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
					'name' : 'addHeaderView',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getHeaderViewsCount',
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
					'name' : 'removeHeaderView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
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
					'name' : 'addFooterView',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'addFooterView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.Object',
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
					'name' : 'getFooterViewsCount',
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
					'name' : 'removeFooterView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
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
					'name' : 'smoothScrollByOffset',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setSelectionFromTop',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'setSelectionAfterHeaderView',
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
				{
					'name' : 'setItemsCanFocus',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getItemsCanFocus',
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
					'name' : 'getDivider',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setDivider',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
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
					'name' : 'getDividerHeight',
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
					'name' : 'setDividerHeight',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setHeaderDividersEnabled',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setFooterDividersEnabled',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setOverscrollHeader',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
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
					'name' : 'getOverscrollHeader',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setOverscrollFooter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
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
					'name' : 'getOverscrollFooter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getCheckItemIds',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_long_array_type',
								'children' : [{'type': 'long', 'converter': 'convert_long'}],
								'converter' : 'convert__long_array_type',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.ListView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.ListView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'android.widget.ListView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.ListView$FixedViewInfo',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'view',
					'tags' : ['_instance', '_proxy'],
					'type' : 
					{
							'type' : 'android.view.View',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'data',
					'tags' : ['_instance', '_proxy'],
					'type' : 
					{
							'type' : 'java.lang.Object',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'isSelectable',
					'tags' : ['_instance', '_proxy'],
					'type' : 
					{
							'type' : 'boolean',
							'converter' : 'convert_boolean',
					},
				},
			],	
			'functions' : [
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.ListView$FixedViewInfo',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.widget.ListView',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.MediaController',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
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
				{
					'name' : 'show',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'onTouchEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'onTrackballEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'dispatchKeyEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.KeyEvent',
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
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'setEnabled',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'onFinishInflate',
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
				{
					'name' : 'hide',
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
				{
					'name' : 'isShowing',
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
					'name' : 'setAnchorView',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setMediaPlayer',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.MediaController$MediaPlayerControl',
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
					'name' : 'setPrevNextListeners',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View$OnClickListener',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.View$OnClickListener',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.MediaController',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'android.widget.MediaController',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.MediaController',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.MultiAutoCompleteTextView',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'enoughToFilter',
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
					'name' : 'performValidation',
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
				{
					'name' : 'setTokenizer',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.MultiAutoCompleteTextView$Tokenizer',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.MultiAutoCompleteTextView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.MultiAutoCompleteTextView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'android.widget.MultiAutoCompleteTextView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.MultiAutoCompleteTextView$CommaTokenizer',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'findTokenStart',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'findTokenEnd',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'terminateToken',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.MultiAutoCompleteTextView$CommaTokenizer',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
			],
		},
		{
			'name' : 'android.widget.NumberPicker',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getValue',
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
					'name' : 'setValue',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'onTouchEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'dispatchKeyEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.KeyEvent',
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
					'name' : 'dispatchTouchEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'dispatchTrackballEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'onInterceptTouchEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'getAccessibilityNodeProvider',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeProvider',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setEnabled',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'scrollBy',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'computeScroll',
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
				{
					'name' : 'getSolidColor',
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
					'name' : 'setOnScrollListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.NumberPicker$OnScrollListener',
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
					'name' : 'setOnValueChangedListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.NumberPicker$OnValueChangeListener',
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
					'name' : 'setFormatter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.NumberPicker$Formatter',
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
					'name' : 'getWrapSelectorWheel',
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
					'name' : 'setWrapSelectorWheel',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setOnLongPressUpdateInterval',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getMinValue',
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
					'name' : 'setMinValue',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getMaxValue',
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
					'name' : 'setMaxValue',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getDisplayedValues',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'setDisplayedValues',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
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
					'name' : 'android.widget.NumberPicker',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.NumberPicker',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.NumberPicker',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.OverScroller',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'setFriction',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
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
					'name' : 'isFinished',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'forceFinished',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
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
					'name' : 'getCurrX',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'getCurrY',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'getCurrVelocity',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getStartX',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'getStartY',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'getFinalX',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'getFinalY',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'computeScrollOffset',
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
					'name' : 'startScroll',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'startScroll',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'fling',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'fling',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'abortAnimation',
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
				{
					'name' : 'springBack',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'notifyHorizontalEdgeReached',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'notifyVerticalEdgeReached',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'isOverScrolled',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.OverScroller',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.OverScroller',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.animation.Interpolator',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.OverScroller',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.animation.Interpolator',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'float',
								'converter' : 'convert_float',
						},
						{
								'type' : 'float',
								'converter' : 'convert_float',
						},
					],
				},
				{
					'name' : 'android.widget.OverScroller',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.animation.Interpolator',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'float',
								'converter' : 'convert_float',
						},
						{
								'type' : 'float',
								'converter' : 'convert_float',
						},
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.PopupMenu',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'inflate',
					'tags' : ['_instance', '_proxy'],
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
				{
					'name' : 'getMenuInflater',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.view.MenuInflater',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setOnMenuItemClickListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.PopupMenu$OnMenuItemClickListener',
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
					'name' : 'getMenu',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.view.Menu',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'dismiss',
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
				{
					'name' : 'setOnDismissListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.PopupMenu$OnDismissListener',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.PopupMenu',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.PopupWindow',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'INPUT_METHOD_FROM_FOCUSABLE',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'INPUT_METHOD_NEEDED',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'INPUT_METHOD_NOT_NEEDED',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'update',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'update',
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
				{
					'name' : 'update',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
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
					'name' : 'update',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'update',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'update',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'isFocusable',
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
					'name' : 'setContentView',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setFocusable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getWidth',
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
					'name' : 'getHeight',
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
					'name' : 'setBackgroundDrawable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
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
					'name' : 'getBackground',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setSoftInputMode',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'isShowing',
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
					'name' : 'dismiss',
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
				{
					'name' : 'setOnDismissListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.PopupWindow$OnDismissListener',
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
					'name' : 'setHeight',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setWidth',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getSoftInputMode',
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
					'name' : 'setAnimationStyle',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getAnimationStyle',
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
					'name' : 'setInputMethodMode',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getInputMethodMode',
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
					'name' : 'setIgnoreCheekPress',
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
				{
					'name' : 'getContentView',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setTouchInterceptor',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View$OnTouchListener',
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
					'name' : 'isTouchable',
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
					'name' : 'setTouchable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'isOutsideTouchable',
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
					'name' : 'setOutsideTouchable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'isClippingEnabled',
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
					'name' : 'setClippingEnabled',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'isSplitTouchEnabled',
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
					'name' : 'setSplitTouchEnabled',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setWindowLayoutMode',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'showAtLocation',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
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
					'name' : 'showAsDropDown',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'showAsDropDown',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'isAboveAnchor',
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
					'name' : 'getMaxAvailableHeight',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
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
					'name' : 'getMaxAvailableHeight',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.PopupWindow',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
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
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'android.widget.PopupWindow',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.PopupWindow',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'android.widget.PopupWindow',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
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
				},
				{
					'name' : 'android.widget.PopupWindow',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
				{
					'name' : 'android.widget.PopupWindow',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.PopupWindow',
					'tags' : ['_proxy'],
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
				},
				{
					'name' : 'android.widget.PopupWindow',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
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
				},
				{
					'name' : 'android.widget.PopupWindow',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.ProgressBar',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onSaveInstanceState',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.os.Parcelable',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setInterpolator',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.animation.Interpolator',
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
					'name' : 'setInterpolator',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
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
					'name' : 'setVisibility',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'onRestoreInstanceState',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setProgress',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setSecondaryProgress',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getInterpolator',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.view.animation.Interpolator',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'jumpDrawablesToCurrentState',
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
				{
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'postInvalidate',
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
				{
					'name' : 'invalidateDrawable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
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
					'name' : 'getProgress',
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
					'name' : 'setMax',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'isIndeterminate',
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
					'name' : 'setIndeterminate',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getIndeterminateDrawable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setIndeterminateDrawable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
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
					'name' : 'getProgressDrawable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setProgressDrawable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
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
					'name' : 'getSecondaryProgress',
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
					'name' : 'getMax',
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
					'name' : 'incrementProgressBy',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'incrementSecondaryProgressBy',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.ProgressBar',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.ProgressBar',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'android.widget.ProgressBar',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.QuickContactBadge',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'setMode',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'onClick',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setImageToDefault',
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
				{
					'name' : 'assignContactUri',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.net.Uri',
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
					'name' : 'assignContactFromEmail',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'assignContactFromEmail',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
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
					'name' : 'assignContactFromPhone',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
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
					'name' : 'assignContactFromPhone',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setExcludeMimes',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
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
					'name' : 'android.widget.QuickContactBadge',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.QuickContactBadge',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'android.widget.QuickContactBadge',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.RadioButton',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'toggle',
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
			'constructors' : [	
				{
					'name' : 'android.widget.RadioButton',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.RadioButton',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.RadioButton',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.RadioGroup',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'check',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'addView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.ViewGroup$LayoutParams',
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
					'name' : 'setOnHierarchyChangeListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.ViewGroup$OnHierarchyChangeListener',
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
					'name' : 'generateLayoutParams',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.widget.RadioGroup$LayoutParams',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'setOnCheckedChangeListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.RadioGroup$OnCheckedChangeListener',
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
					'name' : 'getCheckedRadioButtonId',
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
					'name' : 'clearCheck',
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
			'constructors' : [	
				{
					'name' : 'android.widget.RadioGroup',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.RadioGroup',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.RadioGroup$LayoutParams',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.RadioGroup$LayoutParams',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.RadioGroup$LayoutParams',
					'tags' : ['_proxy'],
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
				},
				{
					'name' : 'android.widget.RadioGroup$LayoutParams',
					'tags' : ['_proxy'],
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
								'type' : 'float',
								'converter' : 'convert_float',
						},
					],
				},
				{
					'name' : 'android.widget.RadioGroup$LayoutParams',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.view.ViewGroup$LayoutParams',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.RadioGroup$LayoutParams',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.view.ViewGroup$MarginLayoutParams',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.RatingBar',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'setOnRatingBarChangeListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.RatingBar$OnRatingBarChangeListener',
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
					'name' : 'getOnRatingBarChangeListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.RatingBar$OnRatingBarChangeListener',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setIsIndicator',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'isIndicator',
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
					'name' : 'setNumStars',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getNumStars',
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
					'name' : 'setRating',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getRating',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setStepSize',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getStepSize',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setMax',
					'tags' : ['_instance', '_proxy'],
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.RatingBar',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.RatingBar',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.RatingBar',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.RelativeLayout',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'TRUE',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'LEFT_OF',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'RIGHT_OF',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'ABOVE',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'BELOW',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'ALIGN_BASELINE',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'ALIGN_LEFT',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'ALIGN_TOP',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'ALIGN_RIGHT',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'ALIGN_BOTTOM',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'ALIGN_PARENT_LEFT',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'ALIGN_PARENT_TOP',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'ALIGN_PARENT_RIGHT',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'ALIGN_PARENT_BOTTOM',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'CENTER_IN_PARENT',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'CENTER_HORIZONTAL',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'CENTER_VERTICAL',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'START_OF',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'END_OF',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'ALIGN_START',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'ALIGN_END',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'ALIGN_PARENT_START',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'ALIGN_PARENT_END',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'dispatchPopulateAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'generateLayoutParams',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.widget.RelativeLayout$LayoutParams',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'shouldDelayChildPressedState',
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
					'name' : 'requestLayout',
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
				{
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'getBaseline',
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
					'name' : 'setGravity',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getGravity',
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
					'name' : 'setHorizontalGravity',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setVerticalGravity',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setIgnoreGravity',
					'tags' : ['_instance', '_proxy'],
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.RelativeLayout',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.RelativeLayout',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'android.widget.RelativeLayout',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.RelativeLayout$LayoutParams',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'alignWithParent',
					'tags' : ['_instance', '_proxy'],
					'type' : 
					{
							'type' : 'boolean',
							'converter' : 'convert_boolean',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'debug',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'resolveLayoutDirection',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'addRule',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'addRule',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'removeRule',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getRules',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_int_array_type',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array_type',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.RelativeLayout$LayoutParams',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.RelativeLayout$LayoutParams',
					'tags' : ['_proxy'],
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
				},
				{
					'name' : 'android.widget.RelativeLayout$LayoutParams',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.view.ViewGroup$LayoutParams',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.RelativeLayout$LayoutParams',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.view.ViewGroup$MarginLayoutParams',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.RemoteViews',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'CREATOR',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'android.os.Parcelable$Creator',
							'children' : [{'type': 'android.widget.RemoteViews', 'converter': 'convert_proxy'}],
							'converter' : 'convert_proxy',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'clone',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.RemoteViews',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getPackage',
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
				{
					'name' : 'setBoolean',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setByte',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setChar',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setShort',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setInt',
					'tags' : ['_instance', '_proxy'],
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
					],
					'returns' : [
						{
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'setLong',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setFloat',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setDouble',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'describeContents',
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
					'name' : 'writeToParcel',
					'tags' : ['_instance', '_proxy'],
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
				{
					'name' : 'addView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.widget.RemoteViews',
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
					'name' : 'setIntent',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'android.content.Intent',
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
					'name' : 'removeAllViews',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setContentDescription',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'setLabelFor',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'setBitmap',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'android.graphics.Bitmap',
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
					'name' : 'apply',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.ViewGroup',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'onLoadClass',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Class',
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
					'name' : 'setEmptyView',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'setTextColor',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'getLayoutId',
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
					'name' : 'showNext',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'showPrevious',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setDisplayedChild',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'setViewVisibility',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'setTextViewText',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'setTextViewTextSize',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setTextViewCompoundDrawables',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setTextViewCompoundDrawablesRelative',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setImageViewResource',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'setImageViewUri',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.net.Uri',
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
					'name' : 'setImageViewBitmap',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.graphics.Bitmap',
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
					'name' : 'setChronometer',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'long',
								'converter' : 'convert_long',
						},
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
					'name' : 'setProgressBar',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setOnClickPendingIntent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.app.PendingIntent',
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
					'name' : 'setPendingIntentTemplate',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.app.PendingIntent',
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
					'name' : 'setOnClickFillInIntent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.content.Intent',
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
					'name' : 'setRemoteAdapter',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'android.content.Intent',
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
					'name' : 'setRemoteAdapter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.content.Intent',
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
					'name' : 'setScrollPosition',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'setRelativeScrollPosition',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'setViewPadding',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setString',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setCharSequence',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setUri',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'android.net.Uri',
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
					'name' : 'setBundle',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'reapply',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.RemoteViews',
					'tags' : ['_proxy'],
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
				},
				{
					'name' : 'android.widget.RemoteViews',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.os.Parcel',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.RemoteViews',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.widget.RemoteViews',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.widget.RemoteViews',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.RemoteViewsService',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onBind',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Intent',
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
					'name' : 'onGetViewFactory',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Intent',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.widget.RemoteViewsService$RemoteViewsFactory',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.RemoteViewsService',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
			],
		},
		{
			'name' : 'android.widget.ResourceCursorAdapter',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'setDropDownViewResource',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'newView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.database.Cursor',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.ViewGroup',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'newDropDownView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.database.Cursor',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.ViewGroup',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setViewResource',
					'tags' : ['_instance', '_proxy'],
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.ResourceCursorAdapter',
					'tags' : ['_proxy'],
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
								'type' : 'android.database.Cursor',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.ResourceCursorAdapter',
					'tags' : ['_proxy'],
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
								'type' : 'android.database.Cursor',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'android.widget.ResourceCursorAdapter',
					'tags' : ['_proxy'],
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
								'type' : 'android.database.Cursor',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.ResourceCursorTreeAdapter',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'newGroupView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.database.Cursor',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
						{
								'type' : 'android.view.ViewGroup',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'newChildView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.database.Cursor',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
						{
								'type' : 'android.view.ViewGroup',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.ResourceCursorTreeAdapter',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.database.Cursor',
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
					'name' : 'android.widget.ResourceCursorTreeAdapter',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.database.Cursor',
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
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'android.widget.ResourceCursorTreeAdapter',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.database.Cursor',
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
				},
			],
		},
		{
			'name' : 'android.widget.Scroller',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getDuration',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'setFriction',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
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
					'name' : 'isFinished',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'forceFinished',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
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
					'name' : 'getCurrX',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'getCurrY',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'getCurrVelocity',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getStartX',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'getStartY',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'getFinalX',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'getFinalY',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'computeScrollOffset',
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
					'name' : 'startScroll',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'startScroll',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'fling',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'abortAnimation',
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
				{
					'name' : 'extendDuration',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'timePassed',
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
					'name' : 'setFinalX',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setFinalY',
					'tags' : ['_instance', '_proxy'],
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.Scroller',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.Scroller',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.animation.Interpolator',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.Scroller',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.animation.Interpolator',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.ScrollView',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'addView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
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
					'name' : 'addView',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'addView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.ViewGroup$LayoutParams',
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
					'name' : 'addView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.ViewGroup$LayoutParams',
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
					'name' : 'onTouchEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'onGenericMotionEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'dispatchKeyEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.KeyEvent',
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
					'name' : 'requestChildFocus',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
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
					'name' : 'requestChildRectangleOnScreen',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.graphics.Rect',
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
					'name' : 'requestDisallowInterceptTouchEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'onInterceptTouchEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'shouldDelayChildPressedState',
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
					'name' : 'requestLayout',
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
				{
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'performAccessibilityAction',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.os.Bundle',
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
					'name' : 'scrollTo',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'computeScroll',
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
				{
					'name' : 'draw',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.Canvas',
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
					'name' : 'setOverScrollMode',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'smoothScrollBy',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'getMaxScrollAmount',
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
					'name' : 'fling',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'isFillViewport',
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
					'name' : 'setFillViewport',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'isSmoothScrollingEnabled',
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
					'name' : 'setSmoothScrollingEnabled',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'executeKeyEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.KeyEvent',
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
					'name' : 'pageScroll',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'fullScroll',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'arrowScroll',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'smoothScrollTo',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.ScrollView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.ScrollView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.ScrollView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.SearchView',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getQuery',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'onKeyDown',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.KeyEvent',
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
					'name' : 'onWindowFocusChanged',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'onRtlPropertiesChanged',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setMaxWidth',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getMaxWidth',
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
					'name' : 'setInputType',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getInputType',
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
					'name' : 'setImeOptions',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getImeOptions',
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
					'name' : 'setSearchableInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.app.SearchableInfo',
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
					'name' : 'setOnQueryTextListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.SearchView$OnQueryTextListener',
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
					'name' : 'setOnCloseListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.SearchView$OnCloseListener',
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
					'name' : 'setOnQueryTextFocusChangeListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View$OnFocusChangeListener',
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
					'name' : 'setOnSuggestionListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.SearchView$OnSuggestionListener',
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
					'name' : 'setOnSearchClickListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View$OnClickListener',
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
					'name' : 'setQuery',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.CharSequence',
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
					'name' : 'setQueryHint',
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
					'name' : 'getQueryHint',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setIconifiedByDefault',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'isIconfiedByDefault',
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
					'name' : 'setIconified',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'isIconified',
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
					'name' : 'setSubmitButtonEnabled',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'isSubmitButtonEnabled',
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
					'name' : 'setQueryRefinementEnabled',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'isQueryRefinementEnabled',
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
					'name' : 'setSuggestionsAdapter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.CursorAdapter',
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
					'name' : 'getSuggestionsAdapter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.CursorAdapter',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'onActionViewCollapsed',
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
				{
					'name' : 'onActionViewExpanded',
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
			'constructors' : [	
				{
					'name' : 'android.widget.SearchView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.SearchView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.SeekBar',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'setOnSeekBarChangeListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.SeekBar$OnSeekBarChangeListener',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.SeekBar',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.SeekBar',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.SeekBar',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.ShareActionProvider',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'DEFAULT_SHARE_HISTORY_FILE_NAME',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'hasSubMenu',
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
					'name' : 'onCreateActionView',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'onPrepareSubMenu',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.SubMenu',
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
					'name' : 'setOnShareTargetSelectedListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.ShareActionProvider$OnShareTargetSelectedListener',
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
					'name' : 'setShareHistoryFileName',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setShareIntent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Intent',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.ShareActionProvider',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.SimpleAdapter',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.ViewGroup',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getFilter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.Filter',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getItem',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getItemId',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'getCount',
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
					'name' : 'getDropDownView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.ViewGroup',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setDropDownViewResource',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getViewBinder',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.SimpleAdapter$ViewBinder',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setViewBinder',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.SimpleAdapter$ViewBinder',
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
					'name' : 'setViewImage',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.ImageView',
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
					'name' : 'setViewImage',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.ImageView',
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
					'name' : 'setViewText',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.TextView',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.SimpleAdapter',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.util.Map', 'children': [{'type': 'java.lang.String', 'converter': 'convert_proxy'}, {'type': 'java.lang.Object', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
						{
								'type' : '_int_array_type',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array_type',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.SimpleCursorAdapter',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'convertToString',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.database.Cursor',
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
					'name' : 'bindView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.database.Cursor',
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
					'name' : 'swapCursor',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.database.Cursor',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.database.Cursor',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getViewBinder',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.SimpleCursorAdapter$ViewBinder',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setViewBinder',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.SimpleCursorAdapter$ViewBinder',
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
					'name' : 'setViewImage',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.ImageView',
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
					'name' : 'setViewText',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.TextView',
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
					'name' : 'getStringConversionColumn',
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
					'name' : 'setStringConversionColumn',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getCursorToStringConverter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.SimpleCursorAdapter$CursorToStringConverter',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setCursorToStringConverter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.SimpleCursorAdapter$CursorToStringConverter',
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
					'name' : 'changeCursorAndColumns',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.database.Cursor',
								'converter' : 'convert_proxy',
						},
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
						{
								'type' : '_int_array_type',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array_type',
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
					'name' : 'android.widget.SimpleCursorAdapter',
					'tags' : ['_proxy'],
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
								'type' : 'android.database.Cursor',
								'converter' : 'convert_proxy',
						},
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
						{
								'type' : '_int_array_type',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array_type',
						},
					],
				},
				{
					'name' : 'android.widget.SimpleCursorAdapter',
					'tags' : ['_proxy'],
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
								'type' : 'android.database.Cursor',
								'converter' : 'convert_proxy',
						},
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
						{
								'type' : '_int_array_type',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array_type',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.SimpleCursorTreeAdapter',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getViewBinder',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.SimpleCursorTreeAdapter$ViewBinder',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setViewBinder',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.SimpleCursorTreeAdapter$ViewBinder',
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
					'name' : 'setViewText',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.TextView',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.SimpleCursorTreeAdapter',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.database.Cursor',
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
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
						{
								'type' : '_int_array_type',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array_type',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
						{
								'type' : '_int_array_type',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array_type',
						},
					],
				},
				{
					'name' : 'android.widget.SimpleCursorTreeAdapter',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.database.Cursor',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
						{
								'type' : '_int_array_type',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array_type',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
						{
								'type' : '_int_array_type',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array_type',
						},
					],
				},
				{
					'name' : 'android.widget.SimpleCursorTreeAdapter',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.database.Cursor',
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
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
						{
								'type' : '_int_array_type',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array_type',
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
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
						{
								'type' : '_int_array_type',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array_type',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.SimpleExpandableListAdapter',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getGroupId',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
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
					'name' : 'getChild',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'java.lang.Object',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'hasStableIds',
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
					'name' : 'getGroupCount',
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
					'name' : 'getChildrenCount',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getGroup',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getChildId',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'long',
								'converter' : 'convert_long',
						},
					],
				},
				{
					'name' : 'getGroupView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.ViewGroup',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getChildView',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.ViewGroup',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'isChildSelectable',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'newGroupView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
						{
								'type' : 'android.view.ViewGroup',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'newChildView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
						{
								'type' : 'android.view.ViewGroup',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.SimpleExpandableListAdapter',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.util.Map', 'children': [{'type': 'java.lang.String', 'converter': 'convert_proxy'}, {'type': 'java.lang.Object', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
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
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
						{
								'type' : '_int_array_type',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array_type',
						},
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.util.List', 'children': [{'type': 'java.util.Map', 'children': [{'type': 'java.lang.String', 'converter': 'convert_proxy'}, {'type': 'java.lang.Object', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
						{
								'type' : '_int_array_type',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array_type',
						},
					],
				},
				{
					'name' : 'android.widget.SimpleExpandableListAdapter',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.util.Map', 'children': [{'type': 'java.lang.String', 'converter': 'convert_proxy'}, {'type': 'java.lang.Object', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
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
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
						{
								'type' : '_int_array_type',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array_type',
						},
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.util.List', 'children': [{'type': 'java.util.Map', 'children': [{'type': 'java.lang.String', 'converter': 'convert_proxy'}, {'type': 'java.lang.Object', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
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
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
						{
								'type' : '_int_array_type',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array_type',
						},
					],
				},
				{
					'name' : 'android.widget.SimpleExpandableListAdapter',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.util.Map', 'children': [{'type': 'java.lang.String', 'converter': 'convert_proxy'}, {'type': 'java.lang.Object', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
						{
								'type' : '_int_array_type',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array_type',
						},
						{
								'type' : 'java.util.List',
								'children' : [{'type': 'java.util.List', 'children': [{'type': 'java.util.Map', 'children': [{'type': 'java.lang.String', 'converter': 'convert_proxy'}, {'type': 'java.lang.Object', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
						{
								'type' : '_int_array_type',
								'children' : [{'type': 'int', 'converter': 'convert_int'}],
								'converter' : 'convert__int_array_type',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.SlidingDrawer',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'ORIENTATION_HORIZONTAL',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'ORIENTATION_VERTICAL',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'lock',
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
				{
					'name' : 'close',
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
				{
					'name' : 'getContent',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'open',
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
				{
					'name' : 'getHandle',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'unlock',
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
				{
					'name' : 'onTouchEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'onInterceptTouchEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'toggle',
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
				{
					'name' : 'animateToggle',
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
				{
					'name' : 'animateClose',
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
				{
					'name' : 'animateOpen',
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
				{
					'name' : 'setOnDrawerOpenListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.SlidingDrawer$OnDrawerOpenListener',
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
					'name' : 'setOnDrawerCloseListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.SlidingDrawer$OnDrawerCloseListener',
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
					'name' : 'setOnDrawerScrollListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.SlidingDrawer$OnDrawerScrollListener',
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
					'name' : 'isOpened',
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
					'name' : 'isMoving',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.SlidingDrawer',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'android.widget.SlidingDrawer',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.Space',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'draw',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.Canvas',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.Space',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'android.widget.Space',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.Space',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.Spinner',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'MODE_DIALOG',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'MODE_DROPDOWN',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'onSaveInstanceState',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.os.Parcelable',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'onRestoreInstanceState',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'performClick',
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
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'setEnabled',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getBaseline',
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
					'name' : 'onClick',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.DialogInterface',
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
					'name' : 'setGravity',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setAdapter',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.SpinnerAdapter',
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
					'name' : 'setOnItemClickListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.AdapterView$OnItemClickListener',
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
					'name' : 'getGravity',
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
					'name' : 'getDropDownWidth',
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
					'name' : 'setDropDownWidth',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setDropDownVerticalOffset',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getDropDownVerticalOffset',
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
					'name' : 'setDropDownHorizontalOffset',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getDropDownHorizontalOffset',
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
					'name' : 'setPopupBackgroundDrawable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
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
					'name' : 'setPopupBackgroundResource',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getPopupBackground',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setPrompt',
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
					'name' : 'setPromptId',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getPrompt',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.Spinner',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'android.widget.Spinner',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'android.widget.Spinner',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.Spinner',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
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
				},
				{
					'name' : 'android.widget.Spinner',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.StackView',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'advance',
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
				{
					'name' : 'onTouchEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'onGenericMotionEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'onInterceptTouchEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'performAccessibilityAction',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.os.Bundle',
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
					'name' : 'showNext',
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
				{
					'name' : 'showPrevious',
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
			'constructors' : [	
				{
					'name' : 'android.widget.StackView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.StackView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'android.widget.StackView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.Switch',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onTouchEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'jumpDrawablesToCurrentState',
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
				{
					'name' : 'onPopulateAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'onMeasure',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'setChecked',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getCompoundPaddingLeft',
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
					'name' : 'getCompoundPaddingRight',
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
					'name' : 'setSwitchTextAppearance',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
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
					'name' : 'setSwitchTypeface',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.Typeface',
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
					'name' : 'setSwitchTypeface',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.Typeface',
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
					'name' : 'setSwitchPadding',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getSwitchPadding',
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
					'name' : 'setSwitchMinWidth',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getSwitchMinWidth',
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
					'name' : 'setThumbTextPadding',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getThumbTextPadding',
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
					'name' : 'setTrackDrawable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
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
					'name' : 'setTrackResource',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getTrackDrawable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setThumbDrawable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
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
					'name' : 'setThumbResource',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getThumbDrawable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getTextOn',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setTextOn',
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
					'name' : 'getTextOff',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setTextOff',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.Switch',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.Switch',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'android.widget.Switch',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.TabHost',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'setup',
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
				{
					'name' : 'setup',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.app.LocalActivityManager',
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
					'name' : 'dispatchKeyEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.KeyEvent',
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
					'name' : 'dispatchWindowFocusChanged',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'sendAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'onTouchModeChanged',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'addTab',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.TabHost$TabSpec',
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
					'name' : 'getCurrentView',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'newTabSpec',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.widget.TabHost$TabSpec',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'clearAllTabs',
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
				{
					'name' : 'getTabWidget',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.TabWidget',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getCurrentTab',
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
					'name' : 'getCurrentTabTag',
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
				{
					'name' : 'getCurrentTabView',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setCurrentTabByTag',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getTabContentView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.FrameLayout',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setCurrentTab',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setOnTabChangedListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.TabHost$OnTabChangeListener',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.TabHost',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.TabHost',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.TabHost$TabSpec',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'getTag',
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
				{
					'name' : 'setIndicator',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.graphics.drawable.Drawable',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.widget.TabHost$TabSpec',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setIndicator',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.widget.TabHost$TabSpec',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setIndicator',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.widget.TabHost$TabSpec',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setContent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'android.widget.TabHost$TabSpec',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setContent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.TabHost$TabContentFactory',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.widget.TabHost$TabSpec',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setContent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Intent',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.widget.TabHost$TabSpec',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.TableLayout',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'addView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
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
					'name' : 'addView',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'addView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.ViewGroup$LayoutParams',
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
					'name' : 'addView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.ViewGroup$LayoutParams',
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
					'name' : 'setOnHierarchyChangeListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.ViewGroup$OnHierarchyChangeListener',
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
					'name' : 'generateLayoutParams',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.widget.TableLayout$LayoutParams',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'requestLayout',
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
				{
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'isShrinkAllColumns',
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
					'name' : 'setShrinkAllColumns',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'isStretchAllColumns',
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
					'name' : 'setStretchAllColumns',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setColumnCollapsed',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'isColumnCollapsed',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setColumnStretchable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'isColumnStretchable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setColumnShrinkable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'isColumnShrinkable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.TableLayout',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.TableLayout',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.TableLayout$LayoutParams',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.TableLayout$LayoutParams',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.TableLayout$LayoutParams',
					'tags' : ['_proxy'],
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
				},
				{
					'name' : 'android.widget.TableLayout$LayoutParams',
					'tags' : ['_proxy'],
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
								'type' : 'float',
								'converter' : 'convert_float',
						},
					],
				},
				{
					'name' : 'android.widget.TableLayout$LayoutParams',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
				{
					'name' : 'android.widget.TableLayout$LayoutParams',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.view.ViewGroup$LayoutParams',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.TableLayout$LayoutParams',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.view.ViewGroup$MarginLayoutParams',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.TableRow',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'setOnHierarchyChangeListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.ViewGroup$OnHierarchyChangeListener',
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
					'name' : 'generateLayoutParams',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.widget.TableRow$LayoutParams',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'getVirtualChildAt',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getVirtualChildCount',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.TableRow',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.TableRow',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.TableRow$LayoutParams',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'column',
					'tags' : ['_instance', '_proxy'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'span',
					'tags' : ['_instance', '_proxy'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
			],	
			'functions' : [
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.TableRow$LayoutParams',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.TableRow$LayoutParams',
					'tags' : ['_proxy'],
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
				},
				{
					'name' : 'android.widget.TableRow$LayoutParams',
					'tags' : ['_proxy'],
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
								'type' : 'float',
								'converter' : 'convert_float',
						},
					],
				},
				{
					'name' : 'android.widget.TableRow$LayoutParams',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
				{
					'name' : 'android.widget.TableRow$LayoutParams',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'android.widget.TableRow$LayoutParams',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.view.ViewGroup$LayoutParams',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.TableRow$LayoutParams',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.view.ViewGroup$MarginLayoutParams',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.TabWidget',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'addView',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'dispatchPopulateAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'dispatchDraw',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.Canvas',
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
					'name' : 'removeAllViews',
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
				{
					'name' : 'childDrawableStateChanged',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'sendAccessibilityEventUnchecked',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'setEnabled',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'onFocusChange',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
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
					'name' : 'getTabCount',
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
					'name' : 'setDividerDrawable',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setDividerDrawable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
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
					'name' : 'setCurrentTab',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getChildTabViewAt',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setLeftStripDrawable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
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
					'name' : 'setLeftStripDrawable',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setRightStripDrawable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
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
					'name' : 'setRightStripDrawable',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setStripEnabled',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'isStripEnabled',
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
					'name' : 'focusCurrentTab',
					'tags' : ['_instance', '_proxy'],
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.TabWidget',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.TabWidget',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.TabWidget',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.TextClock',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'DEFAULT_FORMAT_12_HOUR',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.CharSequence',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'DEFAULT_FORMAT_24_HOUR',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'java.lang.CharSequence',
							'converter' : 'convert_proxy',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'getTimeZone',
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
				{
					'name' : 'setTimeZone',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getFormat12Hour',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setFormat12Hour',
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
					'name' : 'getFormat24Hour',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setFormat24Hour',
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
					'name' : 'is24HourModeEnabled',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.TextClock',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.TextClock',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.TextClock',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.TextSwitcher',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
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
					'name' : 'addView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.ViewGroup$LayoutParams',
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
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'setCurrentText',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.TextSwitcher',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.TextSwitcher',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.TextView',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'append',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'append',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.CharSequence',
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
								'type' : 'void',
								'converter' : 'convert_void',
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
					'name' : 'debug',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setError',
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
					'name' : 'setError',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.graphics.drawable.Drawable',
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
					'name' : 'setText',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.widget.TextView$BufferType',
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
					'name' : 'setText',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : '_char_array_type',
								'children' : [{'type': 'char', 'converter': 'convert_char'}],
								'converter' : 'convert__char_array_type',
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
					'name' : 'setText',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.widget.TextView$BufferType',
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
					'name' : 'setText',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'getText',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'onSaveInstanceState',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.os.Parcelable',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getLayout',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.text.Layout',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'onKeyDown',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.KeyEvent',
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
					'name' : 'onRestoreInstanceState',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'onKeyUp',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.KeyEvent',
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
					'name' : 'onKeyMultiple',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'android.view.KeyEvent',
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
					'name' : 'onKeyShortcut',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.KeyEvent',
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
					'name' : 'onTouchEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'onTrackballEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'onGenericMotionEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'onWindowFocusChanged',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'findViewsWithText',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.ArrayList',
								'children' : [{'type': 'android.view.View', 'converter': 'convert_proxy'}],
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'jumpDrawablesToCurrentState',
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
				{
					'name' : 'performLongClick',
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
					'name' : 'sendAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'onPopulateAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'setEnabled',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'performAccessibilityAction',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.os.Bundle',
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
					'name' : 'onStartTemporaryDetach',
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
				{
					'name' : 'onFinishTemporaryDetach',
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
				{
					'name' : 'onKeyPreIme',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.KeyEvent',
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
					'name' : 'onCheckIsTextEditor',
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
					'name' : 'onCreateInputConnection',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.inputmethod.EditorInfo',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.view.inputmethod.InputConnection',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'cancelLongPress',
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
				{
					'name' : 'hasOverlappingRendering',
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
					'name' : 'getFocusedRect',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.Rect',
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
					'name' : 'computeScroll',
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
				{
					'name' : 'onScreenStateChanged',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'onRtlPropertiesChanged',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'invalidateDrawable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
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
					'name' : 'setPadding',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setPaddingRelative',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setSelected',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getBaseline',
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
					'name' : 'onDragEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.DragEvent',
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
					'name' : 'getTypeface',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.graphics.Typeface',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setTypeface',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.Typeface',
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
					'name' : 'setTypeface',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.Typeface',
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
					'name' : 'setShadowLayer',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'float',
								'converter' : 'convert_float',
						},
						{
								'type' : 'float',
								'converter' : 'convert_float',
						},
						{
								'type' : 'float',
								'converter' : 'convert_float',
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
					'name' : 'getTextLocale',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.Locale',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setTextLocale',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.util.Locale',
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
					'name' : 'getTextSize',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setTextSize',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setTextSize',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getTextScaleX',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setTextScaleX',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'beginBatchEdit',
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
				{
					'name' : 'endBatchEdit',
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
				{
					'name' : 'onPreDraw',
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
					'name' : 'setGravity',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setFilters',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'android.text.InputFilter', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
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
					'name' : 'getFilters',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'android.text.InputFilter', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'getEditableText',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.text.Editable',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getLineHeight',
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
					'name' : 'getKeyListener',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.text.method.KeyListener',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setKeyListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.text.method.KeyListener',
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
					'name' : 'getMovementMethod',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.text.method.MovementMethod',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setMovementMethod',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'android.text.method.MovementMethod',
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
					'name' : 'getTransformationMethod',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.text.method.TransformationMethod',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setTransformationMethod',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'android.text.method.TransformationMethod',
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
					'name' : 'getCompoundPaddingTop',
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
					'name' : 'getCompoundPaddingBottom',
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
					'name' : 'getCompoundPaddingLeft',
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
					'name' : 'getCompoundPaddingRight',
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
					'name' : 'getCompoundPaddingStart',
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
					'name' : 'getCompoundPaddingEnd',
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
					'name' : 'getExtendedPaddingTop',
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
					'name' : 'getExtendedPaddingBottom',
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
					'name' : 'getTotalPaddingLeft',
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
					'name' : 'getTotalPaddingRight',
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
					'name' : 'getTotalPaddingStart',
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
					'name' : 'getTotalPaddingEnd',
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
					'name' : 'getTotalPaddingTop',
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
					'name' : 'getTotalPaddingBottom',
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
					'name' : 'setCompoundDrawables',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.graphics.drawable.Drawable',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.graphics.drawable.Drawable',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.graphics.drawable.Drawable',
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
					'name' : 'setCompoundDrawablesWithIntrinsicBounds',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.graphics.drawable.Drawable',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.graphics.drawable.Drawable',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.graphics.drawable.Drawable',
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
					'name' : 'setCompoundDrawablesWithIntrinsicBounds',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setCompoundDrawablesRelative',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.graphics.drawable.Drawable',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.graphics.drawable.Drawable',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.graphics.drawable.Drawable',
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
					'name' : 'setCompoundDrawablesRelativeWithIntrinsicBounds',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setCompoundDrawablesRelativeWithIntrinsicBounds',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.graphics.drawable.Drawable',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.graphics.drawable.Drawable',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.graphics.drawable.Drawable',
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
					'name' : 'getCompoundDrawables',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'android.graphics.drawable.Drawable', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'getCompoundDrawablesRelative',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'android.graphics.drawable.Drawable', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'setCompoundDrawablePadding',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getCompoundDrawablePadding',
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
					'name' : 'getAutoLinkMask',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'setTextAppearance',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
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
					'name' : 'setTextColor',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setTextColor',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.res.ColorStateList',
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
					'name' : 'getTextColors',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.content.res.TypedArray',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.content.res.ColorStateList',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getTextColors',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.content.res.ColorStateList',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getCurrentTextColor',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'setHighlightColor',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getHighlightColor',
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
					'name' : 'getShadowRadius',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getShadowDx',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getShadowDy',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getShadowColor',
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
					'name' : 'getPaint',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.text.TextPaint',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setAutoLinkMask',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'setLinksClickable',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
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
					'name' : 'getLinksClickable',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'getUrls',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'android.text.style.URLSpan', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'setHintTextColor',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.res.ColorStateList',
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
					'name' : 'setHintTextColor',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'getHintTextColors',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.content.res.ColorStateList',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getCurrentHintTextColor',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'setLinkTextColor',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'setLinkTextColor',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.res.ColorStateList',
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
					'name' : 'getLinkTextColors',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.content.res.ColorStateList',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getGravity',
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
					'name' : 'getPaintFlags',
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
					'name' : 'setPaintFlags',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setHorizontallyScrolling',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setMinLines',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getMinLines',
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
					'name' : 'setMinHeight',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getMinHeight',
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
					'name' : 'setMaxLines',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getMaxLines',
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
					'name' : 'setMaxHeight',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getMaxHeight',
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
					'name' : 'setLines',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setHeight',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setMinEms',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getMinEms',
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
					'name' : 'setMinWidth',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getMinWidth',
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
					'name' : 'setMaxEms',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getMaxEms',
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
					'name' : 'setMaxWidth',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getMaxWidth',
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
					'name' : 'setEms',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setWidth',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setLineSpacing',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getLineSpacingMultiplier',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getLineSpacingExtra',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setFreezesText',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getFreezesText',
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
					'name' : 'setEditableFactory',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'android.text.Editable$Factory',
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
					'name' : 'setSpannableFactory',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'android.text.Spannable$Factory',
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
					'name' : 'setTextKeepState',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.widget.TextView$BufferType',
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
					'name' : 'setTextKeepState',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'setHint',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'setHint',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'getHint',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setInputType',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setRawInputType',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getInputType',
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
					'name' : 'setImeOptions',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getImeOptions',
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
					'name' : 'setImeActionLabel',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'getImeActionLabel',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getImeActionId',
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
					'name' : 'setOnEditorActionListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.TextView$OnEditorActionListener',
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
					'name' : 'onEditorAction',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setPrivateImeOptions',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getPrivateImeOptions',
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
				{
					'name' : 'setInputExtras',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getInputExtras',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
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
					'name' : 'getError',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'isTextSelectable',
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
					'name' : 'setTextIsSelectable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getLineCount',
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
					'name' : 'getLineBounds',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.graphics.Rect',
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
					'name' : 'extractText',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.inputmethod.ExtractedTextRequest',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.inputmethod.ExtractedText',
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
					'name' : 'setExtractedText',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.inputmethod.ExtractedText',
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
					'name' : 'onCommitCompletion',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.inputmethod.CompletionInfo',
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
					'name' : 'onCommitCorrection',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.inputmethod.CorrectionInfo',
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
					'name' : 'onBeginBatchEdit',
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
				{
					'name' : 'onEndBatchEdit',
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
				{
					'name' : 'onPrivateIMECommand',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
					],
				},
				{
					'name' : 'setIncludeFontPadding',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getIncludeFontPadding',
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
					'name' : 'bringPointIntoView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'moveCursorToVisibleOffset',
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
					'name' : 'getSelectionStart',
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
					'name' : 'getSelectionEnd',
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
					'name' : 'hasSelection',
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
					'name' : 'setSingleLine',
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
				{
					'name' : 'setSingleLine',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setAllCaps',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setEllipsize',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.text.TextUtils$TruncateAt',
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
					'name' : 'setMarqueeRepeatLimit',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getMarqueeRepeatLimit',
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
					'name' : 'getEllipsize',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.text.TextUtils$TruncateAt',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setSelectAllOnFocus',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setCursorVisible',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'isCursorVisible',
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
					'name' : 'addTextChangedListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.text.TextWatcher',
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
					'name' : 'removeTextChangedListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.text.TextWatcher',
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
					'name' : 'clearComposingText',
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
				{
					'name' : 'didTouchFocusSelect',
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
					'name' : 'setScroller',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.Scroller',
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
					'name' : 'getTextColor',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.content.res.TypedArray',
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
					'name' : 'isInputMethodTarget',
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
					'name' : 'onTextContextMenuItem',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'isSuggestionsEnabled',
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
					'name' : 'setCustomSelectionActionModeCallback',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.ActionMode$Callback',
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
					'name' : 'getCustomSelectionActionModeCallback',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.view.ActionMode$Callback',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getOffsetForPosition',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.TextView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.TextView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.TextView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.TextView$SavedState',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
				{
					'name' : 'CREATOR',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'android.os.Parcelable$Creator',
							'children' : [{'type': 'android.widget.TextView$SavedState', 'converter': 'convert_proxy'}],
							'converter' : 'convert_proxy',
					},
				},
			],	
			'functions' : [
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
				{
					'name' : 'writeToParcel',
					'tags' : ['_instance', '_proxy'],
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
			],
		},
		{
			'name' : 'android.widget.TimePicker',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'isEnabled',
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
					'name' : 'dispatchPopulateAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onPopulateAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'setEnabled',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getBaseline',
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
					'name' : 'setOnTimeChangedListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.TimePicker$OnTimeChangedListener',
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
					'name' : 'getCurrentHour',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.Integer',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setCurrentHour',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Integer',
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
					'name' : 'setIs24HourView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Boolean',
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
					'name' : 'is24HourView',
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
					'name' : 'getCurrentMinute',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.Integer',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setCurrentMinute',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Integer',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.TimePicker',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'android.widget.TimePicker',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.TimePicker',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.Toast',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'LENGTH_SHORT',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
				{
					'name' : 'LENGTH_LONG',
					'tags' : ['_proxy', '_static'],
					'type' : 
					{
							'type' : 'int',
							'converter' : 'convert_int',
					},
				},
			],	
			'functions' : [
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
					'name' : 'setText',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'cancel',
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
				{
					'name' : 'getView',
					'tags' : ['_instance', '_proxy'],
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
				{
					'name' : 'setDuration',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getDuration',
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
					'name' : 'setGravity',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getGravity',
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
					'name' : 'setView',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setMargin',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getHorizontalMargin',
					'tags' : ['_instance', '_proxy'],
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
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getXOffset',
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
					'name' : 'getYOffset',
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
					'name' : 'makeText',
					'tags' : ['_proxy', '_singleton', '_static'],
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.Toast',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.ToggleButton',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'setBackgroundDrawable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.graphics.drawable.Drawable',
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
					'name' : 'setChecked',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getTextOn',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setTextOn',
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
					'name' : 'getTextOff',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.CharSequence',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setTextOff',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.ToggleButton',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.ToggleButton',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.ToggleButton',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.TwoLineListItem',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'getText1',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.TextView',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getText2',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.widget.TextView',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.TwoLineListItem',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.TwoLineListItem',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'android.widget.TwoLineListItem',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.VideoView',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'start',
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
				{
					'name' : 'suspend',
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
				{
					'name' : 'resume',
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
				{
					'name' : 'onKeyDown',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.KeyEvent',
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
					'name' : 'onTouchEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'onTrackballEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'getDuration',
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
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'pause',
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
				{
					'name' : 'getCurrentPosition',
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
					'name' : 'seekTo',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'isPlaying',
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
					'name' : 'getBufferPercentage',
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
					'name' : 'canPause',
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
					'name' : 'canSeekBackward',
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
					'name' : 'canSeekForward',
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
					'name' : 'getAudioSessionId',
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
					'name' : 'resolveAdjustedSize',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setVideoPath',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setVideoURI',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.net.Uri',
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
					'name' : 'stopPlayback',
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
				{
					'name' : 'setMediaController',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.MediaController',
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
					'name' : 'setOnPreparedListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.media.MediaPlayer$OnPreparedListener',
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
					'name' : 'setOnCompletionListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.media.MediaPlayer$OnCompletionListener',
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
					'name' : 'setOnErrorListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.media.MediaPlayer$OnErrorListener',
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
					'name' : 'setOnInfoListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.media.MediaPlayer$OnInfoListener',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.VideoView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.VideoView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'android.widget.VideoView',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.ViewAnimator',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'addView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.ViewGroup$LayoutParams',
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
					'name' : 'removeView',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'removeViewInLayout',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'removeViewsInLayout',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'removeViewAt',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'removeViews',
					'tags' : ['_instance', '_proxy'],
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
								'type' : 'void',
								'converter' : 'convert_void',
						},
					],
				},
				{
					'name' : 'removeAllViews',
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
				{
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'getBaseline',
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
					'name' : 'showNext',
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
				{
					'name' : 'showPrevious',
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
				{
					'name' : 'setDisplayedChild',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getDisplayedChild',
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
					'name' : 'getCurrentView',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getInAnimation',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.view.animation.Animation',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setInAnimation',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.animation.Animation',
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
					'name' : 'setInAnimation',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
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
					'name' : 'getOutAnimation',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.view.animation.Animation',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setOutAnimation',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
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
					'name' : 'setOutAnimation',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.animation.Animation',
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
					'name' : 'setAnimateFirstView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getAnimateFirstView',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.ViewAnimator',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.ViewAnimator',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.ViewFlipper',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'setFlipInterval',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'startFlipping',
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
				{
					'name' : 'stopFlipping',
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
				{
					'name' : 'isFlipping',
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
					'name' : 'setAutoStart',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'isAutoStart',
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.ViewFlipper',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.ViewFlipper',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.ViewSwitcher',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'reset',
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
				{
					'name' : 'setFactory',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.ViewSwitcher$ViewFactory',
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
					'name' : 'addView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.ViewGroup$LayoutParams',
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
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'getNextView',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.ViewSwitcher',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.ViewSwitcher',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.ZoomButton',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'onKeyUp',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'android.view.KeyEvent',
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
					'name' : 'onTouchEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'dispatchUnhandledMove',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
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
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'setEnabled',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'onLongClick',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
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
					'name' : 'setZoomSpeed',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.ZoomButton',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.ZoomButton',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.ZoomButton',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.ZoomButtonsController',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'isVisible',
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
					'name' : 'setVisible',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setFocusable',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'onTouch',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'getContainer',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.view.ViewGroup',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'setZoomSpeed',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setZoomInEnabled',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setZoomOutEnabled',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setOnZoomListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.widget.ZoomButtonsController$OnZoomListener',
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
					'name' : 'isAutoDismissed',
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
					'name' : 'setAutoDismissed',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'getZoomControls',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.ZoomButtonsController',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.view.View',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.ZoomControls',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
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
				{
					'name' : 'onTouchEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.MotionEvent',
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
					'name' : 'hasFocus',
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
					'name' : 'onInitializeAccessibilityEvent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityEvent',
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
					'name' : 'onInitializeAccessibilityNodeInfo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.accessibility.AccessibilityNodeInfo',
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
					'name' : 'hide',
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
				{
					'name' : 'setZoomSpeed',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setOnZoomInClickListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View$OnClickListener',
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
					'name' : 'setOnZoomOutClickListener',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'android.view.View$OnClickListener',
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
					'name' : 'setIsZoomInEnabled',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setIsZoomOutEnabled',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.ZoomControls',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.ZoomControls',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'android.content.Context',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'android.util.AttributeSet',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'android.widget.ImageView$ScaleType',
			'tags' : ['_enum', '_proxy'],
			'fields' : [
				{
					'name' : 'CENTER',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'android.widget.ImageView$ScaleType',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'CENTER_CROP',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'android.widget.ImageView$ScaleType',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'CENTER_INSIDE',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'android.widget.ImageView$ScaleType',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'FIT_CENTER',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'android.widget.ImageView$ScaleType',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'FIT_END',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'android.widget.ImageView$ScaleType',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'FIT_START',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'android.widget.ImageView$ScaleType',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'FIT_XY',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'android.widget.ImageView$ScaleType',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'MATRIX',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'android.widget.ImageView$ScaleType',
							'converter' : 'convert_proxy',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'values',
					'tags' : ['_proxy', '_static'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'android.widget.ImageView$ScaleType', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'valueOf',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.widget.ImageView$ScaleType',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.TextView$BufferType',
			'tags' : ['_enum', '_proxy'],
			'fields' : [
				{
					'name' : 'EDITABLE',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'android.widget.TextView$BufferType',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'NORMAL',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'android.widget.TextView$BufferType',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'SPANNABLE',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'android.widget.TextView$BufferType',
							'converter' : 'convert_proxy',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'values',
					'tags' : ['_proxy', '_static'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'android.widget.TextView$BufferType', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'valueOf',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'android.widget.TextView$BufferType',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'android.widget.RemoteViews$ActionException',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
				{
					'name' : 'android.widget.RemoteViews$ActionException',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Exception',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'android.widget.RemoteViews$ActionException',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'java.math.MathContext',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'UNLIMITED',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'java.math.MathContext',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'DECIMAL32',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'java.math.MathContext',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'DECIMAL64',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'java.math.MathContext',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'DECIMAL128',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'java.math.MathContext',
							'converter' : 'convert_proxy',
					},
				},
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
				{
					'name' : 'hashCode',
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
					'name' : 'getPrecision',
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
					'name' : 'getRoundingMode',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.math.RoundingMode',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
				{
					'name' : 'java.math.MathContext',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
				},
				{
					'name' : 'java.math.MathContext',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
						{
								'type' : 'java.math.RoundingMode',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'java.math.MathContext',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'java.math.RoundingMode',
			'tags' : ['_enum', '_proxy'],
			'fields' : [
				{
					'name' : 'UP',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'java.math.RoundingMode',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'DOWN',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'java.math.RoundingMode',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'CEILING',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'java.math.RoundingMode',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'FLOOR',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'java.math.RoundingMode',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'HALF_UP',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'java.math.RoundingMode',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'HALF_DOWN',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'java.math.RoundingMode',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'HALF_EVEN',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'java.math.RoundingMode',
							'converter' : 'convert_proxy',
					},
				},
				{
					'name' : 'UNNECESSARY',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'java.math.RoundingMode',
							'converter' : 'convert_proxy',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'values',
					'tags' : ['_proxy', '_static'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.math.RoundingMode', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'valueOf',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.math.RoundingMode',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'valueOf',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'int',
								'converter' : 'convert_int',
						},
					],
					'returns' : [
						{
								'type' : 'java.math.RoundingMode',
								'converter' : 'convert_proxy',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'java.nio.charset.Charset',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'name',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'forName',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.nio.charset.Charset',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'equals',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'hashCode',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'compareTo',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'java.nio.charset.Charset',
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
					'name' : 'contains',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.nio.charset.Charset',
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
					'name' : 'decode',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'java.nio.ByteBuffer',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.nio.CharBuffer',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'encode',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'java.nio.CharBuffer',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.nio.ByteBuffer',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'encode',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.nio.ByteBuffer',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'isSupported',
					'tags' : ['_proxy', '_static'],
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
					'name' : 'defaultCharset',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.nio.charset.Charset',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'aliases',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'availableCharsets',
					'tags' : ['_proxy', '_static'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.util.SortedMap',
								'children' : [{'type': 'java.lang.String', 'converter': 'convert_proxy'}, {'type': 'java.nio.charset.Charset', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'displayName',
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
				{
					'name' : 'displayName',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'isRegistered',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'newDecoder',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.nio.charset.CharsetDecoder',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'newEncoder',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.nio.charset.CharsetEncoder',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'canEncode',
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
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'java.lang.Object',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'wait',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'wait',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
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
					'name' : 'wait',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : 'long',
								'converter' : 'convert_long',
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
				{
					'name' : 'hashCode',
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
					'name' : 'getClass',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.Class',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'notify',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'notifyAll',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
			'constructors' : [	
				{
					'name' : 'java.lang.Object',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
			],
		},
		{
			'name' : 'java.lang.Class',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'forName',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.Class',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'forName',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'boolean',
								'converter' : 'convert_boolean',
						},
						{
								'type' : 'java.lang.ClassLoader',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.Class',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
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
				{
					'name' : 'isAssignableFrom',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Class',
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
					'name' : 'isInstance',
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
					'name' : 'getModifiers',
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
					'name' : 'isInterface',
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
					'name' : 'isArray',
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
					'name' : 'isPrimitive',
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
					'name' : 'getSuperclass',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.Class',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getComponentType',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.Class',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getName',
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
				{
					'name' : 'newInstance',
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
					'name' : 'isAnnotation',
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
					'name' : 'isSynthetic',
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
					'name' : 'getClassLoader',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'getTypeParameters',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.reflect.TypeVariable', 'children': [{'type': 'java.lang.Class', 'children': [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'getGenericSuperclass',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.reflect.Type',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getPackage',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.Package',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getInterfaces',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.Class', 'children': [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'getGenericInterfaces',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.reflect.Type', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'getSigners',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'getEnclosingMethod',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.reflect.Method',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getEnclosingConstructor',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.reflect.Constructor',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getDeclaringClass',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.Class',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getEnclosingClass',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.lang.Class',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getSimpleName',
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
				{
					'name' : 'getCanonicalName',
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
				{
					'name' : 'isAnonymousClass',
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
					'name' : 'isLocalClass',
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
					'name' : 'isMemberClass',
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
					'name' : 'getClasses',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.Class', 'children': [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'getFields',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.reflect.Field', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'getMethods',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.reflect.Method', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'getConstructors',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.reflect.Constructor', 'children': [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'getField',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.reflect.Field',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getMethod',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.Class', 'children': [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.reflect.Method',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getConstructor',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.Class', 'children': [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.reflect.Constructor',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getDeclaredClasses',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.Class', 'children': [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'getDeclaredFields',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.reflect.Field', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'getDeclaredMethods',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.reflect.Method', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'getDeclaredConstructors',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.reflect.Constructor', 'children': [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'getDeclaredField',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.reflect.Field',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getDeclaredMethod',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.Class', 'children': [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.reflect.Method',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getDeclaredConstructor',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.Class', 'children': [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}], 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.reflect.Constructor',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getResourceAsStream',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.io.InputStream',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getResource',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.net.URL',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getProtectionDomain',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.security.ProtectionDomain',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'desiredAssertionStatus',
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
					'name' : 'isEnum',
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
					'name' : 'getEnumConstants',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'cast',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'asSubclass',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Class',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.Class',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getAnnotation',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Class',
								'children' : [{'type': 'java.lang.annotation.Annotation', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.annotation.Annotation',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'isAnnotationPresent',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.Class',
								'children' : [{'type': 'java.lang.annotation.Annotation', 'converter': 'convert_proxy'}],
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
					'name' : 'getAnnotations',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.annotation.Annotation', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
				{
					'name' : 'getDeclaredAnnotations',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.annotation.Annotation', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
						},
					],
				},
			],	
			'constructors' : [	
			],
		},
		{
			'name' : 'java.lang.ClassLoader',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'loadClass',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.lang.Class',
								'children' : [{'type': 'java.lang.Object', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getSystemClassLoader',
					'tags' : ['_proxy', '_singleton', '_static'],
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
					'name' : 'getResourceAsStream',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.io.InputStream',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getResource',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.net.URL',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getSystemResourceAsStream',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.io.InputStream',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getSystemResource',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.net.URL',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getResources',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.util.Enumeration',
								'children' : [{'type': 'java.net.URL', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getSystemResources',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.util.Enumeration',
								'children' : [{'type': 'java.net.URL', 'converter': 'convert_proxy'}],
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getParent',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'setDefaultAssertionStatus',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'setPackageAssertionStatus',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'setClassAssertionStatus',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'clearAssertionStatus',
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
			'constructors' : [	
			],
		},
		{
			'name' : 'java.io.InputStream',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
				{
					'name' : 'close',
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
				{
					'name' : 'mark',
					'tags' : ['_instance', '_proxy'],
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
					'name' : 'reset',
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
				{
					'name' : 'read',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : '_byte_array_type',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array_type',
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
					'name' : 'read',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : '_byte_array_type',
								'children' : [{'type': 'byte', 'converter': 'convert_byte'}],
								'converter' : 'convert__byte_array_type',
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
					'name' : 'read',
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
					'name' : 'skip',
					'tags' : ['_instance', '_proxy'],
					'params' : [
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
					'name' : 'available',
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
					'name' : 'markSupported',
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
			],	
			'constructors' : [	
				{
					'name' : 'java.io.InputStream',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
			],
		},
		{
			'name' : 'java.net.URL',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
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
				{
					'name' : 'hashCode',
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
					'name' : 'openStream',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.io.InputStream',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getPath',
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
				{
					'name' : 'toURI',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.net.URI',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getAuthority',
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
				{
					'name' : 'getQuery',
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
				{
					'name' : 'getUserInfo',
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
				{
					'name' : 'getPort',
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
					'name' : 'getDefaultPort',
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
					'name' : 'getProtocol',
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
				{
					'name' : 'getHost',
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
				{
					'name' : 'getFile',
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
				{
					'name' : 'getRef',
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
				{
					'name' : 'sameFile',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.net.URL',
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
					'name' : 'toExternalForm',
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
				{
					'name' : 'openConnection',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.net.Proxy',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.net.URLConnection',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'openConnection',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.net.URLConnection',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getContent',
					'tags' : ['_instance', '_no_callback', '_proxy'],
					'params' : [
						{
								'type' : '_object_array_type',
								'children' : [{'type': 'java.lang.Class', 'converter': 'convert_proxy'}],
								'converter' : 'convert__object_array_type',
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
					'name' : 'getContent',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					'name' : 'setURLStreamHandlerFactory',
					'tags' : ['_proxy', '_static'],
					'params' : [
						{
								'type' : 'java.net.URLStreamHandlerFactory',
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
			],	
			'constructors' : [	
				{
					'name' : 'java.net.URL',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
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
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'java.net.URL',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'java.net.URL',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
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
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.net.URLStreamHandler',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'java.net.URL',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'java.net.URL',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.net.URL',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'java.net.URL',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.net.URL',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.net.URLStreamHandler',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'java.net.URLStreamHandler',
			'tags' : ['_abstract', '_proxy'],
			'fields' : [
			],	
			'functions' : [
			],	
			'constructors' : [	
				{
					'name' : 'java.net.URLStreamHandler',
					'tags' : ['_proxy'],
					'params' : [
					],
				},
			],
		},
		{
			'name' : 'java.net.URI',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
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
				{
					'name' : 'hashCode',
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
					'name' : 'compareTo',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.net.URI',
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
					'name' : 'isAbsolute',
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
					'name' : 'getPath',
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
				{
					'name' : 'toURL',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.net.URL',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'resolve',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.net.URI',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'resolve',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.net.URI',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.net.URI',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'normalize',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.net.URI',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'isOpaque',
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
					'name' : 'getScheme',
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
				{
					'name' : 'getAuthority',
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
				{
					'name' : 'getFragment',
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
				{
					'name' : 'getQuery',
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
				{
					'name' : 'getUserInfo',
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
				{
					'name' : 'getPort',
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
					'name' : 'getHost',
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
				{
					'name' : 'create',
					'tags' : ['_proxy', '_singleton', '_static'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.net.URI',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'parseServerAuthority',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.net.URI',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'relativize',
					'tags' : ['_instance', '_proxy'],
					'params' : [
						{
								'type' : 'java.net.URI',
								'converter' : 'convert_proxy',
						},
					],
					'returns' : [
						{
								'type' : 'java.net.URI',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'getRawSchemeSpecificPart',
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
				{
					'name' : 'getSchemeSpecificPart',
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
				{
					'name' : 'getRawAuthority',
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
				{
					'name' : 'getRawUserInfo',
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
				{
					'name' : 'getRawPath',
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
				{
					'name' : 'getRawQuery',
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
				{
					'name' : 'getRawFragment',
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
				{
					'name' : 'toASCIIString',
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
			],	
			'constructors' : [	
				{
					'name' : 'java.net.URI',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
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
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'java.net.URI',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'java.net.URI',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'java.net.URI',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'java.net.URI',
					'tags' : ['_proxy'],
					'params' : [
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
						{
								'type' : 'java.lang.String',
								'converter' : 'convert_proxy',
						},
					],
				},
			],
		},
		{
			'name' : 'java.net.Proxy',
			'tags' : ['_instance', '_proxy'],
			'fields' : [
				{
					'name' : 'NO_PROXY',
					'tags' : ['_proxy', '_singleton', '_static'],
					'type' : 
					{
							'type' : 'java.net.Proxy',
							'converter' : 'convert_proxy',
					},
				},
			],	
			'functions' : [
				{
					'name' : 'type',
					'tags' : ['_instance', '_proxy'],
					'params' : [
					],
					'returns' : [
						{
								'type' : 'java.net.Proxy$Type',
								'converter' : 'convert_proxy',
						},
					],
				},
				{
					'name' : 'equals',
					'tags' : ['_instance', '_no_callback', '_proxy'],
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
					],