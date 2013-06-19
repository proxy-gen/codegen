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

		long heapPtr = ctx->findCallbackData(contextAddress);
		LOGV("heapPtr for FacebookDialogListener %ld", heapPtr);
		FacebookDialogListener *callback = (FacebookDialogListener *) reinterpret_cast<FacebookDialogListener *>(heapPtr);

		void * userData = (void *) ctx->findUserData(contextAddress);
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

		long heapPtr = ctx->findCallbackData(contextAddress);
		LOGV("heapPtr for FacebookServiceListener %ld", heapPtr);
		FacebookServiceListener *callback = (FacebookServiceListener *) reinterpret_cast<FacebookServiceListener *>(heapPtr);

		void * userData = (void *) ctx->findUserData(contextAddress);
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
			long userDataPtr = (long) (arg1.userData);
			LOGV("registerUserData param_address %ld userData %ld", param_address, (long) userDataPtr);
			ctx->registerUserData(param_address, (long) userDataPtr);
			long heapPtr = (long) malloc(sizeof(arg1));
			memcpy((void *) heapPtr, (void *) &arg1, sizeof(arg1));
			LOGV("registerCallbackData param_address %ld callbackData %ld", param_address, heapPtr);
			ctx->registerCallbackData(param_address, heapPtr);
		}

		jobject marg1 = ctx->findProxyComponent((long) param_address);


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature , marg0, marg1);



		jni->popLocalFrame();		

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
			long userDataPtr = (long) (arg3.userData);
			LOGV("registerUserData param_address %ld userData %ld", param_address, (long) userDataPtr);
			ctx->registerUserData(param_address, (long) userDataPtr);
			long heapPtr = (long) malloc(sizeof(arg3));
			memcpy((void *) heapPtr, (void *) &arg3, sizeof(arg3));
			LOGV("registerCallbackData param_address %ld callbackData %ld", param_address, heapPtr);
			ctx->registerCallbackData(param_address, heapPtr);
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
			long userDataPtr = (long) (arg4.userData);
			LOGV("registerUserData param_address %ld userData %ld", param_address, (long) userDataPtr);
			ctx->registerUserData(param_address, (long) userDataPtr);
			long heapPtr = (long) malloc(sizeof(arg4));
			memcpy((void *) heapPtr, (void *) &arg4, sizeof(arg4));
			LOGV("registerCallbackData param_address %ld callbackData %ld", param_address, heapPtr);
			ctx->registerCallbackData(param_address, heapPtr);
		}

		jobject marg3 = ctx->findProxyComponent((long) param_address);


		jni->invokeVoidMethod(javaObject, className, methodName, methodSignature , marg0, marg1, marg2, marg3);



		jni->popLocalFrame();		

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
			long userDataPtr = (long) (arg1.userData);
			LOGV("registerUserData param_address %ld userData %ld", param_address, (long) userDataPtr);
			ctx->registerUserData(param_address, (long) userDataPtr);
			long heapPtr = (long) malloc(sizeof(arg1));
			memcpy((void *) heapPtr, (void *) &arg1, sizeof(arg1));
			LOGV("registerCallbackData param_address %ld callbackData %ld", param_address, heapPtr);
			ctx->registerCallbackData(param_address, heapPtr);
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
			long userDataPtr = (long) (arg1.userData);
			LOGV("registerUserData param_address %ld userData %ld", param_address, (long) userDataPtr);
			ctx->registerUserData(param_address, (long) userDataPtr);
			long heapPtr = (long) malloc(sizeof(arg1));
			memcpy((void *) heapPtr, (void *) &arg1, sizeof(arg1));
			LOGV("registerCallbackData param_address %ld callbackData %ld", param_address, heapPtr);
			ctx->registerCallbackData(param_address, heapPtr);
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
			long userDataPtr = (long) (arg2.userData);
			LOGV("registerUserData param_address %ld userData %ld", param_address, (long) userDataPtr);
			ctx->registerUserData(param_address, (long) userDataPtr);
			long heapPtr = (long) malloc(sizeof(arg2));
			memcpy((void *) heapPtr, (void *) &arg2, sizeof(arg2));
			LOGV("registerCallbackData param_address %ld callbackData %ld", param_address, heapPtr);
			ctx->registerCallbackData(param_address, heapPtr);
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
			long userDataPtr = (long) (arg3.userData);
			LOGV("registerUserData param_address %ld userData %ld", param_address, (long) userDataPtr);
			ctx->registerUserData(param_address, (long) userDataPtr);
			long heapPtr = (long) malloc(sizeof(arg3));
			memcpy((void *) heapPtr, (void *) &arg3, sizeof(arg3));
			LOGV("registerCallbackData param_address %ld callbackData %ld", param_address, heapPtr);
			ctx->registerCallbackData(param_address, heapPtr);
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
  