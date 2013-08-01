
CXX 						:= /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang
I386FLAGS 					:= -ObjC++ -std=gnu++11 -stdlib=libc++ -arch i386 -fobjc-arc -mios-simulator-version-min=6.1 -I/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib/clang/4.2/include/ -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.1.sdk -F/Users/wsouza/projects/ZDK/cxx-bindings-generator/generator/platform/ios/resources/CXXConverter/build/Debug-iphoneos -F/Users/wsouza/projects/ZDK/cxx-bindings-generator/samples/platform/ios/facebook/objc/facebook-ios-sdk -I./includes/
ARMV7FLAGS 					:= -ObjC++ -std=gnu++11 -stdlib=libc++ -arch armv7 -fobjc-arc -miphoneos-version-min=6.1 -I/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib/clang/4.2/include/ -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS6.1.sdk -F/Users/wsouza/projects/ZDK/cxx-bindings-generator/generator/platform/ios/resources/CXXConverter/build/Debug-iphoneos -F/Users/wsouza/projects/ZDK/cxx-bindings-generator/samples/platform/ios/facebook/objc/facebook-ios-sdk -I./includes/

PROXIES_SOURCE 				:= $(wildcard impl/FacebookCXX/proxies/*.mm)
CONVERTER_SOURCE 			:= $(wildcard impl/FacebookCXX/converters/*.mm)
CONFORMER_SOURCE 			:= $(wildcard impl/FacebookCXX/conformers/*.mm)
CONFORMER_PROTOCOL_SOURCE 	:= $(wildcard impl/FacebookCXX/conformers/protocols/*.mm)
SOURCE 						:= $(PROXIES_SOURCE) $(CONVERTER_SOURCE) $(CONFORMER_SOURCE) $(CONFORMER_PROTOCOL_SOURCE)

OBJECTS_I386_FOLDER			:=./obj/i386/
OBJECTS_I386					:=$(SOURCE:%.mm=$(OBJECTS_I386_FOLDER)%.o)
OBJECTS_ARMV7_FOLDER			:=./obj/armv7/
OBJECTS_ARMV7					:=$(SOURCE:%.mm=$(OBJECTS_ARMV7_FOLDER)%.o)

LIB_NAME 					:= libFacebookCXX.a
LIB_I386_FOLDER				:= ./lib/i386/
LIB_I386						:= $(LIB_I386_FOLDER)$(LIB_NAME)
LIB_ARMV7_FOLDER				:= ./lib/armv7/
LIB_ARMV7						:= $(LIB_ARMV7_FOLDER)$(LIB_NAME)
LIB_FAT_FOLDER				:= ./lib/fat/
LIB_FAT 					:= $(LIB_FAT_FOLDER)$(LIB_NAME)

BUILD_LOG					:= ./build.log

all: $(BUILD_LOG) $(LIB_FAT)

$(BUILD_LOG):
	@rm -f $(BUILD_LOG)
	@echo "Starting build at $(shell date)." > build.log

$(LIB_FAT): $(LIB_I386) $(LIB_ARMV7) 
	@mkdir -p $(LIB_FAT_FOLDER)
	@echo "Building fat library $(notdir $(LIB_FAT)) ..."
	@echo "See build.log for build details."
	@lipo -output $(LIB_FAT) -create -arch i386 $(LIB_I386) -arch armv7 $(LIB_ARMV7) 

$(LIB_I386): $(OBJECTS_I386)
	@echo "Archiving $(notdir $(LIB_I386)) for i386 ..."
	@mkdir -p $(LIB_I386_FOLDER)
	@ar rcs $(LIB_I386) $(OBJECTS_I386)

$(LIB_ARMV7): $(OBJECTS_ARMV7)
	@echo "Archiving $(notdir $(LIB_ARMV7)) for armv7 ..."
	@mkdir -p $(LIB_ARMV7_FOLDER)
	@ar rcs $(LIB_ARMV7) $(OBJECTS_ARMV7)

$(OBJECTS_I386): $(OBJECTS_I386_FOLDER)%.o: %.mm
	@echo "Compiling $(notdir $<) ..."
	@mkdir -p $(dir $@)
	@echo "$(CXX) $(I386FLAGS) -c $< -o $@">>build.log
	@$(CXX) $(I386FLAGS) -c $< -o $@ 1>&2 2>>build.log

$(OBJECTS_ARMV7): $(OBJECTS_ARMV7_FOLDER)%.o: %.mm
	@echo "Compiling $(notdir $<) ..."
	@mkdir -p $(dir $@)
	@echo "$(CXX) $(ARMV7FLAGS) -c $< -o $@">>build.log
	@$(CXX) $(ARMV7FLAGS) -c $< -o $@ 1>&2 2>>build.log


clean:
	@echo "Removing object files."
	@rm -rf ./obj

purge: clean
	@echo "Removing library files."
	@rm -rf ./lib
