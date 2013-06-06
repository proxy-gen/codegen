// definition file template for Objectiv-C++

#import <stdlib.h>
#import <string>
#import <vector>
#import <map>
#import <GenUtilsCXX/ZyngaGenUtils.hpp>
#import "FbCxx.hpp"



using namespace std;

// custom convertors


// generated converors
namespace fbcxx {

// convertors defintion

FbSessionCxx* FbSessionCxx_ConvertFromNative(FBSession* object) {
    return new FbSessionCxx((__bridge void *) object);
}

FBSession* FbSessionCxx_ConvertToNative(FbSessionCxx& object) {
    return (__bridge FBSession *) object.getProxyObject();
}


FBSessionTokenCachingStrategyCxx* FBSessionTokenCachingStrategyCxx_ConvertFromNative(FBSessionTokenCachingStrategy* object) {
    return new FBSessionTokenCachingStrategyCxx((__bridge void *) object);
}

FBSessionTokenCachingStrategy* FBSessionTokenCachingStrategyCxx_ConvertToNative(FBSessionTokenCachingStrategyCxx& object) {
    return (__bridge FBSessionTokenCachingStrategy *) object.getProxyObject();
}

//convertor to nsarray of objects
NSArray * Vector_of_string_to_NSArray(const vector<string>& v) {
    NSMutableArray * nsarr = [NSMutableArray new];
    std::for_each(v.begin(), v.end(), ^(string obj) {
        id objcObj = StringToNString(obj);

        [nsarr addObject:objcObj];
    });

    return nsarr;
}


// convertor to nsdictionary of objects
NSDictionary * Map_of_string_to_NSDictionary(const map<string, string>& m) {
    NSMutableDictionary* nsdict = [NSMutableDictionary dictionaryWithCapacity:m.size()];
    for(std::map<string, string>::const_iterator iter = m.begin(); iter != m.end(); ++iter)
    {
        id key = [NSString stringWithUTF8String:iter->first.c_str()];

        id value = StringToNString(iter->second);

        [nsdict setValue:value forKey:key];
    }
    return nsdict;
}



// convertor from nsarray to vector of objects
vector<string> NSArray_to_Vector_of_string(NSArray * arr) {
    __block vector<string> v = vector<string>([arr count]);

    [arr enumerateObjectsUsingBlock:^(id object, NSUInteger idx, BOOL *stop) {
         string obj = StringToNString((NSString*)object);

         v[idx] = obj;
    }];

    return v;
}

// convertor from nsdictionary to map of objects
map<string, string> NSDictionary_to_Map_of_string(NSDictionary * dict) {
    map<string, string> _dict;

    for (NSString * key in [dict allKeys]){
        id object = [dict objectForKey:key];

        string obj = StringToNString((NSString*)object);
        _dict[NSStringToString(key)] = obj;
    }

    return _dict;
}

//enum convertor

FBSessionDefaultAudience Convert_FBSessionDefaultAudienceCxx_to_FBSessionDefaultAudience(FBSessionDefaultAudienceCxx _arg) {
    FBSessionDefaultAudience ret;

    switch (_arg)
    {
        case _FBSESSIONDEFAULTAUDIENCENONE:
            ret = FBSessionDefaultAudienceNone;
            break;
        case _FBSESSIONDEFAULTAUDIENCEONLYME:
            ret = FBSessionDefaultAudienceOnlyMe;
            break;
        case _FBSESSIONDEFAULTAUDIENCEEVERYONE:
            ret = FBSessionDefaultAudienceEveryone;
            break;
        case _FBSESSIONDEFAULTAUDIENCEFRIENDS:
            ret = FBSessionDefaultAudienceFriends;
            break;
    }

    return ret;
}

FBSessionDefaultAudienceCxx Convert_FBSessionDefaultAudienceCxx_from_FBSessionDefaultAudience(FBSessionDefaultAudience _arg) {
    FBSessionDefaultAudienceCxx ret;

    switch (_arg)
    {
        case FBSessionDefaultAudienceNone:
            ret = _FBSESSIONDEFAULTAUDIENCENONE;
            break;
        case FBSessionDefaultAudienceOnlyMe:
            ret = _FBSESSIONDEFAULTAUDIENCEONLYME;
            break;
        case FBSessionDefaultAudienceEveryone:
            ret = _FBSESSIONDEFAULTAUDIENCEEVERYONE;
            break;
        case FBSessionDefaultAudienceFriends:
            ret = _FBSESSIONDEFAULTAUDIENCEFRIENDS;
            break;
    }

    return ret;
}



}


// custom section


namespace fbcxx {
    // generated definition
    // class definition template for Objectiv-C++


FBSessionTokenCachingStrategyCxx::FBSessionTokenCachingStrategyCxx(void* proxyObject) {
    self = proxyObject;
}

void * FBSessionTokenCachingStrategyCxx::getProxyObject() {
    return self;
}





FBSessionTokenCachingStrategyCxx * FBSessionTokenCachingStrategyCxx::init () {
    // TODO: add correct static method call (without type cast)
    


    FBSessionTokenCachingStrategy result = [(__bridge FBSessionTokenCachingStrategy*) self init];
    return FBSessionTokenCachingStrategyCxx_ConvertFromNative((FBSessionTokenCachingStrategy)result);
}



FBSessionTokenCachingStrategyCxx * FBSessionTokenCachingStrategyCxx::initWithUserDefaultTokenInformationKeyName (const string& _tokenInformationKeyName) {
    // TODO: add correct static method call (without type cast)
    NSString * __tokenInformationKeyName = StringToNString (_tokenInformationKeyName);


    FBSessionTokenCachingStrategy result = [(__bridge FBSessionTokenCachingStrategy*) self initWithUserDefaultTokenInformationKeyName:__tokenInformationKeyName];
    return FBSessionTokenCachingStrategyCxx_ConvertFromNative((FBSessionTokenCachingStrategy)result);
}



// class definition template for Objectiv-C++


FbSessionCxx::FbSessionCxx(void* proxyObject) {
    self = proxyObject;
}

void * FbSessionCxx::getProxyObject() {
    return self;
}





FbSessionCxx * FbSessionCxx::init () {
    // TODO: add correct static method call (without type cast)
    


    FBSession result = [(__bridge FBSession*) self init];
    return FbSessionCxx_ConvertFromNative((FBSession)result);
}



FbSessionCxx * FbSessionCxx::initWithAppID (const string& _appID, const vector<string>& _permissions, FBSessionDefaultAudienceCxx _defaultAudience, const string& _urlSchemeSuffix, FBSessionTokenCachingStrategyCxx& _tokenCachingStrategy) {
    // TODO: add correct static method call (without type cast)
    NSString * __appID = StringToNString (_appID);
NSArray * __permissions = vector_of_string_to_NSArray (_permissions);
FBSessionDefaultAudience __defaultAudience = Convert_FBSessionDefaultAudienceCxx_to_FBSessionDefaultAudience (_defaultAudience);
NSString * __urlSchemeSuffix = StringToNString (_urlSchemeSuffix);
FBSessionTokenCachingStrategy * __tokenCachingStrategy = FBSessionTokenCachingStrategyCxx_ConvertToNative (_tokenCachingStrategy);


    FBSession result = [(__bridge FBSession*) self initWithAppID:__appID permissions:__permissions defaultAudience:__defaultAudience urlSchemeSuffix:__urlSchemeSuffix tokenCacheStrategy:__tokenCachingStrategy];
    return FbSessionCxx_ConvertFromNative((FBSession)result);
}



FbSessionCxx * FbSessionCxx::initWithAppID (const string& _appID, const vector<string>& _permissions, const string& _urlSchemeSuffix, FBSessionTokenCachingStrategyCxx& _tokenCachingStrategy) {
    // TODO: add correct static method call (without type cast)
    NSString * __appID = StringToNString (_appID);
NSArray * __permissions = vector_of_string_to_NSArray (_permissions);
NSString * __urlSchemeSuffix = StringToNString (_urlSchemeSuffix);
FBSessionTokenCachingStrategy * __tokenCachingStrategy = FBSessionTokenCachingStrategyCxx_ConvertToNative (_tokenCachingStrategy);


    FBSession result = [(__bridge FBSession*) self initWithAppID:__appID permissions:__permissions urlSchemeSuffix:__urlSchemeSuffix tokenCacheStrategy:__tokenCachingStrategy];
    return FbSessionCxx_ConvertFromNative((FBSession)result);
}


}
