/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBInsightsCxx
#define _FBInsightsCxx

#include "FBSessionCxx.hpp"
#include "FBInsightsFlushBehaviorCxx.hpp"

#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations
class FBSessionCxx;

class FBInsightsCxx
{
public:
	//Public Constructors
	FBInsightsCxx(const FBInsightsCxx* cc);
	FBInsightsCxx(const void * proxy);

	// Default Destructor
	~FBInsightsCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

	static std::string appVersion();

	static void setAppVersion(std::string& arg0);

	static void logPurchase_currency(double& arg0,std::string& arg1);

	static void logPurchase_currency_parameters(double& arg0,std::string& arg1,std::map<void *, void *>& arg2);

	static void logPurchase_currency_parameters_session(double& arg0,std::string& arg1,std::map<void *, void *>& arg2,FacebookCXX::FBSessionCxx * arg3);

	static void logConversionPixel_valueOfPixel(std::string& arg0,double& arg1);

	static void logConversionPixel_valueOfPixel_session(std::string& arg0,double& arg1,FacebookCXX::FBSessionCxx * arg2);

	static FacebookCXX::FBInsightsFlushBehaviorCxx flushBehavior();

	static void setFlushBehavior(FacebookCXX::FBInsightsFlushBehaviorCxx& arg0);

	static void flush();
private:
	void* _proxy;
};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBInsightsCxx
