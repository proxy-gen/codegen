
##
#set $config_module = $CONFIG.config_module
#set $config_data = $config_module.config_data
#set $package = $config_data['package']
#set $clang_opts = $config_data['clang_opts']
#set $makefile_opts = $clang_opts['makefile']
#set $arch_data = dict()
##
CXX 						:= /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang
#for $arch in $makefile_opts
#set $ARCH = $arch.upper()
#set $arch_data[$arch] = dict()
#set $arch_data[$arch]['flags'] = $ARCH + 'FLAGS'
${ARCH}FLAGS 					:= $makefile_opts[$arch]
#end for

PROXIES_SOURCE 				:= \$(wildcard impl/${package}/proxies/*.mm)
CONVERTER_SOURCE 			:= \$(wildcard impl/${package}/converters/*.mm)
CONFORMER_SOURCE 			:= \$(wildcard impl/${package}/conformers/*.mm)
CONFORMER_PROTOCOL_SOURCE 	:= \$(wildcard impl/${package}/conformers/protocols/*.mm)
SOURCE 						:= \$(PROXIES_SOURCE) \$(CONVERTER_SOURCE) \$(CONFORMER_SOURCE) \$(CONFORMER_PROTOCOL_SOURCE)

#for $arch in $makefile_opts
#set $ARCH = $arch.upper
#set $arch_data[$arch]['objects_folder'] = 'OBJECTS_' + $ARCH + '_FOLDER'
#set $arch_data[$arch]['objects'] = 'OBJECTS_' + $ARCH
OBJECTS_${ARCH}_FOLDER			:=./obj/${arch}/
OBJECTS_${ARCH}					:=\$(SOURCE:%.mm=\$(OBJECTS_${ARCH}_FOLDER)%.o)
#end for

LIB_NAME 					:= lib${package}.a
#for $arch in $makefile_opts
#set $ARCH = $arch.upper
#set $arch_data[$arch]['lib_folder'] = 'LIB_' + $ARCH + '_FOLDER'
#set $arch_data[$arch]['lib'] = 'LIB_' + $ARCH
LIB_${ARCH}_FOLDER				:= ./lib/${arch}/
LIB_${ARCH}						:= \$(LIB_${ARCH}_FOLDER)\$(LIB_NAME)
#end for
LIB_FAT_FOLDER				:= ./lib/fat/
LIB_FAT 					:= \$(LIB_FAT_FOLDER)\$(LIB_NAME)

all: \$(LIB_FAT)

#set $all_libs = ""
#set $lipo_create = ""
#for $arch in $makefile_opts
#set $all_libs = $all_libs + "$(" + $arch_data[$arch]['lib'] + ") "
#set $lipo_create = $lipo_create + '-arch ' + $arch + ' $(' + $arch_data[$arch]['lib'] + ") "
#end for
\$(LIB_FAT): $all_libs
	@mkdir -p \$(LIB_FAT_FOLDER)
	@lipo -output \$(LIB_FAT) -create ${lipo_create}

#for $arch in $makefile_opts
#set $info = $arch_data[$arch]
\$(${info['lib']}): \$(${info['objects']})
	@mkdir -p \$(${info['lib_folder']})
	@ar rcs \$(${info['lib']}) \$(${info['objects']})

#end for
#for $arch in $makefile_opts
#set $info = $arch_data[$arch]
\$(${info['objects']}): \$(${info['objects_folder']})%.o: %.mm
	@mkdir -p \$(dir \$@)
	@\$(CXX) \$(${info['flags']}) -c \$< -o \$@

#end for

clean:
	@rm -rf ./obj

purge: clean
	@rm -rf ./lib
