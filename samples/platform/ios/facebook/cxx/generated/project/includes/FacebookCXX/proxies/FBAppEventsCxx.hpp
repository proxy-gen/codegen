/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBAppEventsCxx
#define _FBAppEventsCxx

#include <FacebookCXX/proxies/FBSessionCxx.hpp>
#include <FacebookCXX/enums/FBAppEventsFlushBehaviorCxx.hpp>

#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations
class FBSessionCxx;

class FBAppEventsCxx
{
public:
	//Public Constructors
	FBAppEventsCxx(const FBAppEventsCxx* cc);
	FBAppEventsCxx(const void * proxy);

	// Default Destructor
	~FBAppEventsCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

	static void logEvent(std::string& arg0);

	static void logEvent_valueToSum(std::string& arg0,double& arg1);

	static void logEvent_parameters(std::string& arg0,std::map<void *, void *>& arg1);

	static void logEvent_valueToSum_parameters(std::string& arg0,double& arg1,std::map<void *, void *>& arg2);

	static void logEvent_valueToSum_parameters_session(std::string& arg0,void *& arg1,std::map<void *, void *>& arg2,FacebookCXX::FBSessionCxx * arg3);

	static void logPurchase_currency(double& arg0,std::string& arg1);

	static void logPurchase_currency_parameters(double& arg0,std::string& arg1,std::map<void *, void *>& arg2);

	static void logPurchase_currency_parameters_session(double& arg0,std::string& arg1,std::map<void *, void *>& arg2,FacebookCXX::FBSessionCxx * arg3);

	static signed char limitEventUsage();

	static void setLimitEventUsage(signed char& arg0);

	static void activateApp();

	static FacebookCXX::FBAppEventsFlushBehaviorCxx flushBehavior();

	static void setFlushBehavior(FacebookCXX::FBAppEventsFlushBehaviorCxx& arg0);

	static void flush();
private:
	void* _proxy;
};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBAppEventsCxx
