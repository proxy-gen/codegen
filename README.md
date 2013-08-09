Description
============
This project provides a Python tool to generate C++ classes that proxy native abstract data types. Currently Android and iOS platforms are supported.

Setup
============
After cloning this repository, be sure to udpate and initialize all submodules with

	git submodule update --init --recursive
	
Using The Tool
============
Relative to the root of this repository the tool is located in `generator/generator.py`. Usage and options can be output by running `python generator/generator.py`.

Platform specific details are as follows:


Android
------------

-------------


`--generate-config`: Consumes a minimal config file specified with `--config` and generates the full blown config under `--output-dir`. At the minimum, the input config file must contain a Python dictionary named `config` that contains at least 2 keys, `"packages"` and `"classes"`. In addition the `config` can contain the `"includes"` key. 

Here is a sample minimal config file

	config = {
		"includes" : [
			{
			"name" : "AndroidCXX/config.py",
			},
		],
		"packages" : [
			{
			"name" : "com.facebook",
			},
		],
		"classes" : [ 
			{
				"name" : "com.facebook.Session",
			},
		],
	}

The sample config file above is minimally configured to generate C++ classes that proxy native Java classes in the `"com.facebook"` package and that are referenced through the class `"com.facebook.Session"`. In addition, the sample config file includes a reference to a full blown config that was previously generated for the Android SDK.


The `--generate-config` option will consume the sample config file above and generate a config containing the set of all classes referenced through `"com.facebook.Session"` that are in the package `"com.facebook"`. 

Here is a snippet of the generated full blown config file

	config = {
		'namespace' : 'FacebookCXX',
		'package'	: 'FacebookCXX',
		'includes' : [
			{
				'name'  : 'AndroidCXX/config.py',
			},
		],
		'converters' : [
			...
		],
		'packages' : [
			{
				'name' : 'com.facebook',
			},
		],
		'classes' : [
			{
				'name' : 'com.facebook.Session',
				'tags' : ['_instance', '_proxy'],
				'fields' : [
					{
						'name' : 'TAG',
						'tags' : ['_proxy', '_static'],
						'type' : 
						{
							'type' : 'java.lang.String',
							'converter' : 'convert_proxy',
						},
					},
					…
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
					…
				],
				…
			},
	}

The full blown config file has config details for every class, function, field, constructor, argument and return value. As you can see in the snippet above, the `com.facebook.Session` has a function called `"equals"` that accepts an argument of type `java.lang.Object` and returns a `boolean`.

-------------

`--generate-code`: Consumes a full blown config file and generates C++ classes that proxy native Java classes referenced in the config file.

Here is snippet of the generated C++ files that proxy `"com.facebook.Session"`

Snippet of Header

	...
	class com_facebook_Session
	{
	public:
		…
		// Functions
	 	bool equals(AndroidCXX::java_lang_Object const& arg0);
	 	...
	};	
	
Snippet of Impl

	// Functions
	bool com_facebook_Session::equals(AndroidCXX::java_lang_Object const& arg0)
	{
		LOGV("bool com_facebook_Session::equals(AndroidCXX::java_lang_Object const& arg0) enter");

		const char *methodName = "equals";
		const char *methodSignature = "(Ljava/lang/Object;)Z";
		const char *className = "com/facebook/Session";

		bool result = (bool) *((bool *) cxx_value);

		return result;
	}

As you can see in the snippets above, the generated function `"equals"` accepts the C++ proxy for `"java.lang.Object"` as the argument and returns a bool after proxying the call into the corresponding native Java class through JNI. 

The android generator automagically handle all type conversions by proxying the entire Android SDK. 


iOS
------------
The following `generator.py` options currently have no effect: `--file`, `--wrapper-file`, `--generate-reports`, `--generate-projects`, `--generate-wrapper-code`, `--generate-wrapper-projects`, `--include-wrapper-package`, `--include-wrapper-package-rel-path`.

------------

`--generate-config`: Uses the input config file specified with `--config`. The input config file must contain a Python dictionary named `config` that contains at least two keys, `"frameworks"` and `"interfaces"`, both of which map to lists of strings. An additional key `"clang_opts"`, mapping to a dictionary, can be specified.

The `"frameworks"` list currently only supports a single framework (an arbitrary number of frameworks may be supported in the future) referenced by absolute path.

The `"interfaces"` list may contain zero or more names of Objective-C interfaces; if no interfaces are specified then the tool infers that all interfaces are to be used.

If the `"clang_opts"` dictionary is specified, the string mapped to by key `"metadata"` will be passed as options to the clang compiler. While default clang options are inferred, you'll likely need to specify your own to avoid any errors while generating the config.

The `--generate-config` option signifies that the tool should iterate over each of the methods of the specified interfaces for the given framework and emit a config file containing every parameter and return value's type and conversion data. The tool will additionally emit method data for all interfaces and protocols in the framework that are used as a parameter or return value. Put tersely, the tool emits metadata for the dependency closure of the specified interfaces and framework. The `--output-dir` option specifies where the emitted config will be located.

-------------

`--generate-code`: Uses the input config file specified with `--config` and emits code for config objects that contain the `"_proxy"` tag and objects with the `"_no_proxy"` tag will not emit code. Generates proxy classes for all interfaces and protocols specified in the config, enums for each specified enum, and abstract classes for each specified protocol.

For output directory `(OUTPUT)` and package `(PACKAGE)`, given by the `--output-dir` and `--package` options, all header files will be located in `(OUTPUT)/project/includes/(PACKAGE)` and all implementation files will be located in `(OUTPUT)/project/impl/(PACKAGE)`.

A makefile is generated in the `(OUTPUT)/project` folder. The makefile will compile and archive all source files for a set of architectures determined by the config's `"clang_opts"` dictionary. The `"clang_opts"` dictionary must contain a `"makefile"` key which maps to a dictionay. Each key in the makefile dictionay represents an architecture to build and the mapped string will be passed as options to the clang compiler. Default makefile values are generated by the `--generate-config` option.



Samples
============

Android
------------

`samples/platforms/android/android`: Contains the configuration setup to generate proxies for the entire Android SDK

First, setup the following environment variables

	ANDROID_HOME=/path/to/android/sdk
	NDK_HOME=/path/to/android/ndk
	CODEGEN_HOME=/path/to/codegen

You would need to ensure that the Android SDK has the following installed 

	Build Tools for android-18 
	System Image for Android 2.2 (API 8).  
	
Next, run the following in order under cxx

	./codegen.sh --configure # Generates the full blown config
	./codegen.sh --generate  # Generates the C++ proxy classes
	./codegen.sh --package	  # Packages the project as a prebuilt binary


`samples/platforms/android/facebook`: Contains the configuration setup to generate proxies for the entire Facebook SDK. 

Configuring this sample is similar to the steps above to generate the Android SDK but has the additional steps of requiring to build the facebook sdk and to tag the callback classes in the config. 

For example, the `com.facebook.Session#open` function accepts an implementation of the callback `com.facebook.Session$StatusCallback`. At some point in the future, the native Facebook SDK will callback into `com.facebook.Session$StatusCallback#call`. We need to make sure that this call goes all the way through into the C++ layer and is handled by the C++ implementation of the callback.

By tagging the `com.facebook.Session#open` as a callback, we make sure that the code generator will propagate the callback invocation all the way into the C++ layer.

Before getting started, navigate to `java\facebook-android-sdk-3.0.1\facebook` and then run 

	`ant debug` 
	
to build the facebook sdk

Then, as usual,

First, setup the following environment variables

	ANDROID_HOME=/path/to/android/sdk
	NDK_HOME=/path/to/android/ndk
	CODEGEN_HOME=/path/to/codegen

You would need to ensure that the Android SDK has the following installed 

	Build Tools for android-18 
	System Image for Android 2.2 (API 8).  
	
Next, run the following under `cxx`

	./codegen.sh --configure # Generates the full blown config
	
	
Open up the full blown config file and add callback tags to the following classes and functions

	'com.facebook.Request$Callback'
	'com.facebook.Request$Callback#onCompleted'
	'com.facebook.Request$GraphPlaceListCallback'
	'com.facebook.Request$GraphPlaceListCallback#onCompleted'
	'com.facebook.Request$GraphUserCallback'
	'com.facebook.Request$GraphUserCallback#onCompleted'
	'com.facebook.Request$GraphUserListCallback'
	'com.facebook.Request$GraphUserListCallback#onCompleted'
	'com.facebook.Session$StatusCallback'
	'com.facebook.Session$StatusCallback#call'
	
	
Sample snippet of the changes are below

	{
		'name' : 'com.facebook.Request$Callback',
		'tags' : ['_interface', '_proxy', '_callback'],
		'fields' : [
		],	
		'functions' : [
			{
				'name' : 'onCompleted',
				'tags' : ['_instance', '_proxy', '_callback'],
				'params' : [
		…
	}
	
	
Once the above is done, continue as before

Run the following in order under `cxx`

	./codegen.sh --generate  # Generates the C++ proxy classes
	./codegen.sh --package	  # Packages the project as a prebuilt binary
	
The `samples/platforms/android/facebook\cxx\samples\SessionLoginSampleCXX` is a sample C++ application that uses the Facebook SDK to perform basic tasks (Login/Logout/Get Friends)


iOS
------------
The `samples/platforms/ios/facebook` directory contains an example of how to use this tool to generate proxies for nearly all of `FacebookSDK.framework`. The latest FacebookSDK framework is located in the `objc` subdirectory. An example of using the generated Facebook API to perform basic tasks is located under the `TestFacebookCXX` subdirectory. Two shell scripts wrap the `--generate-config` and `--generate-code` invocations of this tool under the `cxx` subdirectory. The input config file and generated code are also located under the `cxx` subdirectory.

First, run the `generate_config.sh` script from the `cxx` directory via 

	./generate_config.sh

It may take half a minute to create the AST of the `FacebookSDK.framework` headers and parse the metadata.


------------

__Note__

Under the current FacebookSDK version, the file `FBErrorUtility.h` doesn't import the Foundation objects. This results in compilation errors and prevents us from creating a proxy for the `FBErrorUtility` interface. Once the tool is done generating the config, open it and perform a search for `FBErrorUtility`, then set the `"_proxy"` tag to `"_no_proxy"`.

------------

There are also several functions which are set to `"_no_proxy"` because no appropriate converter was found for them. You can find these by performing a search for `"_TODO_"`.

Once the config file is generated, run the `generate_code.sh` script from the `cxx` directory via 

	./generate_code.sh

This should only take a few seconds.

To build a static library for the `armv7` and `i386` architectures, change to the `generated/project` subdirectory and run `make`. The fat library will be located under the `lib/fat` subdirectory after completion.

Open the `TestFacebookCXX` Xcode project and notice that the target's `Header Search Path` settings contain the generated includes directory. Also notice that the project links with the fat library that we created with `make`. This project uses Objective-C for the UI, but all button callbacks are written in C++. You can build an run this project on the iOS Simulator.


Repository Organization
============
Relative to the root of the repository, here are some key file locations:

- A common generator python script is located in `generator/generator.py`
- Platform dependent generator source code is located under `generator/platforms/(PLATFORM)/generator/(PLATFORM)generator.py`
- Samples and example code for each platform are located under `samples/platforms/(PLATFORM)`

iOS
------------
- A clang tool submodule is located under `generator/platforms/ios/generator/indexer/clocxml`. This tool emits an XML representation of Objective-C abstract data types.
- A Python script which parses the XML emitted by the clocxml tool is located in `generator/platforms/ios/generator/indexer/ocindex.py`.
- The default converter configuration files are located in `generator/platforms/ios/generator/converters/occonverter.py`
- Cheetah Template files for emitting C++ code are located in `generator/platforms/ios/generator/templates`

