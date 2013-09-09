### Introduction
ProxyGen generates C++ code using a proxy-based pattern to wrap underlying iOS and Android libraries. ProxyGen implements a set of basic converters and JNI details under the hood, so you don't need to worry about them. 

### Setup
We depend on the Clang tool https://github.com/proxy-gen/clocxml to extract Objective-C header file information. So after cloning the ProxyGen repository, be sure to update and initialize all submodules.

```
$ git submodule update --init --recursive
```

### Using this tool
The ProxyGen front-end is a python script that you can find under `generator/generator.py`. For Android, we provide an additional convenience wrapper `codegen.sh` that you can find under the `samples` directory.

Platform specific details are as follows:

### Android
Please follow along with the samples provided under codegen/samples

For Android we recommend that you interact with the wrapper codegen.sh script instead of directly invoking the generator/generator.py

Overall there are 3 steps to this process. 
a) You create a full blown config file from a minimal config file you seed the tool with 
b) You make an necessary changes to the generated config as required, and then you generate the C++ files that implements the proxy patterns. This also builds a static library
c) Finally, you package them

samples/platforms/android/android: Contains the configuration setup to generate proxies for the entire Android SDK

First, setup the following environment variables
```
ANDROID_HOME=/path/to/android/sdk
NDK_HOME=/path/to/android/ndk
CODEGEN_HOME=/path/to/codegen
```
You would need to ensure that the Android SDK has the following installed 

Build Tools for android-18 
System Image for Android 2.2 (API 8).  
	
Next, run the following in order under cxx
```
./codegen.sh --configure /path/to/minimum/config/file # Generates the full blown config
./codegen.sh --generate  # Generates the C++ proxy classes
./codegen.sh --package	 # Packages the project as a pre-built binary
```

samples/platforms/android/facebook: Contains the configuration setup to generate proxies for the entire Facebook SDK. 

Configuring this sample is similar to the steps above to generate the Android SDK but has the additional steps of requiring to build the facebook sdk and to add the `_callback` tags in the config. 

For example, the `com.facebook.Session#open` function accepts an implementation of the callback `com.facebook.Session$StatusCallback`. At some point in the future, the native Facebook SDK will callback into `com.facebook.Session$StatusCallback#call`. We need to make sure that this call goes all the way through into the C++ layer and is handled by the C++ implementation of the callback.

By tagging the `com.facebook.Session#open` as a callback, we make sure that the code generator will propagate the callback invocation all the way into the C++ layer.

Before getting started, navigate to `java\facebook-android-sdk-3.0.5\facebook` and then run `ant debug` to build the facebook sdk

Then, as usual,

First, setup the following environment variables
```
ANDROID_HOME=/path/to/android/sdk
NDK_HOME=/path/to/android/ndk
CODEGEN_HOME=/path/to/codegen
```
You would need to ensure that the Android SDK has the following installed 

Build Tools for android-18 
System Image for Android 2.2 (API 8).  
	
Next, run the following under `cxx`
```
./codegen.sh --configure /path/to/minimal/config/file # Generates the full blown config
```	
	
Open up the full blown config file and add the `_callback` tag to the following classes and functions

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
```
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
```	
	
Once the above is done, continue as before

Run the following in order under `cxx`
```
./codegen.sh --generate  # Generates the C++ proxy classes
./codegen.sh --package	  # Packages the project as a pre-built binary
```	
The `samples/platforms/android/facebook\cxx\samples\SessionLoginSampleCXX` is a sample C++ application that uses the Facebook SDK to perform basic tasks (Login/Logout/Get Friends)


### iOS

The `samples/platforms/ios/facebook` directory contains an example of how to use this tool to generate proxies for nearly all of `FacebookSDK.framework`. The latest FacebookSDK framework is located in the `objc` subdirectory. An example of using the generated Facebook API to perform basic tasks is located under the `TestFacebookCXX` subdirectory. Two shell scripts wrap the `--generate-config` and `--generate-code` invocations of this tool under the `cxx` subdirectory. The input config file and generated code are also located under the `cxx` subdirectory.

First, run the `generate_config.sh` script from the `cxx` directory via 
```
./generate_config.sh
```
It may take half a minute to create the AST of the `FacebookSDK.framework` headers and parse the metadata.

Because of a dependency choice in the FacebookSDK `FBErrorUtility.h` (they did not include any Foundation headers), we are unable to generate code for this file. To skip generating a proxy for the FBErrorUtility interface, edit the tags of the FBErrorUtility interface in the generated config by changing `_proxy` to `_no_proxy`.

Next, run the `generate_code.sh` script from the `cxx` directory via
```
./generate_code.sh
```
It should take only a few seconds to generate the C++ code.

To build a static library for the `armv7` and `i386` architectures, change to the `generated/project` subdirectory and run `make`. The fat library will be located under the `lib/fat` subdirectory after completion.

Open the `TestFacebookCXX` Xcode project and notice that the target's `Header Search Path` settings contain the generated includes directory. Also notice that the project links with the fat library that we created with `make`. This project uses Objective-C for the UI, but all button callbacks are written in C++. You can build an run this project on the iOS Simulator.

### Authors and Contributors
This project is open sourced as part of the work the Mobile ZDK team did for Zynga. Android work is lead by Ron Vergis (@rvergis), iOS work is lead by Wesley Souza (@wesjarrettsouza) and an iOS prototype was lead by Andrew Ushnakov. The project and team was managed by Shiva Bhattacharjee (@bhattas)
