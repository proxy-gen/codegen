/*
 * Implementation (Proxy Converter CXX)
 * Author: cxx-bindings-generator
 */

#set $config_module = $CONFIG.config_module
#set $config_data = $config_module.config_data
#set $namespace = $config_data['namespace']
#set $package = $config_data['package']
##
#set $interfaces = $config_module.list_interfaces(tags=["_proxy"],xtags=None,name=None)	
##
#set $protocols = $config_module.list_protocols(tags=["_proxy"],xtags=None,name=None)
\#import <Foundation/NSString.h>
\#import <Foundation/NSError.h>
\#import <Foundation/NSDictionary.h>
\#import <Foundation/NSKeyValueCoding.h>
\#import <Foundation/NSArray.h>
\#import <Foundation/NSURL.h>
\#import <Foundation/NSDate.h>
\#import <Foundation/NSLocale.h>
\#include <${package}/converters/${package}Converter.hpp>

void convert_string(void* &objc, std::string &cxx, converter_t converter_type){
    if (converter_type == CONVERT_TO_OBJC){
        objc = (__bridge void*)[NSString stringWithUTF8String:cxx.c_str()];
    }
    else if(converter_type == CONVERT_TO_CXX){
        cxx = [(__bridge NSString*)objc UTF8String];
    }
}

void convert_error(void* &objc, std::string &cxx, converter_t converter_type){
    if (converter_type == CONVERT_TO_OBJC){
        objc = (__bridge void*)[NSError errorWithDomain:nil code:0 userInfo:[NSDictionary dictionaryWithObject:[NSString stringWithUTF8String:cxx.c_str()] forKey:NSLocalizedDescriptionKey]];
    }
    else if(converter_type == CONVERT_TO_CXX){
        if (objc){
            cxx = [[(__bridge NSError*)objc localizedDescription] UTF8String];
        }
        else{
            cxx = "";
        }
    }
}

void convert_array(void* &objc, std::vector<void *> &cxx, converter_t converter_type){
    if (converter_type == CONVERT_TO_OBJC){
        NSMutableArray * array = [NSMutableArray array];
        for(std::vector<void *>::iterator iter = cxx.begin(); iter != cxx.end(); iter++) {
            [array addObject:(__bridge id)(*iter)];
        }
        objc = (__bridge void*)array;
    }
    else if(converter_type == CONVERT_TO_CXX){
        cxx.clear();
        [(__bridge NSArray *)objc enumerateObjectsUsingBlock:^(id object, NSUInteger idx, BOOL *stop) {
            cxx.push_back((__bridge void*)object);
        }];
    }
}

void convert_dictionary(void* &objc, std::map<void *, void *> &cxx, converter_t converter_type){
    if (converter_type == CONVERT_TO_OBJC){
        NSMutableDictionary *dictionary = [NSMutableDictionary dictionary];
        for(std::map<void *, void *>::const_iterator iter = cxx.begin(); iter != cxx.end(); ++iter) {
            id key = (__bridge id)iter->first;
            id value = (__bridge id)iter->second;
            [dictionary setValue:value forKey:key];
        }
        objc = (__bridge void*)dictionary;
    }
    else if(converter_type == CONVERT_TO_CXX){
        cxx.clear();
        for (id key in [(__bridge NSDictionary *)objc allKeys]){
            cxx[(__bridge void *)key] = (__bridge void *)[(__bridge NSDictionary *)objc objectForKey:key];
        }
    }
}

void convert_url(void* &objc, std::string &cxx, converter_t converter_type){
    if (converter_type == CONVERT_TO_OBJC){
        objc = (__bridge void*)[NSURL URLWithString:[NSString stringWithUTF8String:cxx.c_str()]];
    }
    else if(converter_type == CONVERT_TO_CXX){
        cxx = [[(__bridge NSURL *)objc absoluteString] UTF8String];
    }
}

void convert_date(void* &objc, double &cxx, converter_t converter_type){
    if (converter_type == CONVERT_TO_OBJC){
        objc = (__bridge void*)[NSDate dateWithTimeIntervalSince1970:(NSTimeInterval)cxx];
    }
    else if(converter_type == CONVERT_TO_CXX){
        cxx =  (double)[(__bridge NSDate *)objc timeIntervalSince1970];
    }
}

void convert_locale(void* &objc, std::string &cxx, converter_t converter_type){
    if (converter_type == CONVERT_TO_OBJC){
        objc = (__bridge void*)[[NSLocale alloc] initWithLocaleIdentifier:[NSString stringWithUTF8String:cxx.c_str()]];
    }
    else if(converter_type == CONVERT_TO_CXX){
        cxx = [[(__bridge NSLocale *)objc localeIdentifier] UTF8String];
    }
}

void convert_object(void* &objc, void* &cxx, converter_t converter_type){
    if (converter_type == CONVERT_TO_OBJC){
        objc = cxx;
    }
    else if(converter_type == CONVERT_TO_CXX){
        cxx = objc;
    }
}


// Proxy Converter Types
#for $interface_config in $interfaces
#set $class_info = $interface_config['deriveddata']['targetdata']['classinfo']
#set $entity_class_name = $class_info['typename']
void convert_${entity_class_name}(void* &objc, $entity_class_name *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new ${entity_class_name}(objc));
	}
}
#end for

#for $protocol_config in $protocols
#set $protocolinfo = $protocol_config['deriveddata']['targetdata']['protocolinfo']
#set $entity_protocol_name = $protocolinfo['conformertypename']
#set $entity_proxy_name = $protocolinfo['proxyname']
void convert_${entity_protocol_name}(void* &objc, $entity_protocol_name *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		//This won't happen
	}
}
#end for

#for $protocol_config in $protocols
#set $protocolinfo = $protocol_config['deriveddata']['targetdata']['protocolinfo']
#set $entity_protocol_name = $protocolinfo['typename']
#set $entity_proxy_name = $protocolinfo['proxyname']
void convert_${entity_protocol_name}(void* &objc, $entity_protocol_name *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		//This won't happen
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new ${entity_protocol_name}(objc));
	}
}
#end for

