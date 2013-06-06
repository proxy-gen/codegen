// header file template for Objectiv-C++

#include <stdlib.h>
#include <string>
#include <vector>
#include <map>

using namespace std;

namespace fbcxx {
    // custom section
    

    // class declarations
    //enum

enum FBSessionDefaultAudienceCxx {
    _FBSESSIONDEFAULTAUDIENCEEVERYONE = 30,
_FBSESSIONDEFAULTAUDIENCEFRIENDS = 20,
_FBSESSIONDEFAULTAUDIENCENONE = 0,
_FBSESSIONDEFAULTAUDIENCEONLYME = 10
};


// class header template

class FBSessionTokenCachingStrategyCxx {

public:
// custom template section


FBSessionTokenCachingStrategyCxx(void* proxyObject);

void * getProxyObject();

// public methods signatures



 FBSessionTokenCachingStrategyCxx * init ();



 FBSessionTokenCachingStrategyCxx * initWithUserDefaultTokenInformationKeyName (const string& _tokenInformationKeyName);


private:

    void * self;


};


// class header template

class FbSessionCxx {

public:
// custom template section


FbSessionCxx(void* proxyObject);

void * getProxyObject();

// public methods signatures



 FbSessionCxx * init ();



 FbSessionCxx * initWithAppID (const string& _appID, const vector<string>& _permissions, FBSessionDefaultAudienceCxx _defaultAudience, const string& _urlSchemeSuffix, FBSessionTokenCachingStrategyCxx& _tokenCachingStrategy);



 FbSessionCxx * initWithAppID (const string& _appID, const vector<string>& _permissions, const string& _urlSchemeSuffix, FBSessionTokenCachingStrategyCxx& _tokenCachingStrategy);


private:

    void * self;


};

}
