opts = {
    "clang_args": (
        "-ObjC++",
        ),
    "headers_search_path": (
        # ../samples/facebook-ios-sdk/src/
        "../samples/facebook-ios-sdk/src/",
        "/System/Library/Frameworks/Foundation.framework/Headers/",
        ),
    "frameworks_search_path": (
        ),
    "enabled_frameworks": (
        ),
    "namespace": "fbcxx",
    "objc_headers": ( # headers, which contains interfaces we want to process
        "../samples/facebook-ios-sdk/src/FBSession.h",
        "../samples/facebook-ios-sdk/src/FBSessionTokenCachingStrategy.h"
        ),
    "objc_interfaces": ( # interfaces to proces
        "FBSessionTokenCachingStrategy",
        "FBSession",
        ),
    "custom_params_handlers": {
        },

    "custom_rt_handlers": {
        },

    # per interface options

    "enums_opts": {
        "FBSessionDefaultAudience": {"cxx_name": "FBSessionDefaultAudienceCxx", "output_target": "FbCxx"}
        },

    "interfaces_opts": {
        "FBSessionTokenCachingStrategy": {
            "output_target": "FbCxx",
            "cxx_class_name": "FBSessionTokenCachingStrategyCxx",
            "add_wrapping_constructor": True,
            "objc_instance_field": "self",
            "skip_properties": [],
            "skip_methods": [
                # skipping almost all methods
                "cacheTokenInformation",
                "fetchTokenInformation",
                "clearToken",
                "defaultInstance",
                "tokenInformation",
                "isValidTokenInformation"
                ],
            "properties": {},
            "methods": {
                "init": {"cast_id_to": "FBSessionTokenCachingStrategy"},
                "initWithUserDefaultTokenInformationKeyName": {"cast_id_to": "FBSessionTokenCachingStrategy"}
                }
            },

        "FBSession": {
            "output_target": "FbCxx",
            "cxx_class_name": "FbSessionCxx",
            "add_wrapping_constructor": True,
            "objc_instance_field": "self",
            "skip_properties": [
                "isOpen",
                "state",
                "appID",
                "urlSchemeSuffix",
                "accessToken",
                "expirationDate",
                "permissions",
                "loginType",
                "useSafariForLogin",
                ],
            "skip_methods": [
                # skipping almost all methods
                "initWithPermissions",
                "openWithCompletionHandler",
                "openWithBehavior",
                "close",
                "closeAndClearTokenInformation",
                "reauthorizeWithPermissions",
                "reauthorizeWithReadPermissions",
                "reauthorizeWithPublishPermissions",
                "handleOpenURL",
                "handleDidBecomeActive",
                "openActiveSessionWithAllowLoginUI",
                "openActiveSessionWithPermissions",
                "openActiveSessionWithReadPermissions",
                "openActiveSessionWithPublishPermissions",
                "activeSession",
                "setActiveSession",
                "setDefaultAppID",
                "defaultAppID"
                ],
            "properties": {},
            "methods": {
                "init": {"cast_id_to": "FBSession"},
                "initWithAppID": {"cast_id_to": "FBSession", "param_opts": {"permissions": {"cast_id_to": "NSString"}}}
                }
            }
        },

    # output targets defines files which will be created
    # you can set the same target for multiple classes, so all of them will be combined in the same output file

    # each target creates header and definition file with the same prefix.
    # you can skip header generation if you want to use existing header, but be sure existing header corresponds to definition

    "output_targets": {
        "FbCxx": {
            "prefix": "FbCxx", # prefix for result file, .mm and .hpp suffixes will be added
            # don't generate header with this name
            "skip_header": False,

            # headers to include to generated header file
            "header_includes": (
                "<stdlib.h>",
                "<string>",
                "<vector>",
                "<map>"
                ),

            # headers to include in definition file
            "definition_includes": (
                "<stdlib.h>",
                "<string>",
                "<vector>",
                "<map>",
                "<GenUtilsCXX/ZyngaGenUtils.hpp>"
                ),

            # adds code from specified file to definition and header file just after include section

            "include_definition_custom_section": "",
            "include_header_custom_section": "",
            },
        },

    # directory where templates placed (in most of the cases you don't need to modify this path)
    "templates_dir": "templates/common",

    # result output directory
    "result_dir": "../samples/generated/",
    }

