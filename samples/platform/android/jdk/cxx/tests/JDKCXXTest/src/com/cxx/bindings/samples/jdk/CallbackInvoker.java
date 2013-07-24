package com.cxx.bindings.samples.jdk;

import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;

import android.util.Log;

public class CallbackInvoker {

	private static String TAG = "CallbackInvoker";
	
	public Object invokeNoArg(Method method, Object receiver)
	{
		try
		{
			Class clazz = method.getDeclaringClass();
			Object response = method.invoke(receiver, new Object[0]);
			Log.i(TAG, "response is " + response);
			return response;
		}
		catch(InvocationTargetException e)
		{
			Log.e(TAG, "exception ", e);
			e.printStackTrace();
		}
		catch(IllegalAccessException e)
		{
			Log.e(TAG, "exception ", e);
			e.printStackTrace();
		}
		Log.e(TAG, "null response");
		return null;
	}
	
}
