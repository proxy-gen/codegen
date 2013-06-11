package com.zynga.sdk.cxx;

import java.lang.reflect.Proxy;

import android.content.Context;
import android.util.Log;

public class CXXContext 
{
	private static final String LOG_TAG = "CXXContext";
	private static CXXContext _instance;
	private static boolean _nativeContextLoaded = false;
	
	public static CXXContext getInstance()
	{
		return _instance;
	}
	
	public synchronized static CXXContext createCXXContext(Context activityContext) 
	{
		_instance = new CXXContext();
		loadNativeContext(activityContext);
		return _instance;
	}
	
	public synchronized static void destroyCXXContext(Context activityContext)
	{
		if (_instance != null)
		{
			_instance = null;
		}
		unloadNativeContext();
	}
	
	private CXXContext()
	{
	}
	
	@SuppressWarnings("rawtypes")
	public synchronized Object createProxiedCallback(long externalObjectAddress, long externalProxiedObjectID, Class externalProxiedClass)
	{
		Log.d(LOG_TAG, "CXXContext createProxiedCallback invoked for externalObjectAddress=" + externalObjectAddress 
			+ ",externalProxiedObjectID=" + externalProxiedObjectID 
			+ ",externalProxiedClass=" + externalProxiedClass.getName());
		return Proxy.newProxyInstance(externalProxiedClass.getClassLoader(), new Class[] { externalProxiedClass }, new CXXCallbackProxy(externalObjectAddress, externalProxiedObjectID));
	}
	
	public synchronized native Object notifyCXX(long objectAddress, long proxiedObjectID, String methodName, Object[] payload);
	
	private static void unloadNativeContext()
	{
		if (_nativeContextLoaded == true)
		{
			destroyNativeContext();
			_nativeContextLoaded = false;
		}
	}
	
	private static void loadNativeContext(Context activityContext)
	{
		if (_nativeContextLoaded == false)
		{
			boolean nativeContextCreated = createNativeContext(activityContext);
			if (nativeContextCreated == false)
			{
				throw new IllegalStateException();
			}
			_nativeContextLoaded = true;
		}
	}
	
	private static native boolean createNativeContext(Context activityContext);
	
	private static native void destroyNativeContext();
	
	public synchronized static native void setAndroidContext(Context androidContext);
	
}
