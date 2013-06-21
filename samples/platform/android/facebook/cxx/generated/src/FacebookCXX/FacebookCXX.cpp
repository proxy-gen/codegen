/*
 * FacebookCXX.cpp
 *
 * Author: CXX CodeGenerator
 */

#include "FacebookCXX/FacebookCXX.hpp"
#include <map>

#include <android/log.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <ProxiedCallback.hpp>
#include <CXXConverter.hpp>


#define LOG_TAG "FacebookCXX"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace ZDK;

 


     




	FacebookSessionStatusCallback::~FacebookSessionStatusCallback()
	{
		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();
		
		long contextAddress = (long) this;
		jobject proxiedComponent = ctx->findProxyComponent(contextAddress);
		jni->deleteGlobalRef(proxiedComponent);
		ctx->deregisterProxyComponent(contextAddress);
		ctx->deregisterCallbackData(contextAddress);
	}

	class ProxiedFacebookSessionStatusCallback : public ProxiedCallback
	{
	public:
		jobject callMethod(long contextAddress, std::string methodName, void * payload);
	};


	static ProxiedFacebookSessionStatusCallback *proxiedFacebookSessionStatusCallback = new ProxiedFacebookSessionStatusCallback();

	jobject ProxiedFacebookSessionStatusCallback::callMethod(long contextAddress, std::string methodName, void * payload)
	{
		LOGV("FacebookSessionStatusCallback::callMethod enter");
		LOGV("FacebookSessionStatusCallback::callMethod methodName %s", methodName.c_str());

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();

		jni->pushLocalFrame();

		long callbackAddress = ctx->findCallbackData(contextAddress);
		LOGV("callbackAddress for FacebookSessionStatusCallback %ld (using contextAddress %ld)", callbackAddress, contextAddress);
		FacebookSessionStatusCallback *callback = (FacebookSessionStatusCallback *) reinterpret_cast<FacebookSessionStatusCallback *>(callbackAddress);

		void * userData = (void *) callback->userData;
		LOGV("userData for FacebookSessionStatusCallback %ld", (long) userData);
		jobject response  = 0;

		if (methodName == "call")
		{
			LOGV("call invoked");

			jobjectArray array = (jobjectArray) payload;
			jobject jobj = 0;
			// param.resource_name com/facebook/Session param.jni_elem_type jobject param.jni_elem_call_type Object
			jobject jarg0  = jni->readObjectObjectArrayElement(array, 0);
			LOGV("callMethod jniType jobject");
			FacebookSession* arg0 = 0;
			if (jarg0  != 0) 
			{
				arg0 = new FacebookSession(jarg0 );
			}



			// param.resource_name com/facebook/SessionState param.jni_elem_type jobject param.jni_elem_call_type Object
			jobject jarg1  = jni->readObjectObjectArrayElement(array, 1);
			LOGV("callMethod jniType jobject");
			jstring jenumString = jni->toCXXEnumString(jarg1 );
			const char *cenumString = jni->getUTFString(jenumString).c_str();
			FacebookSessionState::FacebookSessionState arg1;
			do
			{
			if (strcmp("CREATED", cenumString) == 0)
			{
				arg1 = FacebookSessionState::CREATED;
				break;
			}
			if (strcmp("CREATED_TOKEN_LOADED", cenumString) == 0)
			{
				arg1 = FacebookSessionState::CREATED_TOKEN_LOADED;
				break;
			}
			if (strcmp("OPENING", cenumString) == 0)
			{
				arg1 = FacebookSessionState::OPENING;
				break;
			}
			if (strcmp("OPENED", cenumString) == 0)
			{
				arg1 = FacebookSessionState::OPENED;
				break;
			}
			if (strcmp("OPENED_TOKEN_UPDATED", cenumString) == 0)
			{
				arg1 = FacebookSessionState::OPENED_TOKEN_UPDATED;
				break;
			}
			if (strcmp("CLOSED_LOGIN_FAILED", cenumString) == 0)
			{
				arg1 = FacebookSessionState::CLOSED_LOGIN_FAILED;
				break;
			}
			if (strcmp("CLOSED", cenumString) == 0)
			{
				arg1 = FacebookSessionState::CLOSED;
				break;
			}
			} while (0);



			// param.resource_name java/lang/Exception param.jni_elem_type jobject param.jni_elem_call_type Object
			jobject jarg2  = jni->readObjectObjectArrayElement(array, 2);
			LOGV("callMethod jniType jobject");
			long arg2;
			CXXConverter::to_cxx(jarg2 ,arg2,"java.lang.Exception" ,"long" );





			LOGV("invoking callback call(arg0,arg1,arg2,(void *) userData)");

				callback->call(arg0,arg1,arg2,(void *) userData);
		}

		response = jni->popLocalFrame(response);
		return response;
	}



  


    


   




// FacebookTokenCachingStrategy is abstract
	FacebookTokenCachingStrategy::~FacebookTokenCachingStrategy()
	{
		LOGV("FacebookTokenCachingStrategy::~FacebookTokenCachingStrategy invoked");
		CXXContext *ctx = CXXContext::sharedInstance();
		long address = (long) this;
		jobject proxiedComponent = ctx->findProxyComponent(address);
		if (proxiedComponent != 0)
		{
			ctx->deregisterProxyComponent(address);
		}		
	}










	void FacebookTokenCachingStrategy::clear()
	{
		LOGV("FacebookTokenCachingStrategy::clear");

		const char *methodName = "clear";
		const char *methodSignature = "()V";
		const char *className =  "com/facebook/TokenCachingStrategy";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;
		
		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature );



		jni->popLocalFrame();		

	}








	long FacebookTokenCachingStrategy::load()
	{
		LOGV("FacebookTokenCachingStrategy::load");

		const char *methodName = "load";
		const char *methodSignature = "()Landroid/os/Bundle;";
		const char *className =  "com/facebook/TokenCachingStrategy";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;
		
		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;


		jobject jret0  = jni->invokeObjectMethod(javaObject, className, methodName, methodSignature );	



		long ret0;
		if (jret0  != 0)
		{
			CXXConverter::to_cxx(jret0 ,ret0,"android.os.Bundle" ,"long" );
		}
		jni->popLocalFrame();
		return ret0;

	}








	long FacebookTokenCachingStrategy::getPermissions(long arg0)
	{
		LOGV("FacebookTokenCachingStrategy::getPermissions");

		const char *methodName = "getPermissions";
		const char *methodSignature = "(Landroid/os/Bundle;)Ljava/util/List;";
		const char *className =  "com/facebook/TokenCachingStrategy";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jobject javaObject = 0; // unused


const char * enum_string = 0;
long param_address = 0;
		jobject marg0  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg0,marg0 ,"long" ,"android.os.Bundle" );


		jobject jret0  = jni->invokeStaticObjectMethod(className, methodName, methodSignature , marg0);	



		long ret0;
		if (jret0  != 0)
		{
			CXXConverter::to_cxx(jret0 ,ret0,"java.util.List" ,"long" );
		}
		jni->popLocalFrame();
		return ret0;

	}








	void FacebookTokenCachingStrategy::save(long arg0)
	{
		LOGV("FacebookTokenCachingStrategy::save");

		const char *methodName = "save";
		const char *methodSignature = "(Landroid/os/Bundle;)V";
		const char *className =  "com/facebook/TokenCachingStrategy";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;
		
		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
		jobject marg0  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg0,marg0 ,"long" ,"android.os.Bundle" );


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature , marg0);



		jni->popLocalFrame();		

	}








	bool FacebookTokenCachingStrategy::hasTokenInformation(long arg0)
	{
		LOGV("FacebookTokenCachingStrategy::hasTokenInformation");

		const char *methodName = "hasTokenInformation";
		const char *methodSignature = "(Landroid/os/Bundle;)Z";
		const char *className =  "com/facebook/TokenCachingStrategy";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jobject javaObject = 0; // unused


const char * enum_string = 0;
long param_address = 0;
		jobject marg0  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg0,marg0 ,"long" ,"android.os.Bundle" );


		jboolean jret0  = jni->invokeStaticBooleanMethod(className, methodName, methodSignature , marg0);	



		bool cret = (bool) jret0 ;
		jni->popLocalFrame();
		return cret;

	}








	std::string FacebookTokenCachingStrategy::getToken(long arg0)
	{
		LOGV("FacebookTokenCachingStrategy::getToken");

		const char *methodName = "getToken";
		const char *methodSignature = "(Landroid/os/Bundle;)Ljava/lang/String;";
		const char *className =  "com/facebook/TokenCachingStrategy";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jobject javaObject = 0; // unused


const char * enum_string = 0;
long param_address = 0;
		jobject marg0  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg0,marg0 ,"long" ,"android.os.Bundle" );


		jstring jret0  = jni->invokeStaticStringMethod(className, methodName, methodSignature , marg0);	



		std::string cret = jni->getUTFString(jret0 );
		jni->popLocalFrame();
		return cret;

	}








	void FacebookTokenCachingStrategy::putToken(long arg0, std::string& arg1)
	{
		LOGV("FacebookTokenCachingStrategy::putToken");

		const char *methodName = "putToken";
		const char *methodSignature = "(Landroid/os/Bundle;Ljava/lang/String;)V";
		const char *className =  "com/facebook/TokenCachingStrategy";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jobject javaObject = 0; // unused


const char * enum_string = 0;
long param_address = 0;
		jobject marg0  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg0,marg0 ,"long" ,"android.os.Bundle" );
		jobject marg1 = jni->toJString(arg1);


		jni->invokeStaticVoidMethod(className, methodName, methodSignature , marg0, marg1);



		jni->popLocalFrame();		

	}








	long FacebookTokenCachingStrategy::getExpirationDate(long arg0)
	{
		LOGV("FacebookTokenCachingStrategy::getExpirationDate");

		const char *methodName = "getExpirationDate";
		const char *methodSignature = "(Landroid/os/Bundle;)Ljava/util/Date;";
		const char *className =  "com/facebook/TokenCachingStrategy";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jobject javaObject = 0; // unused


const char * enum_string = 0;
long param_address = 0;
		jobject marg0  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg0,marg0 ,"long" ,"android.os.Bundle" );


		jobject jret0  = jni->invokeStaticObjectMethod(className, methodName, methodSignature , marg0);	



		long ret0;
		if (jret0  != 0)
		{
			CXXConverter::to_cxx(jret0 ,ret0,"java.util.Date" ,"long" );
		}
		jni->popLocalFrame();
		return ret0;

	}








	void FacebookTokenCachingStrategy::putExpirationDate(long arg0, long arg1)
	{
		LOGV("FacebookTokenCachingStrategy::putExpirationDate");

		const char *methodName = "putExpirationDate";
		const char *methodSignature = "(Landroid/os/Bundle;Ljava/util/Date;)V";
		const char *className =  "com/facebook/TokenCachingStrategy";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jobject javaObject = 0; // unused


const char * enum_string = 0;
long param_address = 0;
		jobject marg0  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg0,marg0 ,"long" ,"android.os.Bundle" );
		jobject marg1  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg1,marg1 ,"long" ,"java.util.Date" );


		jni->invokeStaticVoidMethod(className, methodName, methodSignature , marg0, marg1);



		jni->popLocalFrame();		

	}








	long FacebookTokenCachingStrategy::getExpirationMilliseconds(long arg0)
	{
		LOGV("FacebookTokenCachingStrategy::getExpirationMilliseconds");

		const char *methodName = "getExpirationMilliseconds";
		const char *methodSignature = "(Landroid/os/Bundle;)J";
		const char *className =  "com/facebook/TokenCachingStrategy";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jobject javaObject = 0; // unused


const char * enum_string = 0;
long param_address = 0;
		jobject marg0  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg0,marg0 ,"long" ,"android.os.Bundle" );


		jlong jret0  = jni->invokeStaticLongMethod(className, methodName, methodSignature , marg0);	



		long cret = (long) jret0 ;
		jni->popLocalFrame();
		return cret;

	}








	void FacebookTokenCachingStrategy::putExpirationMilliseconds(long arg0, long arg1)
	{
		LOGV("FacebookTokenCachingStrategy::putExpirationMilliseconds");

		const char *methodName = "putExpirationMilliseconds";
		const char *methodSignature = "(Landroid/os/Bundle;J)V";
		const char *className =  "com/facebook/TokenCachingStrategy";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jobject javaObject = 0; // unused


const char * enum_string = 0;
long param_address = 0;
		jobject marg0  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg0,marg0 ,"long" ,"android.os.Bundle" );
		jlong marg1 = (jlong) arg1;


		jni->invokeStaticVoidMethod(className, methodName, methodSignature , marg0, marg1);



		jni->popLocalFrame();		

	}








	void FacebookTokenCachingStrategy::putPermissions(long arg0, long arg1)
	{
		LOGV("FacebookTokenCachingStrategy::putPermissions");

		const char *methodName = "putPermissions";
		const char *methodSignature = "(Landroid/os/Bundle;Ljava/util/List;)V";
		const char *className =  "com/facebook/TokenCachingStrategy";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jobject javaObject = 0; // unused


const char * enum_string = 0;
long param_address = 0;
		jobject marg0  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg0,marg0 ,"long" ,"android.os.Bundle" );
		jobject marg1  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg1,marg1 ,"long" ,"java.util.List" );


		jni->invokeStaticVoidMethod(className, methodName, methodSignature , marg0, marg1);



		jni->popLocalFrame();		

	}








	FacebookAccessTokenSource::FacebookAccessTokenSource FacebookTokenCachingStrategy::getSource(long arg0)
	{
		LOGV("FacebookTokenCachingStrategy::getSource");

		const char *methodName = "getSource";
		const char *methodSignature = "(Landroid/os/Bundle;)Lcom/facebook/AccessTokenSource;";
		const char *className =  "com/facebook/TokenCachingStrategy";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jobject javaObject = 0; // unused


const char * enum_string = 0;
long param_address = 0;
		jobject marg0  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg0,marg0 ,"long" ,"android.os.Bundle" );


		jobject jret0  = jni->invokeStaticObjectMethod(className, methodName, methodSignature , marg0);	



		jstring jenumString = jni->toCXXEnumString(jret0 );
		const char *cenumString = jni->getUTFString(jenumString).c_str();
		FacebookAccessTokenSource::FacebookAccessTokenSource cret;
		do
		{
			if (strcmp("NONE", cenumString) == 0)
			{
				cret = FacebookAccessTokenSource::NONE;
				break;
			}
			if (strcmp("FACEBOOK_APPLICATION_WEB", cenumString) == 0)
			{
				cret = FacebookAccessTokenSource::FACEBOOK_APPLICATION_WEB;
				break;
			}
			if (strcmp("FACEBOOK_APPLICATION_NATIVE", cenumString) == 0)
			{
				cret = FacebookAccessTokenSource::FACEBOOK_APPLICATION_NATIVE;
				break;
			}
			if (strcmp("FACEBOOK_APPLICATION_SERVICE", cenumString) == 0)
			{
				cret = FacebookAccessTokenSource::FACEBOOK_APPLICATION_SERVICE;
				break;
			}
			if (strcmp("WEB_VIEW", cenumString) == 0)
			{
				cret = FacebookAccessTokenSource::WEB_VIEW;
				break;
			}
			if (strcmp("TEST_USER", cenumString) == 0)
			{
				cret = FacebookAccessTokenSource::TEST_USER;
				break;
			}
			if (strcmp("CLIENT_TOKEN", cenumString) == 0)
			{
				cret = FacebookAccessTokenSource::CLIENT_TOKEN;
				break;
			}
		} while (0);
		jni->popLocalFrame();
		return cret;

	}








	void FacebookTokenCachingStrategy::putSource(long arg0, FacebookAccessTokenSource::FacebookAccessTokenSource arg1)
	{
		LOGV("FacebookTokenCachingStrategy::putSource");

		const char *methodName = "putSource";
		const char *methodSignature = "(Landroid/os/Bundle;Lcom/facebook/AccessTokenSource;)V";
		const char *className =  "com/facebook/TokenCachingStrategy";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jobject javaObject = 0; // unused


const char * enum_string = 0;
long param_address = 0;
		jobject marg0  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg0,marg0 ,"long" ,"android.os.Bundle" );
		do
		{
		if (FacebookAccessTokenSource::NONE == arg1)
		{
			enum_string = "NONE";
			break;
		}
		if (FacebookAccessTokenSource::FACEBOOK_APPLICATION_WEB == arg1)
		{
			enum_string = "FACEBOOK_APPLICATION_WEB";
			break;
		}
		if (FacebookAccessTokenSource::FACEBOOK_APPLICATION_NATIVE == arg1)
		{
			enum_string = "FACEBOOK_APPLICATION_NATIVE";
			break;
		}
		if (FacebookAccessTokenSource::FACEBOOK_APPLICATION_SERVICE == arg1)
		{
			enum_string = "FACEBOOK_APPLICATION_SERVICE";
			break;
		}
		if (FacebookAccessTokenSource::WEB_VIEW == arg1)
		{
			enum_string = "WEB_VIEW";
			break;
		}
		if (FacebookAccessTokenSource::TEST_USER == arg1)
		{
			enum_string = "TEST_USER";
			break;
		}
		if (FacebookAccessTokenSource::CLIENT_TOKEN == arg1)
		{
			enum_string = "CLIENT_TOKEN";
			break;
		}
		} while (0);
		jobject marg1 = jni->toJEnum(jni->getClassRef("com/facebook/AccessTokenSource"), enum_string);


		jni->invokeStaticVoidMethod(className, methodName, methodSignature , marg0, marg1);



		jni->popLocalFrame();		

	}








	long FacebookTokenCachingStrategy::getLastRefreshDate(long arg0)
	{
		LOGV("FacebookTokenCachingStrategy::getLastRefreshDate");

		const char *methodName = "getLastRefreshDate";
		const char *methodSignature = "(Landroid/os/Bundle;)Ljava/util/Date;";
		const char *className =  "com/facebook/TokenCachingStrategy";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jobject javaObject = 0; // unused


const char * enum_string = 0;
long param_address = 0;
		jobject marg0  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg0,marg0 ,"long" ,"android.os.Bundle" );


		jobject jret0  = jni->invokeStaticObjectMethod(className, methodName, methodSignature , marg0);	



		long ret0;
		if (jret0  != 0)
		{
			CXXConverter::to_cxx(jret0 ,ret0,"java.util.Date" ,"long" );
		}
		jni->popLocalFrame();
		return ret0;

	}








	void FacebookTokenCachingStrategy::putLastRefreshDate(long arg0, long arg1)
	{
		LOGV("FacebookTokenCachingStrategy::putLastRefreshDate");

		const char *methodName = "putLastRefreshDate";
		const char *methodSignature = "(Landroid/os/Bundle;Ljava/util/Date;)V";
		const char *className =  "com/facebook/TokenCachingStrategy";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jobject javaObject = 0; // unused


const char * enum_string = 0;
long param_address = 0;
		jobject marg0  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg0,marg0 ,"long" ,"android.os.Bundle" );
		jobject marg1  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg1,marg1 ,"long" ,"java.util.Date" );


		jni->invokeStaticVoidMethod(className, methodName, methodSignature , marg0, marg1);



		jni->popLocalFrame();		

	}








	long FacebookTokenCachingStrategy::getLastRefreshMilliseconds(long arg0)
	{
		LOGV("FacebookTokenCachingStrategy::getLastRefreshMilliseconds");

		const char *methodName = "getLastRefreshMilliseconds";
		const char *methodSignature = "(Landroid/os/Bundle;)J";
		const char *className =  "com/facebook/TokenCachingStrategy";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jobject javaObject = 0; // unused


const char * enum_string = 0;
long param_address = 0;
		jobject marg0  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg0,marg0 ,"long" ,"android.os.Bundle" );


		jlong jret0  = jni->invokeStaticLongMethod(className, methodName, methodSignature , marg0);	



		long cret = (long) jret0 ;
		jni->popLocalFrame();
		return cret;

	}








	void FacebookTokenCachingStrategy::putLastRefreshMilliseconds(long arg0, long arg1)
	{
		LOGV("FacebookTokenCachingStrategy::putLastRefreshMilliseconds");

		const char *methodName = "putLastRefreshMilliseconds";
		const char *methodSignature = "(Landroid/os/Bundle;J)V";
		const char *className =  "com/facebook/TokenCachingStrategy";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jobject javaObject = 0; // unused


const char * enum_string = 0;
long param_address = 0;
		jobject marg0  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg0,marg0 ,"long" ,"android.os.Bundle" );
		jlong marg1 = (jlong) arg1;


		jni->invokeStaticVoidMethod(className, methodName, methodSignature , marg0, marg1);



		jni->popLocalFrame();		

	}
	FacebookTokenCachingStrategy::FacebookTokenCachingStrategy()
	{
	}
	FacebookTokenCachingStrategy::FacebookTokenCachingStrategy(const FacebookTokenCachingStrategy& cc)
	{
		LOGV("FacebookTokenCachingStrategy::FacebookTokenCachingStrategy(const FacebookTokenCachingStrategy& cc) invoked");

		CXXContext *ctx = CXXContext::sharedInstance();
		this->self = cc.self;
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			proxiedComponent = (jobject) this->self;
			ctx->registerProxyComponent(address, proxiedComponent);
		}
	}
	FacebookTokenCachingStrategy::FacebookTokenCachingStrategy(void * proxy)
	{
		LOGV("FacebookTokenCachingStrategy::FacebookTokenCachingStrategy invoked");
		
		CXXContext *ctx = CXXContext::sharedInstance();
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			proxiedComponent = jni->localToGlobalRef((jobject) proxy);
			this->self = (void *) proxiedComponent;
			ctx->registerProxyComponent(address, proxiedComponent);
		}

	}
 




// FacebookNonCachingTokenCachingStrategy is an instance
	FacebookNonCachingTokenCachingStrategy::FacebookNonCachingTokenCachingStrategy()
	{
		LOGV("FacebookNonCachingTokenCachingStrategy::FacebookNonCachingTokenCachingStrategy invoked");
		
		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			jclass clazz = jni->getClassRef("com/facebook/NonCachingTokenCachingStrategy");



			proxiedComponent = jni->createNewObject(clazz, jni->getMethodID(clazz, "<init>", "()V") );
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			ctx->registerProxyComponent(address, proxiedComponent);
		}

	}

	FacebookNonCachingTokenCachingStrategy::~FacebookNonCachingTokenCachingStrategy()
	{
		LOGV("FacebookNonCachingTokenCachingStrategy::~FacebookNonCachingTokenCachingStrategy invoked");
		CXXContext *ctx = CXXContext::sharedInstance();
		long address = (long) this;
		jobject proxiedComponent = ctx->findProxyComponent(address);
		if (proxiedComponent != 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			ctx->deregisterProxyComponent(address);
		}		
	}










	void FacebookNonCachingTokenCachingStrategy::clear()
	{
		LOGV("FacebookNonCachingTokenCachingStrategy::clear");

		const char *methodName = "clear";
		const char *methodSignature = "()V";
		const char *className =  "com/facebook/NonCachingTokenCachingStrategy";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature );



		jni->popLocalFrame();		

	}








	long FacebookNonCachingTokenCachingStrategy::load()
	{
		LOGV("FacebookNonCachingTokenCachingStrategy::load");

		const char *methodName = "load";
		const char *methodSignature = "()Landroid/os/Bundle;";
		const char *className =  "com/facebook/NonCachingTokenCachingStrategy";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;


		jobject jret0  = jni->invokeObjectMethod(javaObject, className, methodName, methodSignature );	



		long ret0;
		if (jret0  != 0)
		{
			CXXConverter::to_cxx(jret0 ,ret0,"android.os.Bundle" ,"long" );
		}
		jni->popLocalFrame();
		return ret0;

	}








	void FacebookNonCachingTokenCachingStrategy::save(long arg0)
	{
		LOGV("FacebookNonCachingTokenCachingStrategy::save");

		const char *methodName = "save";
		const char *methodSignature = "(Landroid/os/Bundle;)V";
		const char *className =  "com/facebook/NonCachingTokenCachingStrategy";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
		jobject marg0  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg0,marg0 ,"long" ,"android.os.Bundle" );


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature , marg0);



		jni->popLocalFrame();		

	}
	FacebookNonCachingTokenCachingStrategy::FacebookNonCachingTokenCachingStrategy(const FacebookNonCachingTokenCachingStrategy& cc)
	{
		LOGV("FacebookNonCachingTokenCachingStrategy::FacebookNonCachingTokenCachingStrategy(const FacebookNonCachingTokenCachingStrategy& cc) invoked");

		CXXContext *ctx = CXXContext::sharedInstance();
		this->self = cc.self;
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			proxiedComponent = (jobject) this->self;
			ctx->registerProxyComponent(address, proxiedComponent);
		}
	}
	FacebookNonCachingTokenCachingStrategy::FacebookNonCachingTokenCachingStrategy(void * proxy)
	{
		LOGV("FacebookNonCachingTokenCachingStrategy::FacebookNonCachingTokenCachingStrategy invoked");
		
		CXXContext *ctx = CXXContext::sharedInstance();
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			proxiedComponent = jni->localToGlobalRef((jobject) proxy);
			this->self = (void *) proxiedComponent;
			ctx->registerProxyComponent(address, proxiedComponent);
		}

	}
 




// FacebookSharedPreferencesTokenCachingStrategy is an instance
	FacebookSharedPreferencesTokenCachingStrategy::FacebookSharedPreferencesTokenCachingStrategy()
	{
		LOGV("FacebookSharedPreferencesTokenCachingStrategy::FacebookSharedPreferencesTokenCachingStrategy invoked");
		
		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			jclass clazz = jni->getClassRef("com/facebook/SharedPreferencesTokenCachingStrategy");

				  		jobject marg0 = ctx->getAndroidContext();


			proxiedComponent = jni->createNewObject(clazz, jni->getMethodID(clazz, "<init>", "(Landroid/content/Context;)V") , marg0);
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			ctx->registerProxyComponent(address, proxiedComponent);
		}

	}
	FacebookSharedPreferencesTokenCachingStrategy::FacebookSharedPreferencesTokenCachingStrategy(std::string arg1)
	{
		LOGV("FacebookSharedPreferencesTokenCachingStrategy::FacebookSharedPreferencesTokenCachingStrategy invoked");
		
		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			jclass clazz = jni->getClassRef("com/facebook/SharedPreferencesTokenCachingStrategy");

				  		jobject marg0 = ctx->getAndroidContext();
					jobject marg1 = jni->toJString(arg1);


			proxiedComponent = jni->createNewObject(clazz, jni->getMethodID(clazz, "<init>", "(Landroid/content/Context;Ljava/lang/String;)V") , marg0, marg1);
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			ctx->registerProxyComponent(address, proxiedComponent);
		}

	}

	FacebookSharedPreferencesTokenCachingStrategy::~FacebookSharedPreferencesTokenCachingStrategy()
	{
		LOGV("FacebookSharedPreferencesTokenCachingStrategy::~FacebookSharedPreferencesTokenCachingStrategy invoked");
		CXXContext *ctx = CXXContext::sharedInstance();
		long address = (long) this;
		jobject proxiedComponent = ctx->findProxyComponent(address);
		if (proxiedComponent != 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			ctx->deregisterProxyComponent(address);
		}		
	}










	void FacebookSharedPreferencesTokenCachingStrategy::clear()
	{
		LOGV("FacebookSharedPreferencesTokenCachingStrategy::clear");

		const char *methodName = "clear";
		const char *methodSignature = "()V";
		const char *className =  "com/facebook/SharedPreferencesTokenCachingStrategy";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature );



		jni->popLocalFrame();		

	}








	long FacebookSharedPreferencesTokenCachingStrategy::load()
	{
		LOGV("FacebookSharedPreferencesTokenCachingStrategy::load");

		const char *methodName = "load";
		const char *methodSignature = "()Landroid/os/Bundle;";
		const char *className =  "com/facebook/SharedPreferencesTokenCachingStrategy";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;


		jobject jret0  = jni->invokeObjectMethod(javaObject, className, methodName, methodSignature );	



		long ret0;
		if (jret0  != 0)
		{
			CXXConverter::to_cxx(jret0 ,ret0,"android.os.Bundle" ,"long" );
		}
		jni->popLocalFrame();
		return ret0;

	}








	void FacebookSharedPreferencesTokenCachingStrategy::save(long arg0)
	{
		LOGV("FacebookSharedPreferencesTokenCachingStrategy::save");

		const char *methodName = "save";
		const char *methodSignature = "(Landroid/os/Bundle;)V";
		const char *className =  "com/facebook/SharedPreferencesTokenCachingStrategy";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
		jobject marg0  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg0,marg0 ,"long" ,"android.os.Bundle" );


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature , marg0);



		jni->popLocalFrame();		

	}
	FacebookSharedPreferencesTokenCachingStrategy::FacebookSharedPreferencesTokenCachingStrategy(const FacebookSharedPreferencesTokenCachingStrategy& cc)
	{
		LOGV("FacebookSharedPreferencesTokenCachingStrategy::FacebookSharedPreferencesTokenCachingStrategy(const FacebookSharedPreferencesTokenCachingStrategy& cc) invoked");

		CXXContext *ctx = CXXContext::sharedInstance();
		this->self = cc.self;
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			proxiedComponent = (jobject) this->self;
			ctx->registerProxyComponent(address, proxiedComponent);
		}
	}
	FacebookSharedPreferencesTokenCachingStrategy::FacebookSharedPreferencesTokenCachingStrategy(void * proxy)
	{
		LOGV("FacebookSharedPreferencesTokenCachingStrategy::FacebookSharedPreferencesTokenCachingStrategy invoked");
		
		CXXContext *ctx = CXXContext::sharedInstance();
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			proxiedComponent = jni->localToGlobalRef((jobject) proxy);
			this->self = (void *) proxiedComponent;
			ctx->registerProxyComponent(address, proxiedComponent);
		}

	}
  


   




// FacebookAccessToken is abstract
	FacebookAccessToken::~FacebookAccessToken()
	{
		LOGV("FacebookAccessToken::~FacebookAccessToken invoked");
		CXXContext *ctx = CXXContext::sharedInstance();
		long address = (long) this;
		jobject proxiedComponent = ctx->findProxyComponent(address);
		if (proxiedComponent != 0)
		{
			ctx->deregisterProxyComponent(address);
		}		
	}










	long FacebookAccessToken::getPermissions()
	{
		LOGV("FacebookAccessToken::getPermissions");

		const char *methodName = "getPermissions";
		const char *methodSignature = "()Ljava/util/List;";
		const char *className =  "com/facebook/AccessToken";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;
		
		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;


		jobject jret0  = jni->invokeObjectMethod(javaObject, className, methodName, methodSignature );	



		long ret0;
		if (jret0  != 0)
		{
			CXXConverter::to_cxx(jret0 ,ret0,"java.util.List" ,"long" );
		}
		jni->popLocalFrame();
		return ret0;

	}








	std::string FacebookAccessToken::getToken()
	{
		LOGV("FacebookAccessToken::getToken");

		const char *methodName = "getToken";
		const char *methodSignature = "()Ljava/lang/String;";
		const char *className =  "com/facebook/AccessToken";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;
		
		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;


		jstring jret0  = jni->invokeStringMethod(javaObject, className, methodName, methodSignature );	



		std::string cret = jni->getUTFString(jret0 );
		jni->popLocalFrame();
		return cret;

	}








	FacebookAccessTokenSource::FacebookAccessTokenSource FacebookAccessToken::getSource()
	{
		LOGV("FacebookAccessToken::getSource");

		const char *methodName = "getSource";
		const char *methodSignature = "()Lcom/facebook/AccessTokenSource;";
		const char *className =  "com/facebook/AccessToken";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;
		
		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;


		jobject jret0  = jni->invokeObjectMethod(javaObject, className, methodName, methodSignature );	



		jstring jenumString = jni->toCXXEnumString(jret0 );
		const char *cenumString = jni->getUTFString(jenumString).c_str();
		FacebookAccessTokenSource::FacebookAccessTokenSource cret;
		do
		{
			if (strcmp("NONE", cenumString) == 0)
			{
				cret = FacebookAccessTokenSource::NONE;
				break;
			}
			if (strcmp("FACEBOOK_APPLICATION_WEB", cenumString) == 0)
			{
				cret = FacebookAccessTokenSource::FACEBOOK_APPLICATION_WEB;
				break;
			}
			if (strcmp("FACEBOOK_APPLICATION_NATIVE", cenumString) == 0)
			{
				cret = FacebookAccessTokenSource::FACEBOOK_APPLICATION_NATIVE;
				break;
			}
			if (strcmp("FACEBOOK_APPLICATION_SERVICE", cenumString) == 0)
			{
				cret = FacebookAccessTokenSource::FACEBOOK_APPLICATION_SERVICE;
				break;
			}
			if (strcmp("WEB_VIEW", cenumString) == 0)
			{
				cret = FacebookAccessTokenSource::WEB_VIEW;
				break;
			}
			if (strcmp("TEST_USER", cenumString) == 0)
			{
				cret = FacebookAccessTokenSource::TEST_USER;
				break;
			}
			if (strcmp("CLIENT_TOKEN", cenumString) == 0)
			{
				cret = FacebookAccessTokenSource::CLIENT_TOKEN;
				break;
			}
		} while (0);
		jni->popLocalFrame();
		return cret;

	}








	long FacebookAccessToken::getExpires()
	{
		LOGV("FacebookAccessToken::getExpires");

		const char *methodName = "getExpires";
		const char *methodSignature = "()Ljava/util/Date;";
		const char *className =  "com/facebook/AccessToken";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;
		
		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;


		jobject jret0  = jni->invokeObjectMethod(javaObject, className, methodName, methodSignature );	



		long ret0;
		if (jret0  != 0)
		{
			CXXConverter::to_cxx(jret0 ,ret0,"java.util.Date" ,"long" );
		}
		jni->popLocalFrame();
		return ret0;

	}








	long FacebookAccessToken::getLastRefresh()
	{
		LOGV("FacebookAccessToken::getLastRefresh");

		const char *methodName = "getLastRefresh";
		const char *methodSignature = "()Ljava/util/Date;";
		const char *className =  "com/facebook/AccessToken";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;
		
		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;


		jobject jret0  = jni->invokeObjectMethod(javaObject, className, methodName, methodSignature );	



		long ret0;
		if (jret0  != 0)
		{
			CXXConverter::to_cxx(jret0 ,ret0,"java.util.Date" ,"long" );
		}
		jni->popLocalFrame();
		return ret0;

	}








	FacebookAccessToken* FacebookAccessToken::createFromExistingAccessToken(std::string& arg0, long arg1, long arg2, FacebookAccessTokenSource::FacebookAccessTokenSource arg3, long arg4)
	{
		LOGV("FacebookAccessToken::createFromExistingAccessToken");

		const char *methodName = "createFromExistingAccessToken";
		const char *methodSignature = "(Ljava/lang/String;Ljava/util/Date;Ljava/util/Date;Lcom/facebook/AccessTokenSource;Ljava/util/List;)Lcom/facebook/AccessToken;";
		const char *className =  "com/facebook/AccessToken";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jobject javaObject = 0; // unused


const char * enum_string = 0;
long param_address = 0;
		jobject marg0 = jni->toJString(arg0);
		jobject marg1  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg1,marg1 ,"long" ,"java.util.Date" );
		jobject marg2  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg2,marg2 ,"long" ,"java.util.Date" );
		do
		{
		if (FacebookAccessTokenSource::NONE == arg3)
		{
			enum_string = "NONE";
			break;
		}
		if (FacebookAccessTokenSource::FACEBOOK_APPLICATION_WEB == arg3)
		{
			enum_string = "FACEBOOK_APPLICATION_WEB";
			break;
		}
		if (FacebookAccessTokenSource::FACEBOOK_APPLICATION_NATIVE == arg3)
		{
			enum_string = "FACEBOOK_APPLICATION_NATIVE";
			break;
		}
		if (FacebookAccessTokenSource::FACEBOOK_APPLICATION_SERVICE == arg3)
		{
			enum_string = "FACEBOOK_APPLICATION_SERVICE";
			break;
		}
		if (FacebookAccessTokenSource::WEB_VIEW == arg3)
		{
			enum_string = "WEB_VIEW";
			break;
		}
		if (FacebookAccessTokenSource::TEST_USER == arg3)
		{
			enum_string = "TEST_USER";
			break;
		}
		if (FacebookAccessTokenSource::CLIENT_TOKEN == arg3)
		{
			enum_string = "CLIENT_TOKEN";
			break;
		}
		} while (0);
		jobject marg3 = jni->toJEnum(jni->getClassRef("com/facebook/AccessTokenSource"), enum_string);
		jobject marg4  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg4,marg4 ,"long" ,"java.util.List" );


		jobject jret0  = jni->invokeStaticObjectMethod(className, methodName, methodSignature , marg0, marg1, marg2, marg3, marg4);	



		FacebookAccessToken *cret = new FacebookAccessToken(jret0 );
		jni->popLocalFrame();
		return cret;

	}








	FacebookAccessToken* FacebookAccessToken::createFromNativeLinkingIntent(long arg0)
	{
		LOGV("FacebookAccessToken::createFromNativeLinkingIntent");

		const char *methodName = "createFromNativeLinkingIntent";
		const char *methodSignature = "(Landroid/content/Intent;)Lcom/facebook/AccessToken;";
		const char *className =  "com/facebook/AccessToken";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jobject javaObject = 0; // unused


const char * enum_string = 0;
long param_address = 0;
		jobject marg0  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg0,marg0 ,"long" ,"android.content.Intent" );


		jobject jret0  = jni->invokeStaticObjectMethod(className, methodName, methodSignature , marg0);	



		FacebookAccessToken *cret = new FacebookAccessToken(jret0 );
		jni->popLocalFrame();
		return cret;

	}
	FacebookAccessToken::FacebookAccessToken()
	{
	}
	FacebookAccessToken::FacebookAccessToken(const FacebookAccessToken& cc)
	{
		LOGV("FacebookAccessToken::FacebookAccessToken(const FacebookAccessToken& cc) invoked");

		CXXContext *ctx = CXXContext::sharedInstance();
		this->self = cc.self;
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			proxiedComponent = (jobject) this->self;
			ctx->registerProxyComponent(address, proxiedComponent);
		}
	}
	FacebookAccessToken::FacebookAccessToken(void * proxy)
	{
		LOGV("FacebookAccessToken::FacebookAccessToken invoked");
		
		CXXContext *ctx = CXXContext::sharedInstance();
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			proxiedComponent = jni->localToGlobalRef((jobject) proxy);
			this->self = (void *) proxiedComponent;
			ctx->registerProxyComponent(address, proxiedComponent);
		}

	}
 




// DialogError is an instance
	DialogError::DialogError(std::string arg0, int arg1, std::string arg2)
	{
		LOGV("DialogError::DialogError invoked");
		
		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			jclass clazz = jni->getClassRef("com/facebook/android/DialogError");

					jobject marg0 = jni->toJString(arg0);
					jint marg1 = (jint) arg1;
					jobject marg2 = jni->toJString(arg2);


			proxiedComponent = jni->createNewObject(clazz, jni->getMethodID(clazz, "<init>", "(Ljava/lang/String;ILjava/lang/String;)V") , marg0, marg1, marg2);
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			ctx->registerProxyComponent(address, proxiedComponent);
		}

	}

	DialogError::~DialogError()
	{
		LOGV("DialogError::~DialogError invoked");
		CXXContext *ctx = CXXContext::sharedInstance();
		long address = (long) this;
		jobject proxiedComponent = ctx->findProxyComponent(address);
		if (proxiedComponent != 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			ctx->deregisterProxyComponent(address);
		}		
	}










	int DialogError::getErrorCode()
	{
		LOGV("DialogError::getErrorCode");

		const char *methodName = "getErrorCode";
		const char *methodSignature = "()I";
		const char *className =  "com/facebook/android/DialogError";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;


		jint jret0  = jni->invokeIntMethod(javaObject, className, methodName, methodSignature );	



		int cret = (int) jret0 ;
		jni->popLocalFrame();
		return cret;

	}








	std::string DialogError::getFailingUrl()
	{
		LOGV("DialogError::getFailingUrl");

		const char *methodName = "getFailingUrl";
		const char *methodSignature = "()Ljava/lang/String;";
		const char *className =  "com/facebook/android/DialogError";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;


		jstring jret0  = jni->invokeStringMethod(javaObject, className, methodName, methodSignature );	



		std::string cret = jni->getUTFString(jret0 );
		jni->popLocalFrame();
		return cret;

	}
	DialogError::DialogError(const DialogError& cc)
	{
		LOGV("DialogError::DialogError(const DialogError& cc) invoked");

		CXXContext *ctx = CXXContext::sharedInstance();
		this->self = cc.self;
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			proxiedComponent = (jobject) this->self;
			ctx->registerProxyComponent(address, proxiedComponent);
		}
	}
	DialogError::DialogError(void * proxy)
	{
		LOGV("DialogError::DialogError invoked");
		
		CXXContext *ctx = CXXContext::sharedInstance();
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			proxiedComponent = jni->localToGlobalRef((jobject) proxy);
			this->self = (void *) proxiedComponent;
			ctx->registerProxyComponent(address, proxiedComponent);
		}

	}
 




// FacebookError is an instance
	FacebookError::FacebookError(std::string arg0)
	{
		LOGV("FacebookError::FacebookError invoked");
		
		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			jclass clazz = jni->getClassRef("com/facebook/android/FacebookError");

					jobject marg0 = jni->toJString(arg0);


			proxiedComponent = jni->createNewObject(clazz, jni->getMethodID(clazz, "<init>", "(Ljava/lang/String;)V") , marg0);
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			ctx->registerProxyComponent(address, proxiedComponent);
		}

	}
	FacebookError::FacebookError(std::string arg0, std::string arg1, int arg2)
	{
		LOGV("FacebookError::FacebookError invoked");
		
		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			jclass clazz = jni->getClassRef("com/facebook/android/FacebookError");

					jobject marg0 = jni->toJString(arg0);
					jobject marg1 = jni->toJString(arg1);
					jint marg2 = (jint) arg2;


			proxiedComponent = jni->createNewObject(clazz, jni->getMethodID(clazz, "<init>", "(Ljava/lang/String;Ljava/lang/String;I)V") , marg0, marg1, marg2);
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			ctx->registerProxyComponent(address, proxiedComponent);
		}

	}

	FacebookError::~FacebookError()
	{
		LOGV("FacebookError::~FacebookError invoked");
		CXXContext *ctx = CXXContext::sharedInstance();
		long address = (long) this;
		jobject proxiedComponent = ctx->findProxyComponent(address);
		if (proxiedComponent != 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			ctx->deregisterProxyComponent(address);
		}		
	}










	int FacebookError::getErrorCode()
	{
		LOGV("FacebookError::getErrorCode");

		const char *methodName = "getErrorCode";
		const char *methodSignature = "()I";
		const char *className =  "com/facebook/android/FacebookError";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;


		jint jret0  = jni->invokeIntMethod(javaObject, className, methodName, methodSignature );	



		int cret = (int) jret0 ;
		jni->popLocalFrame();
		return cret;

	}








	std::string FacebookError::getErrorType()
	{
		LOGV("FacebookError::getErrorType");

		const char *methodName = "getErrorType";
		const char *methodSignature = "()Ljava/lang/String;";
		const char *className =  "com/facebook/android/FacebookError";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;


		jstring jret0  = jni->invokeStringMethod(javaObject, className, methodName, methodSignature );	



		std::string cret = jni->getUTFString(jret0 );
		jni->popLocalFrame();
		return cret;

	}
	FacebookError::FacebookError(const FacebookError& cc)
	{
		LOGV("FacebookError::FacebookError(const FacebookError& cc) invoked");

		CXXContext *ctx = CXXContext::sharedInstance();
		this->self = cc.self;
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			proxiedComponent = (jobject) this->self;
			ctx->registerProxyComponent(address, proxiedComponent);
		}
	}
	FacebookError::FacebookError(void * proxy)
	{
		LOGV("FacebookError::FacebookError invoked");
		
		CXXContext *ctx = CXXContext::sharedInstance();
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			proxiedComponent = jni->localToGlobalRef((jobject) proxy);
			this->self = (void *) proxiedComponent;
			ctx->registerProxyComponent(address, proxiedComponent);
		}

	}
 




	FacebookDialogListener::~FacebookDialogListener()
	{
		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();
		
		long contextAddress = (long) this;
		jobject proxiedComponent = ctx->findProxyComponent(contextAddress);
		jni->deleteGlobalRef(proxiedComponent);
		ctx->deregisterProxyComponent(contextAddress);
		ctx->deregisterCallbackData(contextAddress);
	}

	class ProxiedFacebookDialogListener : public ProxiedCallback
	{
	public:
		jobject callMethod(long contextAddress, std::string methodName, void * payload);
	};


	static ProxiedFacebookDialogListener *proxiedFacebookDialogListener = new ProxiedFacebookDialogListener();

	jobject ProxiedFacebookDialogListener::callMethod(long contextAddress, std::string methodName, void * payload)
	{
		LOGV("FacebookDialogListener::callMethod enter");
		LOGV("FacebookDialogListener::callMethod methodName %s", methodName.c_str());

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();

		jni->pushLocalFrame();

		long callbackAddress = ctx->findCallbackData(contextAddress);
		LOGV("callbackAddress for FacebookDialogListener %ld (using contextAddress %ld)", callbackAddress, contextAddress);
		FacebookDialogListener *callback = (FacebookDialogListener *) reinterpret_cast<FacebookDialogListener *>(callbackAddress);

		void * userData = (void *) callback->userData;
		LOGV("userData for FacebookDialogListener %ld", (long) userData);
		jobject response  = 0;

		if (methodName == "onComplete")
		{
			LOGV("onComplete invoked");

			jobjectArray array = (jobjectArray) payload;
			jobject jobj = 0;
			// param.resource_name android/os/Bundle param.jni_elem_type jobject param.jni_elem_call_type Object
			jobject jarg0  = jni->readObjectObjectArrayElement(array, 0);
			LOGV("callMethod jniType jobject");
			long arg0;
			CXXConverter::to_cxx(jarg0 ,arg0,"android.os.Bundle" ,"long" );





			LOGV("invoking callback onComplete(arg0,(void *) userData)");

				callback->onComplete(arg0,(void *) userData);
		}
		if (methodName == "onFacebookError")
		{
			LOGV("onFacebookError invoked");

			jobjectArray array = (jobjectArray) payload;
			jobject jobj = 0;
			// param.resource_name com/facebook/android/FacebookError param.jni_elem_type jobject param.jni_elem_call_type Object
			jobject jarg0  = jni->readObjectObjectArrayElement(array, 0);
			LOGV("callMethod jniType jobject");
			FacebookError* arg0 = 0;
			if (jarg0  != 0) 
			{
				arg0 = new FacebookError(jarg0 );
			}





			LOGV("invoking callback onFacebookError(arg0,(void *) userData)");

				callback->onFacebookError(arg0,(void *) userData);
		}
		if (methodName == "onError")
		{
			LOGV("onError invoked");

			jobjectArray array = (jobjectArray) payload;
			jobject jobj = 0;
			// param.resource_name com/facebook/android/DialogError param.jni_elem_type jobject param.jni_elem_call_type Object
			jobject jarg0  = jni->readObjectObjectArrayElement(array, 0);
			LOGV("callMethod jniType jobject");
			DialogError* arg0 = 0;
			if (jarg0  != 0) 
			{
				arg0 = new DialogError(jarg0 );
			}





			LOGV("invoking callback onError(arg0,(void *) userData)");

				callback->onError(arg0,(void *) userData);
		}
		if (methodName == "onCancel")
		{
			LOGV("onCancel invoked");

			jobjectArray array = (jobjectArray) payload;
			jobject jobj = 0;


			LOGV("invoking callback onCancel((void *) userData)");

				callback->onCancel((void *) userData);
		}

		response = jni->popLocalFrame(response);
		return response;
	}






 




	FacebookServiceListener::~FacebookServiceListener()
	{
		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();
		
		long contextAddress = (long) this;
		jobject proxiedComponent = ctx->findProxyComponent(contextAddress);
		jni->deleteGlobalRef(proxiedComponent);
		ctx->deregisterProxyComponent(contextAddress);
		ctx->deregisterCallbackData(contextAddress);
	}

	class ProxiedFacebookServiceListener : public ProxiedCallback
	{
	public:
		jobject callMethod(long contextAddress, std::string methodName, void * payload);
	};


	static ProxiedFacebookServiceListener *proxiedFacebookServiceListener = new ProxiedFacebookServiceListener();

	jobject ProxiedFacebookServiceListener::callMethod(long contextAddress, std::string methodName, void * payload)
	{
		LOGV("FacebookServiceListener::callMethod enter");
		LOGV("FacebookServiceListener::callMethod methodName %s", methodName.c_str());

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();

		jni->pushLocalFrame();

		long callbackAddress = ctx->findCallbackData(contextAddress);
		LOGV("callbackAddress for FacebookServiceListener %ld (using contextAddress %ld)", callbackAddress, contextAddress);
		FacebookServiceListener *callback = (FacebookServiceListener *) reinterpret_cast<FacebookServiceListener *>(callbackAddress);

		void * userData = (void *) callback->userData;
		LOGV("userData for FacebookServiceListener %ld", (long) userData);
		jobject response  = 0;

		if (methodName == "onComplete")
		{
			LOGV("onComplete invoked");

			jobjectArray array = (jobjectArray) payload;
			jobject jobj = 0;
			// param.resource_name android/os/Bundle param.jni_elem_type jobject param.jni_elem_call_type Object
			jobject jarg0  = jni->readObjectObjectArrayElement(array, 0);
			LOGV("callMethod jniType jobject");
			long arg0;
			CXXConverter::to_cxx(jarg0 ,arg0,"android.os.Bundle" ,"long" );





			LOGV("invoking callback onComplete(arg0,(void *) userData)");

				callback->onComplete(arg0,(void *) userData);
		}
		if (methodName == "onFacebookError")
		{
			LOGV("onFacebookError invoked");

			jobjectArray array = (jobjectArray) payload;
			jobject jobj = 0;
			// param.resource_name com/facebook/android/FacebookError param.jni_elem_type jobject param.jni_elem_call_type Object
			jobject jarg0  = jni->readObjectObjectArrayElement(array, 0);
			LOGV("callMethod jniType jobject");
			FacebookError* arg0 = 0;
			if (jarg0  != 0) 
			{
				arg0 = new FacebookError(jarg0 );
			}





			LOGV("invoking callback onFacebookError(arg0,(void *) userData)");

				callback->onFacebookError(arg0,(void *) userData);
		}
		if (methodName == "onError")
		{
			LOGV("onError invoked");

			jobjectArray array = (jobjectArray) payload;
			jobject jobj = 0;
			// param.resource_name java/lang/Error param.jni_elem_type jobject param.jni_elem_call_type Object
			jobject jarg0  = jni->readObjectObjectArrayElement(array, 0);
			LOGV("callMethod jniType jobject");
			long arg0;
			CXXConverter::to_cxx(jarg0 ,arg0,"java.lang.Error" ,"long" );





			LOGV("invoking callback onError(arg0,(void *) userData)");

				callback->onError(arg0,(void *) userData);
		}

		response = jni->popLocalFrame(response);
		return response;
	}





 




// FacebookSession is an instance
	FacebookSession::FacebookSession()
	{
		LOGV("FacebookSession::FacebookSession invoked");
		
		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			jclass clazz = jni->getClassRef("com/facebook/Session");

				  		jobject marg0 = ctx->getAndroidContext();


			proxiedComponent = jni->createNewObject(clazz, jni->getMethodID(clazz, "<init>", "(Landroid/content/Context;)V") , marg0);
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			ctx->registerProxyComponent(address, proxiedComponent);
		}

	}

	FacebookSession::~FacebookSession()
	{
		LOGV("FacebookSession::~FacebookSession invoked");
		CXXContext *ctx = CXXContext::sharedInstance();
		long address = (long) this;
		jobject proxiedComponent = ctx->findProxyComponent(address);
		if (proxiedComponent != 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			ctx->deregisterProxyComponent(address);
		}		
	}










	bool FacebookSession::equals(long arg0)
	{
		LOGV("FacebookSession::equals");

		const char *methodName = "equals";
		const char *methodSignature = "(Ljava/lang/Object;)Z";
		const char *className =  "com/facebook/Session";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
		jobject marg0  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg0,marg0 ,"long" ,"java.lang.Object" );


		jboolean jret0  = jni->invokeBooleanMethod(javaObject, className, methodName, methodSignature , marg0);	



		bool cret = (bool) jret0 ;
		jni->popLocalFrame();
		return cret;

	}








	int FacebookSession::hashCode()
	{
		LOGV("FacebookSession::hashCode");

		const char *methodName = "hashCode";
		const char *methodSignature = "()I";
		const char *className =  "com/facebook/Session";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;


		jint jret0  = jni->invokeIntMethod(javaObject, className, methodName, methodSignature );	



		int cret = (int) jret0 ;
		jni->popLocalFrame();
		return cret;

	}








	long FacebookSession::getPermissions()
	{
		LOGV("FacebookSession::getPermissions");

		const char *methodName = "getPermissions";
		const char *methodSignature = "()Ljava/util/List;";
		const char *className =  "com/facebook/Session";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;


		jobject jret0  = jni->invokeObjectMethod(javaObject, className, methodName, methodSignature );	



		long ret0;
		if (jret0  != 0)
		{
			CXXConverter::to_cxx(jret0 ,ret0,"java.util.List" ,"long" );
		}
		jni->popLocalFrame();
		return ret0;

	}








	FacebookSessionState::FacebookSessionState FacebookSession::getState()
	{
		LOGV("FacebookSession::getState");

		const char *methodName = "getState";
		const char *methodSignature = "()Lcom/facebook/SessionState;";
		const char *className =  "com/facebook/Session";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;


		jobject jret0  = jni->invokeObjectMethod(javaObject, className, methodName, methodSignature );	



		jstring jenumString = jni->toCXXEnumString(jret0 );
		const char *cenumString = jni->getUTFString(jenumString).c_str();
		FacebookSessionState::FacebookSessionState cret;
		do
		{
			if (strcmp("CREATED", cenumString) == 0)
			{
				cret = FacebookSessionState::CREATED;
				break;
			}
			if (strcmp("CREATED_TOKEN_LOADED", cenumString) == 0)
			{
				cret = FacebookSessionState::CREATED_TOKEN_LOADED;
				break;
			}
			if (strcmp("OPENING", cenumString) == 0)
			{
				cret = FacebookSessionState::OPENING;
				break;
			}
			if (strcmp("OPENED", cenumString) == 0)
			{
				cret = FacebookSessionState::OPENED;
				break;
			}
			if (strcmp("OPENED_TOKEN_UPDATED", cenumString) == 0)
			{
				cret = FacebookSessionState::OPENED_TOKEN_UPDATED;
				break;
			}
			if (strcmp("CLOSED_LOGIN_FAILED", cenumString) == 0)
			{
				cret = FacebookSessionState::CLOSED_LOGIN_FAILED;
				break;
			}
			if (strcmp("CLOSED", cenumString) == 0)
			{
				cret = FacebookSessionState::CLOSED;
				break;
			}
		} while (0);
		jni->popLocalFrame();
		return cret;

	}








	void FacebookSession::close()
	{
		LOGV("FacebookSession::close");

		const char *methodName = "close";
		const char *methodSignature = "()V";
		const char *className =  "com/facebook/Session";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature );



		jni->popLocalFrame();		

	}








	void FacebookSession::open(FacebookAccessToken& arg0, FacebookSessionStatusCallback& arg1)
	{
		LOGV("FacebookSession::open");

		const char *methodName = "open";
		const char *methodSignature = "(Lcom/facebook/AccessToken;Lcom/facebook/Session$StatusCallback;)V";
		const char *className =  "com/facebook/Session";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
	  	param_address = (long) &arg0;	
		jobject marg0 = ctx->findProxyComponent((long) param_address);
	  	param_address = (long) &arg1;	
		LOGV("registerProxyComponent param_address %d", param_address);
		jobject proxiedComponent = ctx->findProxyComponent(param_address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			proxiedComponent = ctx->createProxiedCallback(param_address,(long) proxiedFacebookSessionStatusCallback, "com/facebook/Session$StatusCallback");
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			LOGV("registerProxyComponent param_address %ld proxiedComponent %ld", param_address, proxiedComponent);
			ctx->registerProxyComponent(param_address, proxiedComponent);
			LOGV("registerCallbackData param_address %ld", param_address);
			ctx->registerCallbackData(param_address, param_address);
		}

		jobject marg1 = ctx->findProxyComponent((long) param_address);


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature , marg0, marg1);



		jni->popLocalFrame();		

	}








	bool FacebookSession::isClosed()
	{
		LOGV("FacebookSession::isClosed");

		const char *methodName = "isClosed";
		const char *methodSignature = "()Z";
		const char *className =  "com/facebook/Session";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;


		jboolean jret0  = jni->invokeBooleanMethod(javaObject, className, methodName, methodSignature );	



		bool cret = (bool) jret0 ;
		jni->popLocalFrame();
		return cret;

	}








	bool FacebookSession::isOpened()
	{
		LOGV("FacebookSession::isOpened");

		const char *methodName = "isOpened";
		const char *methodSignature = "()Z";
		const char *className =  "com/facebook/Session";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;


		jboolean jret0  = jni->invokeBooleanMethod(javaObject, className, methodName, methodSignature );	



		bool cret = (bool) jret0 ;
		jni->popLocalFrame();
		return cret;

	}








	long FacebookSession::getExpirationDate()
	{
		LOGV("FacebookSession::getExpirationDate");

		const char *methodName = "getExpirationDate";
		const char *methodSignature = "()Ljava/util/Date;";
		const char *className =  "com/facebook/Session";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;


		jobject jret0  = jni->invokeObjectMethod(javaObject, className, methodName, methodSignature );	



		long ret0;
		if (jret0  != 0)
		{
			CXXConverter::to_cxx(jret0 ,ret0,"java.util.Date" ,"long" );
		}
		jni->popLocalFrame();
		return ret0;

	}








	long FacebookSession::getAuthorizationBundle()
	{
		LOGV("FacebookSession::getAuthorizationBundle");

		const char *methodName = "getAuthorizationBundle";
		const char *methodSignature = "()Landroid/os/Bundle;";
		const char *className =  "com/facebook/Session";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;


		jobject jret0  = jni->invokeObjectMethod(javaObject, className, methodName, methodSignature );	



		long ret0;
		if (jret0  != 0)
		{
			CXXConverter::to_cxx(jret0 ,ret0,"android.os.Bundle" ,"long" );
		}
		jni->popLocalFrame();
		return ret0;

	}








	std::string FacebookSession::getApplicationId()
	{
		LOGV("FacebookSession::getApplicationId");

		const char *methodName = "getApplicationId";
		const char *methodSignature = "()Ljava/lang/String;";
		const char *className =  "com/facebook/Session";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;


		jstring jret0  = jni->invokeStringMethod(javaObject, className, methodName, methodSignature );	



		std::string cret = jni->getUTFString(jret0 );
		jni->popLocalFrame();
		return cret;

	}








	std::string FacebookSession::getAccessToken()
	{
		LOGV("FacebookSession::getAccessToken");

		const char *methodName = "getAccessToken";
		const char *methodSignature = "()Ljava/lang/String;";
		const char *className =  "com/facebook/Session";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;


		jstring jret0  = jni->invokeStringMethod(javaObject, className, methodName, methodSignature );	



		std::string cret = jni->getUTFString(jret0 );
		jni->popLocalFrame();
		return cret;

	}








	void FacebookSession::openForRead(FacebookSessionOpenRequest& arg0)
	{
		LOGV("FacebookSession::openForRead");

		const char *methodName = "openForRead";
		const char *methodSignature = "(Lcom/facebook/Session$OpenRequest;)V";
		const char *className =  "com/facebook/Session";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
	  	param_address = (long) &arg0;	
		jobject marg0 = ctx->findProxyComponent((long) param_address);


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature , marg0);



		jni->popLocalFrame();		

	}








	void FacebookSession::openForPublish(FacebookSessionOpenRequest& arg0)
	{
		LOGV("FacebookSession::openForPublish");

		const char *methodName = "openForPublish";
		const char *methodSignature = "(Lcom/facebook/Session$OpenRequest;)V";
		const char *className =  "com/facebook/Session";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
	  	param_address = (long) &arg0;	
		jobject marg0 = ctx->findProxyComponent((long) param_address);


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature , marg0);



		jni->popLocalFrame();		

	}








	void FacebookSession::addCallback(FacebookSessionStatusCallback& arg0)
	{
		LOGV("FacebookSession::addCallback");

		const char *methodName = "addCallback";
		const char *methodSignature = "(Lcom/facebook/Session$StatusCallback;)V";
		const char *className =  "com/facebook/Session";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
	  	param_address = (long) &arg0;	
		LOGV("registerProxyComponent param_address %d", param_address);
		jobject proxiedComponent = ctx->findProxyComponent(param_address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			proxiedComponent = ctx->createProxiedCallback(param_address,(long) proxiedFacebookSessionStatusCallback, "com/facebook/Session$StatusCallback");
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			LOGV("registerProxyComponent param_address %ld proxiedComponent %ld", param_address, proxiedComponent);
			ctx->registerProxyComponent(param_address, proxiedComponent);
			LOGV("registerCallbackData param_address %ld", param_address);
			ctx->registerCallbackData(param_address, param_address);
		}

		jobject marg0 = ctx->findProxyComponent((long) param_address);


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature , marg0);



		jni->popLocalFrame();		

	}








	void FacebookSession::requestNewReadPermissions(FacebookSessionNewPermissionRequest& arg0)
	{
		LOGV("FacebookSession::requestNewReadPermissions");

		const char *methodName = "requestNewReadPermissions";
		const char *methodSignature = "(Lcom/facebook/Session$NewPermissionsRequest;)V";
		const char *className =  "com/facebook/Session";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
	  	param_address = (long) &arg0;	
		jobject marg0 = ctx->findProxyComponent((long) param_address);


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature , marg0);



		jni->popLocalFrame();		

	}








	void FacebookSession::requestNewPublishPermissions(FacebookSessionNewPermissionRequest& arg0)
	{
		LOGV("FacebookSession::requestNewPublishPermissions");

		const char *methodName = "requestNewPublishPermissions";
		const char *methodSignature = "(Lcom/facebook/Session$NewPermissionsRequest;)V";
		const char *className =  "com/facebook/Session";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
	  	param_address = (long) &arg0;	
		jobject marg0 = ctx->findProxyComponent((long) param_address);


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature , marg0);



		jni->popLocalFrame();		

	}








	bool FacebookSession::onActivityResult(int arg1, int arg2, long arg3)
	{
		LOGV("FacebookSession::onActivityResult");

		const char *methodName = "onActivityResult";
		const char *methodSignature = "(Landroid/app/Activity;IILandroid/content/Intent;)Z";
		const char *className =  "com/facebook/Session";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
	  		jobject marg0 = ctx->getAndroidContext();
		jint marg1 = (jint) arg1;
		jint marg2 = (jint) arg2;
		jobject marg3  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg3,marg3 ,"long" ,"android.content.Intent" );


		jboolean jret0  = jni->invokeBooleanMethod(javaObject, className, methodName, methodSignature , marg0, marg1, marg2, marg3);	



		bool cret = (bool) jret0 ;
		jni->popLocalFrame();
		return cret;

	}








	void FacebookSession::closeAndClearTokenInformation()
	{
		LOGV("FacebookSession::closeAndClearTokenInformation");

		const char *methodName = "closeAndClearTokenInformation";
		const char *methodSignature = "()V";
		const char *className =  "com/facebook/Session";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature );



		jni->popLocalFrame();		

	}








	void FacebookSession::removeCallback(FacebookSessionStatusCallback& arg0)
	{
		LOGV("FacebookSession::removeCallback");

		const char *methodName = "removeCallback";
		const char *methodSignature = "(Lcom/facebook/Session$StatusCallback;)V";
		const char *className =  "com/facebook/Session";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
	  	param_address = (long) &arg0;	
		LOGV("registerProxyComponent param_address %d", param_address);
		jobject proxiedComponent = ctx->findProxyComponent(param_address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			proxiedComponent = ctx->createProxiedCallback(param_address,(long) proxiedFacebookSessionStatusCallback, "com/facebook/Session$StatusCallback");
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			LOGV("registerProxyComponent param_address %ld proxiedComponent %ld", param_address, proxiedComponent);
			ctx->registerProxyComponent(param_address, proxiedComponent);
			LOGV("registerCallbackData param_address %ld", param_address);
			ctx->registerCallbackData(param_address, param_address);
		}

		jobject marg0 = ctx->findProxyComponent((long) param_address);


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature , marg0);



		jni->popLocalFrame();		

	}








	void FacebookSession::saveSession(FacebookSession& arg0, long arg1)
	{
		LOGV("FacebookSession::saveSession");

		const char *methodName = "saveSession";
		const char *methodSignature = "(Lcom/facebook/Session;Landroid/os/Bundle;)V";
		const char *className =  "com/facebook/Session";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jobject javaObject = 0; // unused


const char * enum_string = 0;
long param_address = 0;
	  	param_address = (long) &arg0;	
		jobject marg0 = ctx->findProxyComponent((long) param_address);
		jobject marg1  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg1,marg1 ,"long" ,"android.os.Bundle" );


		jni->invokeStaticVoidMethod(className, methodName, methodSignature , marg0, marg1);



		jni->popLocalFrame();		

	}








	FacebookSession* FacebookSession::restoreSession(FacebookTokenCachingStrategy& arg1, FacebookSessionStatusCallback& arg2, long arg3)
	{
		LOGV("FacebookSession::restoreSession");

		const char *methodName = "restoreSession";
		const char *methodSignature = "(Landroid/content/Context;Lcom/facebook/TokenCachingStrategy;Lcom/facebook/Session$StatusCallback;Landroid/os/Bundle;)Lcom/facebook/Session;";
		const char *className =  "com/facebook/Session";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jobject javaObject = 0; // unused


const char * enum_string = 0;
long param_address = 0;
	  		jobject marg0 = ctx->getAndroidContext();
	  	param_address = (long) &arg1;	
		jobject marg1 = ctx->findProxyComponent((long) param_address);
	  	param_address = (long) &arg2;	
		LOGV("registerProxyComponent param_address %d", param_address);
		jobject proxiedComponent = ctx->findProxyComponent(param_address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			proxiedComponent = ctx->createProxiedCallback(param_address,(long) proxiedFacebookSessionStatusCallback, "com/facebook/Session$StatusCallback");
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			LOGV("registerProxyComponent param_address %ld proxiedComponent %ld", param_address, proxiedComponent);
			ctx->registerProxyComponent(param_address, proxiedComponent);
			LOGV("registerCallbackData param_address %ld", param_address);
			ctx->registerCallbackData(param_address, param_address);
		}

		jobject marg2 = ctx->findProxyComponent((long) param_address);
		jobject marg3  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg3,marg3 ,"long" ,"android.os.Bundle" );


		jobject jret0  = jni->invokeStaticObjectMethod(className, methodName, methodSignature , marg0, marg1, marg2, marg3);	



		FacebookSession *cret = new FacebookSession(jret0 );
		jni->popLocalFrame();
		return cret;

	}








	FacebookSession* FacebookSession::getActiveSession()
	{
		LOGV("FacebookSession::getActiveSession");

		const char *methodName = "getActiveSession";
		const char *methodSignature = "()Lcom/facebook/Session;";
		const char *className =  "com/facebook/Session";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jobject javaObject = 0; // unused


const char * enum_string = 0;
long param_address = 0;


		jobject jret0  = jni->invokeStaticObjectMethod(className, methodName, methodSignature );	



		FacebookSession *cret = new FacebookSession(jret0 );
		jni->popLocalFrame();
		return cret;

	}








	void FacebookSession::setActiveSession(FacebookSession& arg0)
	{
		LOGV("FacebookSession::setActiveSession");

		const char *methodName = "setActiveSession";
		const char *methodSignature = "(Lcom/facebook/Session;)V";
		const char *className =  "com/facebook/Session";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jobject javaObject = 0; // unused


const char * enum_string = 0;
long param_address = 0;
	  	param_address = (long) &arg0;	
		jobject marg0 = ctx->findProxyComponent((long) param_address);


		jni->invokeStaticVoidMethod(className, methodName, methodSignature , marg0);



		jni->popLocalFrame();		

	}








	FacebookSession* FacebookSession::openActiveSessionFromCache()
	{
		LOGV("FacebookSession::openActiveSessionFromCache");

		const char *methodName = "openActiveSessionFromCache";
		const char *methodSignature = "(Landroid/content/Context;)Lcom/facebook/Session;";
		const char *className =  "com/facebook/Session";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jobject javaObject = 0; // unused


const char * enum_string = 0;
long param_address = 0;
	  		jobject marg0 = ctx->getAndroidContext();


		jobject jret0  = jni->invokeStaticObjectMethod(className, methodName, methodSignature , marg0);	



		FacebookSession *cret = new FacebookSession(jret0 );
		jni->popLocalFrame();
		return cret;

	}








	FacebookSession* FacebookSession::openActiveSession(long arg1, bool arg2, FacebookSessionStatusCallback& arg3)
	{
		LOGV("FacebookSession::openActiveSession");

		const char *methodName = "openActiveSession";
		const char *methodSignature = "(Landroid/content/Context;Landroid/support/v4/app/Fragment;ZLcom/facebook/Session$StatusCallback;)Lcom/facebook/Session;";
		const char *className =  "com/facebook/Session";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jobject javaObject = 0; // unused


const char * enum_string = 0;
long param_address = 0;
	  		jobject marg0 = ctx->getAndroidContext();
		jobject marg1  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg1,marg1 ,"long" ,"android.support.v4.app.Fragment" );
		jboolean marg2 = (jboolean) arg2;
	  	param_address = (long) &arg3;	
		LOGV("registerProxyComponent param_address %d", param_address);
		jobject proxiedComponent = ctx->findProxyComponent(param_address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			proxiedComponent = ctx->createProxiedCallback(param_address,(long) proxiedFacebookSessionStatusCallback, "com/facebook/Session$StatusCallback");
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			LOGV("registerProxyComponent param_address %ld proxiedComponent %ld", param_address, proxiedComponent);
			ctx->registerProxyComponent(param_address, proxiedComponent);
			LOGV("registerCallbackData param_address %ld", param_address);
			ctx->registerCallbackData(param_address, param_address);
		}

		jobject marg3 = ctx->findProxyComponent((long) param_address);


		jobject jret0  = jni->invokeStaticObjectMethod(className, methodName, methodSignature , marg0, marg1, marg2, marg3);	



		FacebookSession *cret = new FacebookSession(jret0 );
		jni->popLocalFrame();
		return cret;

	}








	FacebookSession* FacebookSession::openActiveSession(bool arg1, FacebookSessionStatusCallback& arg2)
	{
		LOGV("FacebookSession::openActiveSession");

		const char *methodName = "openActiveSession";
		const char *methodSignature = "(Landroid/app/Activity;ZLcom/facebook/Session$StatusCallback;)Lcom/facebook/Session;";
		const char *className =  "com/facebook/Session";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jobject javaObject = 0; // unused


const char * enum_string = 0;
long param_address = 0;
	  		jobject marg0 = ctx->getAndroidContext();
		jboolean marg1 = (jboolean) arg1;
	  	param_address = (long) &arg2;	
		LOGV("registerProxyComponent param_address %d", param_address);
		jobject proxiedComponent = ctx->findProxyComponent(param_address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			proxiedComponent = ctx->createProxiedCallback(param_address,(long) proxiedFacebookSessionStatusCallback, "com/facebook/Session$StatusCallback");
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			LOGV("registerProxyComponent param_address %ld proxiedComponent %ld", param_address, proxiedComponent);
			ctx->registerProxyComponent(param_address, proxiedComponent);
			LOGV("registerCallbackData param_address %ld", param_address);
			ctx->registerCallbackData(param_address, param_address);
		}

		jobject marg2 = ctx->findProxyComponent((long) param_address);


		jobject jret0  = jni->invokeStaticObjectMethod(className, methodName, methodSignature , marg0, marg1, marg2);	



		FacebookSession *cret = new FacebookSession(jret0 );
		jni->popLocalFrame();
		return cret;

	}








	FacebookSession* FacebookSession::openActiveSessionWithAccessToken(FacebookAccessToken& arg1, FacebookSessionStatusCallback& arg2)
	{
		LOGV("FacebookSession::openActiveSessionWithAccessToken");

		const char *methodName = "openActiveSessionWithAccessToken";
		const char *methodSignature = "(Landroid/content/Context;Lcom/facebook/AccessToken;Lcom/facebook/Session$StatusCallback;)Lcom/facebook/Session;";
		const char *className =  "com/facebook/Session";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jobject javaObject = 0; // unused


const char * enum_string = 0;
long param_address = 0;
	  		jobject marg0 = ctx->getAndroidContext();
	  	param_address = (long) &arg1;	
		jobject marg1 = ctx->findProxyComponent((long) param_address);
	  	param_address = (long) &arg2;	
		LOGV("registerProxyComponent param_address %d", param_address);
		jobject proxiedComponent = ctx->findProxyComponent(param_address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			proxiedComponent = ctx->createProxiedCallback(param_address,(long) proxiedFacebookSessionStatusCallback, "com/facebook/Session$StatusCallback");
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			LOGV("registerProxyComponent param_address %ld proxiedComponent %ld", param_address, proxiedComponent);
			ctx->registerProxyComponent(param_address, proxiedComponent);
			LOGV("registerCallbackData param_address %ld", param_address);
			ctx->registerCallbackData(param_address, param_address);
		}

		jobject marg2 = ctx->findProxyComponent((long) param_address);


		jobject jret0  = jni->invokeStaticObjectMethod(className, methodName, methodSignature , marg0, marg1, marg2);	



		FacebookSession *cret = new FacebookSession(jret0 );
		jni->popLocalFrame();
		return cret;

	}
	FacebookSession::FacebookSession(const FacebookSession& cc)
	{
		LOGV("FacebookSession::FacebookSession(const FacebookSession& cc) invoked");

		CXXContext *ctx = CXXContext::sharedInstance();
		this->self = cc.self;
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			proxiedComponent = (jobject) this->self;
			ctx->registerProxyComponent(address, proxiedComponent);
		}
	}
	FacebookSession::FacebookSession(void * proxy)
	{
		LOGV("FacebookSession::FacebookSession invoked");
		
		CXXContext *ctx = CXXContext::sharedInstance();
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			proxiedComponent = jni->localToGlobalRef((jobject) proxy);
			this->self = (void *) proxiedComponent;
			ctx->registerProxyComponent(address, proxiedComponent);
		}

	}
 




// Facebook is an instance
	Facebook::Facebook(std::string arg0)
	{
		LOGV("Facebook::Facebook invoked");
		
		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			jclass clazz = jni->getClassRef("com/facebook/android/Facebook");

					jobject marg0 = jni->toJString(arg0);


			proxiedComponent = jni->createNewObject(clazz, jni->getMethodID(clazz, "<init>", "(Ljava/lang/String;)V") , marg0);
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			ctx->registerProxyComponent(address, proxiedComponent);
		}

	}

	Facebook::~Facebook()
	{
		LOGV("Facebook::~Facebook invoked");
		CXXContext *ctx = CXXContext::sharedInstance();
		long address = (long) this;
		jobject proxiedComponent = ctx->findProxyComponent(address);
		if (proxiedComponent != 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			ctx->deregisterProxyComponent(address);
		}		
	}










	std::string Facebook::getAccessToken()
	{
		LOGV("Facebook::getAccessToken");

		const char *methodName = "getAccessToken";
		const char *methodSignature = "()Ljava/lang/String;";
		const char *className =  "com/facebook/android/Facebook";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;


		jstring jret0  = jni->invokeStringMethod(javaObject, className, methodName, methodSignature );	



		std::string cret = jni->getUTFString(jret0 );
		jni->popLocalFrame();
		return cret;

	}








	void Facebook::authorize(std::string& arg1, int arg2, FacebookDialogListener& arg3)
	{
		LOGV("Facebook::authorize");

		const char *methodName = "authorize";
		const char *methodSignature = "(Landroid/app/Activity;[Ljava/lang/String;Lcom/facebook/android/Facebook$DialogListener;)V";
		const char *className =  "com/facebook/android/Facebook";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
	  		jobject marg0 = ctx->getAndroidContext();
		jobjectArray marg1 = jni->createStringArray(arg1, arg2);
	  	param_address = (long) &arg3;	
		LOGV("registerProxyComponent param_address %d", param_address);
		jobject proxiedComponent = ctx->findProxyComponent(param_address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			proxiedComponent = ctx->createProxiedCallback(param_address,(long) proxiedFacebookDialogListener, "com/facebook/android/Facebook$DialogListener");
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			LOGV("registerProxyComponent param_address %ld proxiedComponent %ld", param_address, proxiedComponent);
			ctx->registerProxyComponent(param_address, proxiedComponent);
			LOGV("registerCallbackData param_address %ld", param_address);
			ctx->registerCallbackData(param_address, param_address);
		}

		jobject marg2 = ctx->findProxyComponent((long) param_address);


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature , marg0, marg1, marg2);



		jni->popLocalFrame();		

	}








	void Facebook::authorize(std::string& arg1, int arg2, int arg3, FacebookDialogListener& arg4)
	{
		LOGV("Facebook::authorize");

		const char *methodName = "authorize";
		const char *methodSignature = "(Landroid/app/Activity;[Ljava/lang/String;ILcom/facebook/android/Facebook$DialogListener;)V";
		const char *className =  "com/facebook/android/Facebook";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
	  		jobject marg0 = ctx->getAndroidContext();
		jobjectArray marg1 = jni->createStringArray(arg1, arg2);
		jint marg2 = (jint) arg3;
	  	param_address = (long) &arg4;	
		LOGV("registerProxyComponent param_address %d", param_address);
		jobject proxiedComponent = ctx->findProxyComponent(param_address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			proxiedComponent = ctx->createProxiedCallback(param_address,(long) proxiedFacebookDialogListener, "com/facebook/android/Facebook$DialogListener");
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			LOGV("registerProxyComponent param_address %ld proxiedComponent %ld", param_address, proxiedComponent);
			ctx->registerProxyComponent(param_address, proxiedComponent);
			LOGV("registerCallbackData param_address %ld", param_address);
			ctx->registerCallbackData(param_address, param_address);
		}

		jobject marg3 = ctx->findProxyComponent((long) param_address);


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature , marg0, marg1, marg2, marg3);



		jni->popLocalFrame();		

	}








	void Facebook::authorize(FacebookDialogListener& arg1)
	{
		LOGV("Facebook::authorize");

		const char *methodName = "authorize";
		const char *methodSignature = "(Landroid/app/Activity;Lcom/facebook/android/Facebook$DialogListener;)V";
		const char *className =  "com/facebook/android/Facebook";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
	  		jobject marg0 = ctx->getAndroidContext();
	  	param_address = (long) &arg1;	
		LOGV("registerProxyComponent param_address %d", param_address);
		jobject proxiedComponent = ctx->findProxyComponent(param_address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			proxiedComponent = ctx->createProxiedCallback(param_address,(long) proxiedFacebookDialogListener, "com/facebook/android/Facebook$DialogListener");
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			LOGV("registerProxyComponent param_address %ld proxiedComponent %ld", param_address, proxiedComponent);
			ctx->registerProxyComponent(param_address, proxiedComponent);
			LOGV("registerCallbackData param_address %ld", param_address);
			ctx->registerCallbackData(param_address, param_address);
		}

		jobject marg1 = ctx->findProxyComponent((long) param_address);


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature , marg0, marg1);



		jni->popLocalFrame();		

	}








	std::string Facebook::request(std::string& arg0, long arg1)
	{
		LOGV("Facebook::request");

		const char *methodName = "request";
		const char *methodSignature = "(Ljava/lang/String;Landroid/os/Bundle;)Ljava/lang/String;";
		const char *className =  "com/facebook/android/Facebook";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
		jobject marg0 = jni->toJString(arg0);
		jobject marg1  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg1,marg1 ,"long" ,"android.os.Bundle" );


		jstring jret0  = jni->invokeStringMethod(javaObject, className, methodName, methodSignature , marg0, marg1);	



		std::string cret = jni->getUTFString(jret0 );
		jni->popLocalFrame();
		return cret;

	}








	std::string Facebook::request(std::string& arg0)
	{
		LOGV("Facebook::request");

		const char *methodName = "request";
		const char *methodSignature = "(Ljava/lang/String;)Ljava/lang/String;";
		const char *className =  "com/facebook/android/Facebook";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
		jobject marg0 = jni->toJString(arg0);


		jstring jret0  = jni->invokeStringMethod(javaObject, className, methodName, methodSignature , marg0);	



		std::string cret = jni->getUTFString(jret0 );
		jni->popLocalFrame();
		return cret;

	}








	std::string Facebook::request(long arg0)
	{
		LOGV("Facebook::request");

		const char *methodName = "request";
		const char *methodSignature = "(Landroid/os/Bundle;)Ljava/lang/String;";
		const char *className =  "com/facebook/android/Facebook";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
		jobject marg0  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg0,marg0 ,"long" ,"android.os.Bundle" );


		jstring jret0  = jni->invokeStringMethod(javaObject, className, methodName, methodSignature , marg0);	



		std::string cret = jni->getUTFString(jret0 );
		jni->popLocalFrame();
		return cret;

	}








	std::string Facebook::request(std::string& arg0, long arg1, std::string& arg2)
	{
		LOGV("Facebook::request");

		const char *methodName = "request";
		const char *methodSignature = "(Ljava/lang/String;Landroid/os/Bundle;Ljava/lang/String;)Ljava/lang/String;";
		const char *className =  "com/facebook/android/Facebook";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
		jobject marg0 = jni->toJString(arg0);
		jobject marg1  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg1,marg1 ,"long" ,"android.os.Bundle" );
		jobject marg2 = jni->toJString(arg2);


		jstring jret0  = jni->invokeStringMethod(javaObject, className, methodName, methodSignature , marg0, marg1, marg2);	



		std::string cret = jni->getUTFString(jret0 );
		jni->popLocalFrame();
		return cret;

	}








	bool Facebook::extendAccessTokenIfNeeded(FacebookServiceListener& arg1)
	{
		LOGV("Facebook::extendAccessTokenIfNeeded");

		const char *methodName = "extendAccessTokenIfNeeded";
		const char *methodSignature = "(Landroid/content/Context;Lcom/facebook/android/Facebook$ServiceListener;)Z";
		const char *className =  "com/facebook/android/Facebook";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
	  		jobject marg0 = ctx->getAndroidContext();
	  	param_address = (long) &arg1;	
		LOGV("registerProxyComponent param_address %d", param_address);
		jobject proxiedComponent = ctx->findProxyComponent(param_address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			proxiedComponent = ctx->createProxiedCallback(param_address,(long) proxiedFacebookServiceListener, "com/facebook/android/Facebook$ServiceListener");
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			LOGV("registerProxyComponent param_address %ld proxiedComponent %ld", param_address, proxiedComponent);
			ctx->registerProxyComponent(param_address, proxiedComponent);
			LOGV("registerCallbackData param_address %ld", param_address);
			ctx->registerCallbackData(param_address, param_address);
		}

		jobject marg1 = ctx->findProxyComponent((long) param_address);


		jboolean jret0  = jni->invokeBooleanMethod(javaObject, className, methodName, methodSignature , marg0, marg1);	



		bool cret = (bool) jret0 ;
		jni->popLocalFrame();
		return cret;

	}








	bool Facebook::shouldExtendAccessToken()
	{
		LOGV("Facebook::shouldExtendAccessToken");

		const char *methodName = "shouldExtendAccessToken";
		const char *methodSignature = "()Z";
		const char *className =  "com/facebook/android/Facebook";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;


		jboolean jret0  = jni->invokeBooleanMethod(javaObject, className, methodName, methodSignature );	



		bool cret = (bool) jret0 ;
		jni->popLocalFrame();
		return cret;

	}








	bool Facebook::extendAccessToken(FacebookServiceListener& arg1)
	{
		LOGV("Facebook::extendAccessToken");

		const char *methodName = "extendAccessToken";
		const char *methodSignature = "(Landroid/content/Context;Lcom/facebook/android/Facebook$ServiceListener;)Z";
		const char *className =  "com/facebook/android/Facebook";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
	  		jobject marg0 = ctx->getAndroidContext();
	  	param_address = (long) &arg1;	
		LOGV("registerProxyComponent param_address %d", param_address);
		jobject proxiedComponent = ctx->findProxyComponent(param_address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			proxiedComponent = ctx->createProxiedCallback(param_address,(long) proxiedFacebookServiceListener, "com/facebook/android/Facebook$ServiceListener");
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			LOGV("registerProxyComponent param_address %ld proxiedComponent %ld", param_address, proxiedComponent);
			ctx->registerProxyComponent(param_address, proxiedComponent);
			LOGV("registerCallbackData param_address %ld", param_address);
			ctx->registerCallbackData(param_address, param_address);
		}

		jobject marg1 = ctx->findProxyComponent((long) param_address);


		jboolean jret0  = jni->invokeBooleanMethod(javaObject, className, methodName, methodSignature , marg0, marg1);	



		bool cret = (bool) jret0 ;
		jni->popLocalFrame();
		return cret;

	}








	bool Facebook::getShouldAutoPublishInstall()
	{
		LOGV("Facebook::getShouldAutoPublishInstall");

		const char *methodName = "getShouldAutoPublishInstall";
		const char *methodSignature = "()Z";
		const char *className =  "com/facebook/android/Facebook";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;


		jboolean jret0  = jni->invokeBooleanMethod(javaObject, className, methodName, methodSignature );	



		bool cret = (bool) jret0 ;
		jni->popLocalFrame();
		return cret;

	}








	void Facebook::dialog(std::string& arg1, FacebookDialogListener& arg2)
	{
		LOGV("Facebook::dialog");

		const char *methodName = "dialog";
		const char *methodSignature = "(Landroid/content/Context;Ljava/lang/String;Lcom/facebook/android/Facebook$DialogListener;)V";
		const char *className =  "com/facebook/android/Facebook";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
	  		jobject marg0 = ctx->getAndroidContext();
		jobject marg1 = jni->toJString(arg1);
	  	param_address = (long) &arg2;	
		LOGV("registerProxyComponent param_address %d", param_address);
		jobject proxiedComponent = ctx->findProxyComponent(param_address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			proxiedComponent = ctx->createProxiedCallback(param_address,(long) proxiedFacebookDialogListener, "com/facebook/android/Facebook$DialogListener");
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			LOGV("registerProxyComponent param_address %ld proxiedComponent %ld", param_address, proxiedComponent);
			ctx->registerProxyComponent(param_address, proxiedComponent);
			LOGV("registerCallbackData param_address %ld", param_address);
			ctx->registerCallbackData(param_address, param_address);
		}

		jobject marg2 = ctx->findProxyComponent((long) param_address);


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature , marg0, marg1, marg2);



		jni->popLocalFrame();		

	}








	void Facebook::dialog(std::string& arg1, long arg2, FacebookDialogListener& arg3)
	{
		LOGV("Facebook::dialog");

		const char *methodName = "dialog";
		const char *methodSignature = "(Landroid/content/Context;Ljava/lang/String;Landroid/os/Bundle;Lcom/facebook/android/Facebook$DialogListener;)V";
		const char *className =  "com/facebook/android/Facebook";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
	  		jobject marg0 = ctx->getAndroidContext();
		jobject marg1 = jni->toJString(arg1);
		jobject marg2  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg2,marg2 ,"long" ,"android.os.Bundle" );
	  	param_address = (long) &arg3;	
		LOGV("registerProxyComponent param_address %d", param_address);
		jobject proxiedComponent = ctx->findProxyComponent(param_address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			proxiedComponent = ctx->createProxiedCallback(param_address,(long) proxiedFacebookDialogListener, "com/facebook/android/Facebook$DialogListener");
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			LOGV("registerProxyComponent param_address %ld proxiedComponent %ld", param_address, proxiedComponent);
			ctx->registerProxyComponent(param_address, proxiedComponent);
			LOGV("registerCallbackData param_address %ld", param_address);
			ctx->registerCallbackData(param_address, param_address);
		}

		jobject marg3 = ctx->findProxyComponent((long) param_address);


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature , marg0, marg1, marg2, marg3);



		jni->popLocalFrame();		

	}








	void Facebook::authorizeCallback(int arg0, int arg1, long arg2)
	{
		LOGV("Facebook::authorizeCallback");

		const char *methodName = "authorizeCallback";
		const char *methodSignature = "(IILandroid/content/Intent;)V";
		const char *className =  "com/facebook/android/Facebook";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
		jint marg0 = (jint) arg0;
		jint marg1 = (jint) arg1;
		jobject marg2  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg2,marg2 ,"long" ,"android.content.Intent" );


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature , marg0, marg1, marg2);



		jni->popLocalFrame();		

	}








	bool Facebook::isSessionValid()
	{
		LOGV("Facebook::isSessionValid");

		const char *methodName = "isSessionValid";
		const char *methodSignature = "()Z";
		const char *className =  "com/facebook/android/Facebook";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;


		jboolean jret0  = jni->invokeBooleanMethod(javaObject, className, methodName, methodSignature );	



		bool cret = (bool) jret0 ;
		jni->popLocalFrame();
		return cret;

	}








	std::string Facebook::logout()
	{
		LOGV("Facebook::logout");

		const char *methodName = "logout";
		const char *methodSignature = "(Landroid/content/Context;)Ljava/lang/String;";
		const char *className =  "com/facebook/android/Facebook";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
	  		jobject marg0 = ctx->getAndroidContext();


		jstring jret0  = jni->invokeStringMethod(javaObject, className, methodName, methodSignature , marg0);	



		std::string cret = jni->getUTFString(jret0 );
		jni->popLocalFrame();
		return cret;

	}








	long Facebook::getAccessExpires()
	{
		LOGV("Facebook::getAccessExpires");

		const char *methodName = "getAccessExpires";
		const char *methodSignature = "()J";
		const char *className =  "com/facebook/android/Facebook";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;


		jlong jret0  = jni->invokeLongMethod(javaObject, className, methodName, methodSignature );	



		long cret = (long) jret0 ;
		jni->popLocalFrame();
		return cret;

	}








	void Facebook::setSession(FacebookSession& arg0)
	{
		LOGV("Facebook::setSession");

		const char *methodName = "setSession";
		const char *methodSignature = "(Lcom/facebook/Session;)V";
		const char *className =  "com/facebook/android/Facebook";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
	  	param_address = (long) &arg0;	
		jobject marg0 = ctx->findProxyComponent((long) param_address);


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature , marg0);



		jni->popLocalFrame();		

	}








	FacebookSession* Facebook::getSession()
	{
		LOGV("Facebook::getSession");

		const char *methodName = "getSession";
		const char *methodSignature = "()Lcom/facebook/Session;";
		const char *className =  "com/facebook/android/Facebook";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;


		jobject jret0  = jni->invokeObjectMethod(javaObject, className, methodName, methodSignature );	



		FacebookSession *cret = new FacebookSession(jret0 );
		jni->popLocalFrame();
		return cret;

	}








	long Facebook::getLastAccessUpdate()
	{
		LOGV("Facebook::getLastAccessUpdate");

		const char *methodName = "getLastAccessUpdate";
		const char *methodSignature = "()J";
		const char *className =  "com/facebook/android/Facebook";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;


		jlong jret0  = jni->invokeLongMethod(javaObject, className, methodName, methodSignature );	



		long cret = (long) jret0 ;
		jni->popLocalFrame();
		return cret;

	}








	void Facebook::setTokenFromCache(std::string& arg0, long arg1, long arg2)
	{
		LOGV("Facebook::setTokenFromCache");

		const char *methodName = "setTokenFromCache";
		const char *methodSignature = "(Ljava/lang/String;JJ)V";
		const char *className =  "com/facebook/android/Facebook";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
		jobject marg0 = jni->toJString(arg0);
		jlong marg1 = (jlong) arg1;
		jlong marg2 = (jlong) arg2;


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature , marg0, marg1, marg2);



		jni->popLocalFrame();		

	}








	void Facebook::setAccessToken(std::string& arg0)
	{
		LOGV("Facebook::setAccessToken");

		const char *methodName = "setAccessToken";
		const char *methodSignature = "(Ljava/lang/String;)V";
		const char *className =  "com/facebook/android/Facebook";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
		jobject marg0 = jni->toJString(arg0);


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature , marg0);



		jni->popLocalFrame();		

	}








	void Facebook::setAccessExpires(long arg0)
	{
		LOGV("Facebook::setAccessExpires");

		const char *methodName = "setAccessExpires";
		const char *methodSignature = "(J)V";
		const char *className =  "com/facebook/android/Facebook";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
		jlong marg0 = (jlong) arg0;


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature , marg0);



		jni->popLocalFrame();		

	}








	void Facebook::setAccessExpiresIn(std::string& arg0)
	{
		LOGV("Facebook::setAccessExpiresIn");

		const char *methodName = "setAccessExpiresIn";
		const char *methodSignature = "(Ljava/lang/String;)V";
		const char *className =  "com/facebook/android/Facebook";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
		jobject marg0 = jni->toJString(arg0);


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature , marg0);



		jni->popLocalFrame();		

	}








	std::string Facebook::getAppId()
	{
		LOGV("Facebook::getAppId");

		const char *methodName = "getAppId";
		const char *methodSignature = "()Ljava/lang/String;";
		const char *className =  "com/facebook/android/Facebook";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;


		jstring jret0  = jni->invokeStringMethod(javaObject, className, methodName, methodSignature );	



		std::string cret = jni->getUTFString(jret0 );
		jni->popLocalFrame();
		return cret;

	}








	void Facebook::setAppId(std::string& arg0)
	{
		LOGV("Facebook::setAppId");

		const char *methodName = "setAppId";
		const char *methodSignature = "(Ljava/lang/String;)V";
		const char *className =  "com/facebook/android/Facebook";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
		jobject marg0 = jni->toJString(arg0);


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature , marg0);



		jni->popLocalFrame();		

	}








	std::string Facebook::getAttributionId(long arg0)
	{
		LOGV("Facebook::getAttributionId");

		const char *methodName = "getAttributionId";
		const char *methodSignature = "(Landroid/content/ContentResolver;)Ljava/lang/String;";
		const char *className =  "com/facebook/android/Facebook";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jobject javaObject = 0; // unused


const char * enum_string = 0;
long param_address = 0;
		jobject marg0  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg0,marg0 ,"long" ,"android.content.ContentResolver" );


		jstring jret0  = jni->invokeStaticStringMethod(className, methodName, methodSignature , marg0);	



		std::string cret = jni->getUTFString(jret0 );
		jni->popLocalFrame();
		return cret;

	}








	void Facebook::setShouldAutoPublishInstall(bool arg0)
	{
		LOGV("Facebook::setShouldAutoPublishInstall");

		const char *methodName = "setShouldAutoPublishInstall";
		const char *methodSignature = "(Z)V";
		const char *className =  "com/facebook/android/Facebook";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
		jboolean marg0 = (jboolean) arg0;


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature , marg0);



		jni->popLocalFrame();		

	}








	bool Facebook::publishInstall()
	{
		LOGV("Facebook::publishInstall");

		const char *methodName = "publishInstall";
		const char *methodSignature = "(Landroid/content/Context;)Z";
		const char *className =  "com/facebook/android/Facebook";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
	  		jobject marg0 = ctx->getAndroidContext();


		jboolean jret0  = jni->invokeBooleanMethod(javaObject, className, methodName, methodSignature , marg0);	



		bool cret = (bool) jret0 ;
		jni->popLocalFrame();
		return cret;

	}
	Facebook::Facebook(const Facebook& cc)
	{
		LOGV("Facebook::Facebook(const Facebook& cc) invoked");

		CXXContext *ctx = CXXContext::sharedInstance();
		this->self = cc.self;
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			proxiedComponent = (jobject) this->self;
			ctx->registerProxyComponent(address, proxiedComponent);
		}
	}
	Facebook::Facebook(void * proxy)
	{
		LOGV("Facebook::Facebook invoked");
		
		CXXContext *ctx = CXXContext::sharedInstance();
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			proxiedComponent = jni->localToGlobalRef((jobject) proxy);
			this->self = (void *) proxiedComponent;
			ctx->registerProxyComponent(address, proxiedComponent);
		}

	}
 




	AsyncFacebookRunnerRequestListener::~AsyncFacebookRunnerRequestListener()
	{
		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();
		
		long contextAddress = (long) this;
		jobject proxiedComponent = ctx->findProxyComponent(contextAddress);
		jni->deleteGlobalRef(proxiedComponent);
		ctx->deregisterProxyComponent(contextAddress);
		ctx->deregisterCallbackData(contextAddress);
	}

	class ProxiedAsyncFacebookRunnerRequestListener : public ProxiedCallback
	{
	public:
		jobject callMethod(long contextAddress, std::string methodName, void * payload);
	};


	static ProxiedAsyncFacebookRunnerRequestListener *proxiedAsyncFacebookRunnerRequestListener = new ProxiedAsyncFacebookRunnerRequestListener();

	jobject ProxiedAsyncFacebookRunnerRequestListener::callMethod(long contextAddress, std::string methodName, void * payload)
	{
		LOGV("AsyncFacebookRunnerRequestListener::callMethod enter");
		LOGV("AsyncFacebookRunnerRequestListener::callMethod methodName %s", methodName.c_str());

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();

		jni->pushLocalFrame();

		long callbackAddress = ctx->findCallbackData(contextAddress);
		LOGV("callbackAddress for AsyncFacebookRunnerRequestListener %ld (using contextAddress %ld)", callbackAddress, contextAddress);
		AsyncFacebookRunnerRequestListener *callback = (AsyncFacebookRunnerRequestListener *) reinterpret_cast<AsyncFacebookRunnerRequestListener *>(callbackAddress);

		void * userData = (void *) callback->userData;
		LOGV("userData for AsyncFacebookRunnerRequestListener %ld", (long) userData);
		jobject response  = 0;

		if (methodName == "onComplete")
		{
			LOGV("onComplete invoked");

			jobjectArray array = (jobjectArray) payload;
			jobject jobj = 0;
			// param.resource_name java/lang/String param.jni_elem_type jstring param.jni_elem_call_type String
			jstring jarg0  = jni->readStringObjectArrayElement(array, 0);
			LOGV("callMethod jniType jstring");
			std::string arg0 = jni->getUTFString(jarg0 );



			// param.resource_name java/lang/Object param.jni_elem_type jobject param.jni_elem_call_type Object
			jobject jarg1  = jni->readObjectObjectArrayElement(array, 1);
			LOGV("callMethod jniType jobject");
			long arg1;
			CXXConverter::to_cxx(jarg1 ,arg1,"java.lang.Object" ,"long" );





			LOGV("invoking callback onComplete(arg0,arg1,(void *) userData)");

				callback->onComplete(arg0,arg1,(void *) userData);
		}
		if (methodName == "onFacebookError")
		{
			LOGV("onFacebookError invoked");

			jobjectArray array = (jobjectArray) payload;
			jobject jobj = 0;
			// param.resource_name com/facebook/android/FacebookError param.jni_elem_type jobject param.jni_elem_call_type Object
			jobject jarg0  = jni->readObjectObjectArrayElement(array, 0);
			LOGV("callMethod jniType jobject");
			FacebookError* arg0 = 0;
			if (jarg0  != 0) 
			{
				arg0 = new FacebookError(jarg0 );
			}



			// param.resource_name java/lang/Object param.jni_elem_type jobject param.jni_elem_call_type Object
			jobject jarg1  = jni->readObjectObjectArrayElement(array, 1);
			LOGV("callMethod jniType jobject");
			long arg1;
			CXXConverter::to_cxx(jarg1 ,arg1,"java.lang.Object" ,"long" );





			LOGV("invoking callback onFacebookError(arg0,arg1,(void *) userData)");

				callback->onFacebookError(arg0,arg1,(void *) userData);
		}
		if (methodName == "onIOException")
		{
			LOGV("onIOException invoked");

			jobjectArray array = (jobjectArray) payload;
			jobject jobj = 0;
			// param.resource_name java/io/IOException param.jni_elem_type jobject param.jni_elem_call_type Object
			jobject jarg0  = jni->readObjectObjectArrayElement(array, 0);
			LOGV("callMethod jniType jobject");
			long arg0;
			CXXConverter::to_cxx(jarg0 ,arg0,"java.io.IOException" ,"long" );



			// param.resource_name java/lang/Object param.jni_elem_type jobject param.jni_elem_call_type Object
			jobject jarg1  = jni->readObjectObjectArrayElement(array, 1);
			LOGV("callMethod jniType jobject");
			long arg1;
			CXXConverter::to_cxx(jarg1 ,arg1,"java.lang.Object" ,"long" );





			LOGV("invoking callback onIOException(arg0,arg1,(void *) userData)");

				callback->onIOException(arg0,arg1,(void *) userData);
		}
		if (methodName == "onFileNotFoundException")
		{
			LOGV("onFileNotFoundException invoked");

			jobjectArray array = (jobjectArray) payload;
			jobject jobj = 0;
			// param.resource_name java/io/FileNotFoundException param.jni_elem_type jobject param.jni_elem_call_type Object
			jobject jarg0  = jni->readObjectObjectArrayElement(array, 0);
			LOGV("callMethod jniType jobject");
			long arg0;
			CXXConverter::to_cxx(jarg0 ,arg0,"java.io.FileNotFoundException" ,"long" );



			// param.resource_name java/lang/Object param.jni_elem_type jobject param.jni_elem_call_type Object
			jobject jarg1  = jni->readObjectObjectArrayElement(array, 1);
			LOGV("callMethod jniType jobject");
			long arg1;
			CXXConverter::to_cxx(jarg1 ,arg1,"java.lang.Object" ,"long" );





			LOGV("invoking callback onFileNotFoundException(arg0,arg1,(void *) userData)");

				callback->onFileNotFoundException(arg0,arg1,(void *) userData);
		}
		if (methodName == "onMalformedURLException")
		{
			LOGV("onMalformedURLException invoked");

			jobjectArray array = (jobjectArray) payload;
			jobject jobj = 0;
			// param.resource_name java/net/MalformedURLException param.jni_elem_type jobject param.jni_elem_call_type Object
			jobject jarg0  = jni->readObjectObjectArrayElement(array, 0);
			LOGV("callMethod jniType jobject");
			long arg0;
			CXXConverter::to_cxx(jarg0 ,arg0,"java.net.MalformedURLException" ,"long" );



			// param.resource_name java/lang/Object param.jni_elem_type jobject param.jni_elem_call_type Object
			jobject jarg1  = jni->readObjectObjectArrayElement(array, 1);
			LOGV("callMethod jniType jobject");
			long arg1;
			CXXConverter::to_cxx(jarg1 ,arg1,"java.lang.Object" ,"long" );





			LOGV("invoking callback onMalformedURLException(arg0,arg1,(void *) userData)");

				callback->onMalformedURLException(arg0,arg1,(void *) userData);
		}

		response = jni->popLocalFrame(response);
		return response;
	}







 




// AsyncFacebookRunner is an instance
	AsyncFacebookRunner::AsyncFacebookRunner(Facebook arg0)
	{
		LOGV("AsyncFacebookRunner::AsyncFacebookRunner invoked");
		
		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			jclass clazz = jni->getClassRef("com/facebook/android/AsyncFacebookRunner");

					jobject marg0 = ctx->findProxyComponent((long) &arg0);


			proxiedComponent = jni->createNewObject(clazz, jni->getMethodID(clazz, "<init>", "(Lcom/facebook/android/Facebook;)V") , marg0);
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			ctx->registerProxyComponent(address, proxiedComponent);
		}

	}

	AsyncFacebookRunner::~AsyncFacebookRunner()
	{
		LOGV("AsyncFacebookRunner::~AsyncFacebookRunner invoked");
		CXXContext *ctx = CXXContext::sharedInstance();
		long address = (long) this;
		jobject proxiedComponent = ctx->findProxyComponent(address);
		if (proxiedComponent != 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			ctx->deregisterProxyComponent(address);
		}		
	}










	void AsyncFacebookRunner::request(std::string& arg0, long arg1, std::string& arg2, AsyncFacebookRunnerRequestListener& arg3, long arg4)
	{
		LOGV("AsyncFacebookRunner::request");

		const char *methodName = "request";
		const char *methodSignature = "(Ljava/lang/String;Landroid/os/Bundle;Ljava/lang/String;Lcom/facebook/android/AsyncFacebookRunner$RequestListener;Ljava/lang/Object;)V";
		const char *className =  "com/facebook/android/AsyncFacebookRunner";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
		jobject marg0 = jni->toJString(arg0);
		jobject marg1  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg1,marg1 ,"long" ,"android.os.Bundle" );
		jobject marg2 = jni->toJString(arg2);
	  	param_address = (long) &arg3;	
		LOGV("registerProxyComponent param_address %d", param_address);
		jobject proxiedComponent = ctx->findProxyComponent(param_address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			proxiedComponent = ctx->createProxiedCallback(param_address,(long) proxiedAsyncFacebookRunnerRequestListener, "com/facebook/android/AsyncFacebookRunner$RequestListener");
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			LOGV("registerProxyComponent param_address %ld proxiedComponent %ld", param_address, proxiedComponent);
			ctx->registerProxyComponent(param_address, proxiedComponent);
			LOGV("registerCallbackData param_address %ld", param_address);
			ctx->registerCallbackData(param_address, param_address);
		}

		jobject marg3 = ctx->findProxyComponent((long) param_address);
		jobject marg4  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg4,marg4 ,"long" ,"java.lang.Object" );


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature , marg0, marg1, marg2, marg3, marg4);



		jni->popLocalFrame();		

	}








	void AsyncFacebookRunner::request(std::string& arg0, long arg1, AsyncFacebookRunnerRequestListener& arg2, long arg3)
	{
		LOGV("AsyncFacebookRunner::request");

		const char *methodName = "request";
		const char *methodSignature = "(Ljava/lang/String;Landroid/os/Bundle;Lcom/facebook/android/AsyncFacebookRunner$RequestListener;Ljava/lang/Object;)V";
		const char *className =  "com/facebook/android/AsyncFacebookRunner";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
		jobject marg0 = jni->toJString(arg0);
		jobject marg1  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg1,marg1 ,"long" ,"android.os.Bundle" );
	  	param_address = (long) &arg2;	
		LOGV("registerProxyComponent param_address %d", param_address);
		jobject proxiedComponent = ctx->findProxyComponent(param_address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			proxiedComponent = ctx->createProxiedCallback(param_address,(long) proxiedAsyncFacebookRunnerRequestListener, "com/facebook/android/AsyncFacebookRunner$RequestListener");
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			LOGV("registerProxyComponent param_address %ld proxiedComponent %ld", param_address, proxiedComponent);
			ctx->registerProxyComponent(param_address, proxiedComponent);
			LOGV("registerCallbackData param_address %ld", param_address);
			ctx->registerCallbackData(param_address, param_address);
		}

		jobject marg2 = ctx->findProxyComponent((long) param_address);
		jobject marg3  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg3,marg3 ,"long" ,"java.lang.Object" );


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature , marg0, marg1, marg2, marg3);



		jni->popLocalFrame();		

	}








	void AsyncFacebookRunner::request(std::string& arg0, long arg1, AsyncFacebookRunnerRequestListener& arg2)
	{
		LOGV("AsyncFacebookRunner::request");

		const char *methodName = "request";
		const char *methodSignature = "(Ljava/lang/String;Landroid/os/Bundle;Lcom/facebook/android/AsyncFacebookRunner$RequestListener;)V";
		const char *className =  "com/facebook/android/AsyncFacebookRunner";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
		jobject marg0 = jni->toJString(arg0);
		jobject marg1  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg1,marg1 ,"long" ,"android.os.Bundle" );
	  	param_address = (long) &arg2;	
		LOGV("registerProxyComponent param_address %d", param_address);
		jobject proxiedComponent = ctx->findProxyComponent(param_address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			proxiedComponent = ctx->createProxiedCallback(param_address,(long) proxiedAsyncFacebookRunnerRequestListener, "com/facebook/android/AsyncFacebookRunner$RequestListener");
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			LOGV("registerProxyComponent param_address %ld proxiedComponent %ld", param_address, proxiedComponent);
			ctx->registerProxyComponent(param_address, proxiedComponent);
			LOGV("registerCallbackData param_address %ld", param_address);
			ctx->registerCallbackData(param_address, param_address);
		}

		jobject marg2 = ctx->findProxyComponent((long) param_address);


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature , marg0, marg1, marg2);



		jni->popLocalFrame();		

	}








	void AsyncFacebookRunner::request(long arg0, AsyncFacebookRunnerRequestListener& arg1, long arg2)
	{
		LOGV("AsyncFacebookRunner::request");

		const char *methodName = "request";
		const char *methodSignature = "(Landroid/os/Bundle;Lcom/facebook/android/AsyncFacebookRunner$RequestListener;Ljava/lang/Object;)V";
		const char *className =  "com/facebook/android/AsyncFacebookRunner";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
		jobject marg0  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg0,marg0 ,"long" ,"android.os.Bundle" );
	  	param_address = (long) &arg1;	
		LOGV("registerProxyComponent param_address %d", param_address);
		jobject proxiedComponent = ctx->findProxyComponent(param_address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			proxiedComponent = ctx->createProxiedCallback(param_address,(long) proxiedAsyncFacebookRunnerRequestListener, "com/facebook/android/AsyncFacebookRunner$RequestListener");
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			LOGV("registerProxyComponent param_address %ld proxiedComponent %ld", param_address, proxiedComponent);
			ctx->registerProxyComponent(param_address, proxiedComponent);
			LOGV("registerCallbackData param_address %ld", param_address);
			ctx->registerCallbackData(param_address, param_address);
		}

		jobject marg1 = ctx->findProxyComponent((long) param_address);
		jobject marg2  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg2,marg2 ,"long" ,"java.lang.Object" );


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature , marg0, marg1, marg2);



		jni->popLocalFrame();		

	}








	void AsyncFacebookRunner::request(long arg0, AsyncFacebookRunnerRequestListener& arg1)
	{
		LOGV("AsyncFacebookRunner::request");

		const char *methodName = "request";
		const char *methodSignature = "(Landroid/os/Bundle;Lcom/facebook/android/AsyncFacebookRunner$RequestListener;)V";
		const char *className =  "com/facebook/android/AsyncFacebookRunner";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
		jobject marg0  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg0,marg0 ,"long" ,"android.os.Bundle" );
	  	param_address = (long) &arg1;	
		LOGV("registerProxyComponent param_address %d", param_address);
		jobject proxiedComponent = ctx->findProxyComponent(param_address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			proxiedComponent = ctx->createProxiedCallback(param_address,(long) proxiedAsyncFacebookRunnerRequestListener, "com/facebook/android/AsyncFacebookRunner$RequestListener");
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			LOGV("registerProxyComponent param_address %ld proxiedComponent %ld", param_address, proxiedComponent);
			ctx->registerProxyComponent(param_address, proxiedComponent);
			LOGV("registerCallbackData param_address %ld", param_address);
			ctx->registerCallbackData(param_address, param_address);
		}

		jobject marg1 = ctx->findProxyComponent((long) param_address);


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature , marg0, marg1);



		jni->popLocalFrame();		

	}








	void AsyncFacebookRunner::request(std::string& arg0, AsyncFacebookRunnerRequestListener& arg1, long arg2)
	{
		LOGV("AsyncFacebookRunner::request");

		const char *methodName = "request";
		const char *methodSignature = "(Ljava/lang/String;Lcom/facebook/android/AsyncFacebookRunner$RequestListener;Ljava/lang/Object;)V";
		const char *className =  "com/facebook/android/AsyncFacebookRunner";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
		jobject marg0 = jni->toJString(arg0);
	  	param_address = (long) &arg1;	
		LOGV("registerProxyComponent param_address %d", param_address);
		jobject proxiedComponent = ctx->findProxyComponent(param_address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			proxiedComponent = ctx->createProxiedCallback(param_address,(long) proxiedAsyncFacebookRunnerRequestListener, "com/facebook/android/AsyncFacebookRunner$RequestListener");
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			LOGV("registerProxyComponent param_address %ld proxiedComponent %ld", param_address, proxiedComponent);
			ctx->registerProxyComponent(param_address, proxiedComponent);
			LOGV("registerCallbackData param_address %ld", param_address);
			ctx->registerCallbackData(param_address, param_address);
		}

		jobject marg1 = ctx->findProxyComponent((long) param_address);
		jobject marg2  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg2,marg2 ,"long" ,"java.lang.Object" );


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature , marg0, marg1, marg2);



		jni->popLocalFrame();		

	}








	void AsyncFacebookRunner::request(std::string& arg0, AsyncFacebookRunnerRequestListener& arg1)
	{
		LOGV("AsyncFacebookRunner::request");

		const char *methodName = "request";
		const char *methodSignature = "(Ljava/lang/String;Lcom/facebook/android/AsyncFacebookRunner$RequestListener;)V";
		const char *className =  "com/facebook/android/AsyncFacebookRunner";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
		jobject marg0 = jni->toJString(arg0);
	  	param_address = (long) &arg1;	
		LOGV("registerProxyComponent param_address %d", param_address);
		jobject proxiedComponent = ctx->findProxyComponent(param_address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			proxiedComponent = ctx->createProxiedCallback(param_address,(long) proxiedAsyncFacebookRunnerRequestListener, "com/facebook/android/AsyncFacebookRunner$RequestListener");
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			LOGV("registerProxyComponent param_address %ld proxiedComponent %ld", param_address, proxiedComponent);
			ctx->registerProxyComponent(param_address, proxiedComponent);
			LOGV("registerCallbackData param_address %ld", param_address);
			ctx->registerCallbackData(param_address, param_address);
		}

		jobject marg1 = ctx->findProxyComponent((long) param_address);


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature , marg0, marg1);



		jni->popLocalFrame();		

	}








	void AsyncFacebookRunner::logout(AsyncFacebookRunnerRequestListener& arg1)
	{
		LOGV("AsyncFacebookRunner::logout");

		const char *methodName = "logout";
		const char *methodSignature = "(Landroid/content/Context;Lcom/facebook/android/AsyncFacebookRunner$RequestListener;)V";
		const char *className =  "com/facebook/android/AsyncFacebookRunner";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
	  		jobject marg0 = ctx->getAndroidContext();
	  	param_address = (long) &arg1;	
		LOGV("registerProxyComponent param_address %d", param_address);
		jobject proxiedComponent = ctx->findProxyComponent(param_address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			proxiedComponent = ctx->createProxiedCallback(param_address,(long) proxiedAsyncFacebookRunnerRequestListener, "com/facebook/android/AsyncFacebookRunner$RequestListener");
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			LOGV("registerProxyComponent param_address %ld proxiedComponent %ld", param_address, proxiedComponent);
			ctx->registerProxyComponent(param_address, proxiedComponent);
			LOGV("registerCallbackData param_address %ld", param_address);
			ctx->registerCallbackData(param_address, param_address);
		}

		jobject marg1 = ctx->findProxyComponent((long) param_address);


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature , marg0, marg1);



		jni->popLocalFrame();		

	}








	void AsyncFacebookRunner::logout(AsyncFacebookRunnerRequestListener& arg1, long arg2)
	{
		LOGV("AsyncFacebookRunner::logout");

		const char *methodName = "logout";
		const char *methodSignature = "(Landroid/content/Context;Lcom/facebook/android/AsyncFacebookRunner$RequestListener;Ljava/lang/Object;)V";
		const char *className =  "com/facebook/android/AsyncFacebookRunner";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
	  		jobject marg0 = ctx->getAndroidContext();
	  	param_address = (long) &arg1;	
		LOGV("registerProxyComponent param_address %d", param_address);
		jobject proxiedComponent = ctx->findProxyComponent(param_address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			proxiedComponent = ctx->createProxiedCallback(param_address,(long) proxiedAsyncFacebookRunnerRequestListener, "com/facebook/android/AsyncFacebookRunner$RequestListener");
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			LOGV("registerProxyComponent param_address %ld proxiedComponent %ld", param_address, proxiedComponent);
			ctx->registerProxyComponent(param_address, proxiedComponent);
			LOGV("registerCallbackData param_address %ld", param_address);
			ctx->registerCallbackData(param_address, param_address);
		}

		jobject marg1 = ctx->findProxyComponent((long) param_address);
		jobject marg2  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg2,marg2 ,"long" ,"java.lang.Object" );


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature , marg0, marg1, marg2);



		jni->popLocalFrame();		

	}
	AsyncFacebookRunner::AsyncFacebookRunner(const AsyncFacebookRunner& cc)
	{
		LOGV("AsyncFacebookRunner::AsyncFacebookRunner(const AsyncFacebookRunner& cc) invoked");

		CXXContext *ctx = CXXContext::sharedInstance();
		this->self = cc.self;
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			proxiedComponent = (jobject) this->self;
			ctx->registerProxyComponent(address, proxiedComponent);
		}
	}
	AsyncFacebookRunner::AsyncFacebookRunner(void * proxy)
	{
		LOGV("AsyncFacebookRunner::AsyncFacebookRunner invoked");
		
		CXXContext *ctx = CXXContext::sharedInstance();
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			proxiedComponent = jni->localToGlobalRef((jobject) proxy);
			this->self = (void *) proxiedComponent;
			ctx->registerProxyComponent(address, proxiedComponent);
		}

	}
 




// FacebookSessionAuthorizationRequest is abstract
	FacebookSessionAuthorizationRequest::~FacebookSessionAuthorizationRequest()
	{
		LOGV("FacebookSessionAuthorizationRequest::~FacebookSessionAuthorizationRequest invoked");
		CXXContext *ctx = CXXContext::sharedInstance();
		long address = (long) this;
		jobject proxiedComponent = ctx->findProxyComponent(address);
		if (proxiedComponent != 0)
		{
			ctx->deregisterProxyComponent(address);
		}		
	}










	void FacebookSessionAuthorizationRequest::setIsLegacy(bool arg0)
	{
		LOGV("FacebookSessionAuthorizationRequest::setIsLegacy");

		const char *methodName = "setIsLegacy";
		const char *methodSignature = "(Z)V";
		const char *className =  "com/facebook/Session$AuthorizationRequest";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;
		
		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
		jboolean marg0 = (jboolean) arg0;


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature , marg0);



		jni->popLocalFrame();		

	}
	FacebookSessionAuthorizationRequest::FacebookSessionAuthorizationRequest()
	{
	}
	FacebookSessionAuthorizationRequest::FacebookSessionAuthorizationRequest(const FacebookSessionAuthorizationRequest& cc)
	{
		LOGV("FacebookSessionAuthorizationRequest::FacebookSessionAuthorizationRequest(const FacebookSessionAuthorizationRequest& cc) invoked");

		CXXContext *ctx = CXXContext::sharedInstance();
		this->self = cc.self;
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			proxiedComponent = (jobject) this->self;
			ctx->registerProxyComponent(address, proxiedComponent);
		}
	}
	FacebookSessionAuthorizationRequest::FacebookSessionAuthorizationRequest(void * proxy)
	{
		LOGV("FacebookSessionAuthorizationRequest::FacebookSessionAuthorizationRequest invoked");
		
		CXXContext *ctx = CXXContext::sharedInstance();
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			proxiedComponent = jni->localToGlobalRef((jobject) proxy);
			this->self = (void *) proxiedComponent;
			ctx->registerProxyComponent(address, proxiedComponent);
		}

	}
 




// FacebookSessionOpenRequest is an instance
	FacebookSessionOpenRequest::FacebookSessionOpenRequest()
	{
		LOGV("FacebookSessionOpenRequest::FacebookSessionOpenRequest invoked");
		
		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			jclass clazz = jni->getClassRef("com/facebook/Session$OpenRequest");



			proxiedComponent = jni->createNewObject(clazz, jni->getMethodID(clazz, "<init>", "(Landroid/app/Activity;)V") );
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			ctx->registerProxyComponent(address, proxiedComponent);
		}

	}
	FacebookSessionOpenRequest::FacebookSessionOpenRequest(long arg0)
	{
		LOGV("FacebookSessionOpenRequest::FacebookSessionOpenRequest invoked");
		
		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			jclass clazz = jni->getClassRef("com/facebook/Session$OpenRequest");

					jobject marg0  = 0;
					CXXConverter::from_cxx(arg0,marg0 ,"long" ,"android.support.v4.app.Fragment" );


			proxiedComponent = jni->createNewObject(clazz, jni->getMethodID(clazz, "<init>", "(Landroid/support/v4/app/Fragment;)V") , marg0);
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			ctx->registerProxyComponent(address, proxiedComponent);
		}

	}

	FacebookSessionOpenRequest::~FacebookSessionOpenRequest()
	{
		LOGV("FacebookSessionOpenRequest::~FacebookSessionOpenRequest invoked");
		CXXContext *ctx = CXXContext::sharedInstance();
		long address = (long) this;
		jobject proxiedComponent = ctx->findProxyComponent(address);
		if (proxiedComponent != 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			ctx->deregisterProxyComponent(address);
		}		
	}










	FacebookSessionOpenRequest* FacebookSessionOpenRequest::setCallback(FacebookSessionStatusCallback& arg0)
	{
		LOGV("FacebookSessionOpenRequest::setCallback");

		const char *methodName = "setCallback";
		const char *methodSignature = "(Lcom/facebook/Session$StatusCallback;)Lcom/facebook/Session$OpenRequest;";
		const char *className =  "com/facebook/Session$OpenRequest";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
	  	param_address = (long) &arg0;	
		LOGV("registerProxyComponent param_address %d", param_address);
		jobject proxiedComponent = ctx->findProxyComponent(param_address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			proxiedComponent = ctx->createProxiedCallback(param_address,(long) proxiedFacebookSessionStatusCallback, "com/facebook/Session$StatusCallback");
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			LOGV("registerProxyComponent param_address %ld proxiedComponent %ld", param_address, proxiedComponent);
			ctx->registerProxyComponent(param_address, proxiedComponent);
			LOGV("registerCallbackData param_address %ld", param_address);
			ctx->registerCallbackData(param_address, param_address);
		}

		jobject marg0 = ctx->findProxyComponent((long) param_address);


		jobject jret0  = jni->invokeObjectMethod(javaObject, className, methodName, methodSignature , marg0);	



		FacebookSessionOpenRequest *cret = new FacebookSessionOpenRequest(jret0 );
		jni->popLocalFrame();
		return cret;

	}








	FacebookSessionOpenRequest* FacebookSessionOpenRequest::setLoginBehavior(FacebookSessionLoginBehavior::FacebookSessionLoginBehavior arg0)
	{
		LOGV("FacebookSessionOpenRequest::setLoginBehavior");

		const char *methodName = "setLoginBehavior";
		const char *methodSignature = "(Lcom/facebook/SessionLoginBehavior;)Lcom/facebook/Session$OpenRequest;";
		const char *className =  "com/facebook/Session$OpenRequest";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
		do
		{
		if (FacebookSessionLoginBehavior::SSO_WITH_FALLBACK == arg0)
		{
			enum_string = "SSO_WITH_FALLBACK";
			break;
		}
		if (FacebookSessionLoginBehavior::SSO_ONLY == arg0)
		{
			enum_string = "SSO_ONLY";
			break;
		}
		if (FacebookSessionLoginBehavior::SUPPRESS_SSO == arg0)
		{
			enum_string = "SUPPRESS_SSO";
			break;
		}
		} while (0);
		jobject marg0 = jni->toJEnum(jni->getClassRef("com/facebook/SessionLoginBehavior"), enum_string);


		jobject jret0  = jni->invokeObjectMethod(javaObject, className, methodName, methodSignature , marg0);	



		FacebookSessionOpenRequest *cret = new FacebookSessionOpenRequest(jret0 );
		jni->popLocalFrame();
		return cret;

	}








	FacebookSessionOpenRequest* FacebookSessionOpenRequest::setRequestCode(int arg0)
	{
		LOGV("FacebookSessionOpenRequest::setRequestCode");

		const char *methodName = "setRequestCode";
		const char *methodSignature = "(I)Lcom/facebook/Session$OpenRequest;";
		const char *className =  "com/facebook/Session$OpenRequest";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
		jint marg0 = (jint) arg0;


		jobject jret0  = jni->invokeObjectMethod(javaObject, className, methodName, methodSignature , marg0);	



		FacebookSessionOpenRequest *cret = new FacebookSessionOpenRequest(jret0 );
		jni->popLocalFrame();
		return cret;

	}








	FacebookSessionOpenRequest* FacebookSessionOpenRequest::setPermissions(long arg0)
	{
		LOGV("FacebookSessionOpenRequest::setPermissions");

		const char *methodName = "setPermissions";
		const char *methodSignature = "(Ljava/util/List;)Lcom/facebook/Session$OpenRequest;";
		const char *className =  "com/facebook/Session$OpenRequest";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
		jobject marg0  = 0;
		LOGV("converting from_cxx");
		CXXConverter::from_cxx(arg0,marg0 ,"long" ,"java.util.List" );


		jobject jret0  = jni->invokeObjectMethod(javaObject, className, methodName, methodSignature , marg0);	



		FacebookSessionOpenRequest *cret = new FacebookSessionOpenRequest(jret0 );
		jni->popLocalFrame();
		return cret;

	}








	FacebookSessionOpenRequest* FacebookSessionOpenRequest::setDefaultAudience(FacebookSessionDefaultAudience::FacebookSessionDefaultAudience arg0)
	{
		LOGV("FacebookSessionOpenRequest::setDefaultAudience");

		const char *methodName = "setDefaultAudience";
		const char *methodSignature = "(Lcom/facebook/SessionDefaultAudience;)Lcom/facebook/Session$OpenRequest;";
		const char *className =  "com/facebook/Session$OpenRequest";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
		do
		{
		if (FacebookSessionDefaultAudience::NONE == arg0)
		{
			enum_string = "NONE";
			break;
		}
		if (FacebookSessionDefaultAudience::ONLY_ME == arg0)
		{
			enum_string = "ONLY_ME";
			break;
		}
		if (FacebookSessionDefaultAudience::FRIENDS == arg0)
		{
			enum_string = "FRIENDS";
			break;
		}
		if (FacebookSessionDefaultAudience::EVERYONE == arg0)
		{
			enum_string = "EVERYONE";
			break;
		}
		} while (0);
		jobject marg0 = jni->toJEnum(jni->getClassRef("com/facebook/SessionDefaultAudience"), enum_string);


		jobject jret0  = jni->invokeObjectMethod(javaObject, className, methodName, methodSignature , marg0);	



		FacebookSessionOpenRequest *cret = new FacebookSessionOpenRequest(jret0 );
		jni->popLocalFrame();
		return cret;

	}
	FacebookSessionOpenRequest::FacebookSessionOpenRequest(const FacebookSessionOpenRequest& cc)
	{
		LOGV("FacebookSessionOpenRequest::FacebookSessionOpenRequest(const FacebookSessionOpenRequest& cc) invoked");

		CXXContext *ctx = CXXContext::sharedInstance();
		this->self = cc.self;
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			proxiedComponent = (jobject) this->self;
			ctx->registerProxyComponent(address, proxiedComponent);
		}
	}
	FacebookSessionOpenRequest::FacebookSessionOpenRequest(void * proxy)
	{
		LOGV("FacebookSessionOpenRequest::FacebookSessionOpenRequest invoked");
		
		CXXContext *ctx = CXXContext::sharedInstance();
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			proxiedComponent = jni->localToGlobalRef((jobject) proxy);
			this->self = (void *) proxiedComponent;
			ctx->registerProxyComponent(address, proxiedComponent);
		}

	}
 




// FacebookSessionNewPermissionRequest is an instance
	FacebookSessionNewPermissionRequest::FacebookSessionNewPermissionRequest(long arg1)
	{
		LOGV("FacebookSessionNewPermissionRequest::FacebookSessionNewPermissionRequest invoked");
		
		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			jclass clazz = jni->getClassRef("com/facebook/Session$NewPermissionsRequest");

					jobject marg0  = 0;
					CXXConverter::from_cxx(arg1,marg0 ,"long" ,"java.util.List" );


			proxiedComponent = jni->createNewObject(clazz, jni->getMethodID(clazz, "<init>", "(Landroid/app/Activity;Ljava/util/List;)V") , marg0);
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			ctx->registerProxyComponent(address, proxiedComponent);
		}

	}
	FacebookSessionNewPermissionRequest::FacebookSessionNewPermissionRequest(long arg0, long arg1)
	{
		LOGV("FacebookSessionNewPermissionRequest::FacebookSessionNewPermissionRequest invoked");
		
		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			jclass clazz = jni->getClassRef("com/facebook/Session$NewPermissionsRequest");

					jobject marg0  = 0;
					CXXConverter::from_cxx(arg0,marg0 ,"long" ,"android.support.v4.app.Fragment" );
					jobject marg1  = 0;
					CXXConverter::from_cxx(arg1,marg1 ,"long" ,"java.util.List" );


			proxiedComponent = jni->createNewObject(clazz, jni->getMethodID(clazz, "<init>", "(Landroid/support/v4/app/Fragment;Ljava/util/List;)V") , marg0, marg1);
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			ctx->registerProxyComponent(address, proxiedComponent);
		}

	}

	FacebookSessionNewPermissionRequest::~FacebookSessionNewPermissionRequest()
	{
		LOGV("FacebookSessionNewPermissionRequest::~FacebookSessionNewPermissionRequest invoked");
		CXXContext *ctx = CXXContext::sharedInstance();
		long address = (long) this;
		jobject proxiedComponent = ctx->findProxyComponent(address);
		if (proxiedComponent != 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			ctx->deregisterProxyComponent(address);
		}		
	}










	FacebookSessionNewPermissionRequest* FacebookSessionNewPermissionRequest::setCallback(FacebookSessionStatusCallback& arg0)
	{
		LOGV("FacebookSessionNewPermissionRequest::setCallback");

		const char *methodName = "setCallback";
		const char *methodSignature = "(Lcom/facebook/Session$StatusCallback;)Lcom/facebook/Session$NewPermissionsRequest;";
		const char *className =  "com/facebook/Session$NewPermissionsRequest";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
	  	param_address = (long) &arg0;	
		LOGV("registerProxyComponent param_address %d", param_address);
		jobject proxiedComponent = ctx->findProxyComponent(param_address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			proxiedComponent = ctx->createProxiedCallback(param_address,(long) proxiedFacebookSessionStatusCallback, "com/facebook/Session$StatusCallback");
			proxiedComponent = jni->localToGlobalRef(proxiedComponent);
			LOGV("registerProxyComponent param_address %ld proxiedComponent %ld", param_address, proxiedComponent);
			ctx->registerProxyComponent(param_address, proxiedComponent);
			LOGV("registerCallbackData param_address %ld", param_address);
			ctx->registerCallbackData(param_address, param_address);
		}

		jobject marg0 = ctx->findProxyComponent((long) param_address);


		jobject jret0  = jni->invokeObjectMethod(javaObject, className, methodName, methodSignature , marg0);	



		FacebookSessionNewPermissionRequest *cret = new FacebookSessionNewPermissionRequest(jret0 );
		jni->popLocalFrame();
		return cret;

	}








	FacebookSessionNewPermissionRequest* FacebookSessionNewPermissionRequest::setLoginBehavior(FacebookSessionLoginBehavior::FacebookSessionLoginBehavior arg0)
	{
		LOGV("FacebookSessionNewPermissionRequest::setLoginBehavior");

		const char *methodName = "setLoginBehavior";
		const char *methodSignature = "(Lcom/facebook/SessionLoginBehavior;)Lcom/facebook/Session$NewPermissionsRequest;";
		const char *className =  "com/facebook/Session$NewPermissionsRequest";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
		do
		{
		if (FacebookSessionLoginBehavior::SSO_WITH_FALLBACK == arg0)
		{
			enum_string = "SSO_WITH_FALLBACK";
			break;
		}
		if (FacebookSessionLoginBehavior::SSO_ONLY == arg0)
		{
			enum_string = "SSO_ONLY";
			break;
		}
		if (FacebookSessionLoginBehavior::SUPPRESS_SSO == arg0)
		{
			enum_string = "SUPPRESS_SSO";
			break;
		}
		} while (0);
		jobject marg0 = jni->toJEnum(jni->getClassRef("com/facebook/SessionLoginBehavior"), enum_string);


		jobject jret0  = jni->invokeObjectMethod(javaObject, className, methodName, methodSignature , marg0);	



		FacebookSessionNewPermissionRequest *cret = new FacebookSessionNewPermissionRequest(jret0 );
		jni->popLocalFrame();
		return cret;

	}








	FacebookSessionNewPermissionRequest* FacebookSessionNewPermissionRequest::setRequestCode(int arg0)
	{
		LOGV("FacebookSessionNewPermissionRequest::setRequestCode");

		const char *methodName = "setRequestCode";
		const char *methodSignature = "(I)Lcom/facebook/Session$NewPermissionsRequest;";
		const char *className =  "com/facebook/Session$NewPermissionsRequest";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
		jint marg0 = (jint) arg0;


		jobject jret0  = jni->invokeObjectMethod(javaObject, className, methodName, methodSignature , marg0);	



		FacebookSessionNewPermissionRequest *cret = new FacebookSessionNewPermissionRequest(jret0 );
		jni->popLocalFrame();
		return cret;

	}








	FacebookSessionNewPermissionRequest* FacebookSessionNewPermissionRequest::setDefaultAudience(FacebookSessionDefaultAudience::FacebookSessionDefaultAudience arg0)
	{
		LOGV("FacebookSessionNewPermissionRequest::setDefaultAudience");

		const char *methodName = "setDefaultAudience";
		const char *methodSignature = "(Lcom/facebook/SessionDefaultAudience;)Lcom/facebook/Session$NewPermissionsRequest;";
		const char *className =  "com/facebook/Session$NewPermissionsRequest";

		LOGV("className %d methodName %s methodSignature %s", className, methodName, methodSignature);

		CXXContext *ctx = CXXContext::sharedInstance();
		JNIContext *jni = JNIContext::sharedInstance();


		jni->pushLocalFrame();

		long thisAddress = (long) this;

		LOGV("thisAddress %d", thisAddress);
		jobject javaObject = ctx->findProxyComponent(thisAddress);

		LOGV("javaObject %d", javaObject);

	
const char * enum_string = 0;
long param_address = 0;
		do
		{
		if (FacebookSessionDefaultAudience::NONE == arg0)
		{
			enum_string = "NONE";
			break;
		}
		if (FacebookSessionDefaultAudience::ONLY_ME == arg0)
		{
			enum_string = "ONLY_ME";
			break;
		}
		if (FacebookSessionDefaultAudience::FRIENDS == arg0)
		{
			enum_string = "FRIENDS";
			break;
		}
		if (FacebookSessionDefaultAudience::EVERYONE == arg0)
		{
			enum_string = "EVERYONE";
			break;
		}
		} while (0);
		jobject marg0 = jni->toJEnum(jni->getClassRef("com/facebook/SessionDefaultAudience"), enum_string);


		jobject jret0  = jni->invokeObjectMethod(javaObject, className, methodName, methodSignature , marg0);	



		FacebookSessionNewPermissionRequest *cret = new FacebookSessionNewPermissionRequest(jret0 );
		jni->popLocalFrame();
		return cret;

	}
	FacebookSessionNewPermissionRequest::FacebookSessionNewPermissionRequest(const FacebookSessionNewPermissionRequest& cc)
	{
		LOGV("FacebookSessionNewPermissionRequest::FacebookSessionNewPermissionRequest(const FacebookSessionNewPermissionRequest& cc) invoked");

		CXXContext *ctx = CXXContext::sharedInstance();
		this->self = cc.self;
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			proxiedComponent = (jobject) this->self;
			ctx->registerProxyComponent(address, proxiedComponent);
		}
	}
	FacebookSessionNewPermissionRequest::FacebookSessionNewPermissionRequest(void * proxy)
	{
		LOGV("FacebookSessionNewPermissionRequest::FacebookSessionNewPermissionRequest invoked");
		
		CXXContext *ctx = CXXContext::sharedInstance();
		long address = (long) this;
		LOGV("registerProxyComponent address %d", address);
		jobject proxiedComponent = ctx->findProxyComponent(address);
		LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
		if (proxiedComponent == 0)
		{
			JNIContext *jni = JNIContext::sharedInstance();
			proxiedComponent = jni->localToGlobalRef((jobject) proxy);
			this->self = (void *) proxiedComponent;
			ctx->registerProxyComponent(address, proxiedComponent);
		}

	}
  