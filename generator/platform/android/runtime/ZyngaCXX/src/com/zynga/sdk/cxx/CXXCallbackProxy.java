package com.zynga.sdk.cxx;

import java.lang.reflect.InvocationHandler;
import java.lang.reflect.Method;

import android.util.Log;

public class CXXCallbackProxy implements InvocationHandler 
{
	private static final String LOG_TAG = "CXXCallbackProxy";
	private static final String CLONE_METHOD_TAG = "clone";
	private static final String EQUALS_METHOD_TAG = "equals";
	private static final String FINALIZE_METHOD_TAG = "finalize";
	private static final String GETCLASS_METHOD_TAG = "getClass";
	private static final String HASH_CODE_METHOD_TAG = "hashCode";
	private static final String NOTIFY_METHOD_TAG = "notify";
	private static final String NOTIFYALL_METHOD_TAG = "notifyAll";
	private static final String TO_STRING_METHOD_TAG = "toString";
	private static final String WAIT_METHOD_TAG = "wait";
	
	private long m_externalContextAddress;
	private long m_externalProxiedObjectID;
	
	public CXXCallbackProxy(long externalContextAddress, long externalProxiedObjectID)
	{
		this.m_externalContextAddress = externalContextAddress;
		this.m_externalProxiedObjectID = externalProxiedObjectID;
	}
	
	@Override
	public Object invoke(Object object, Method method, Object[] args)
			throws Throwable 
	{
		Log.i(LOG_TAG, "CXXCallbackProxy invoke invoked");
		Log.i(LOG_TAG, "CXXCallbackProxy method invoked " + method.getName());
		if (CLONE_METHOD_TAG.equals(method.getName()))
		{
			return this.clone();
		}
		else if (EQUALS_METHOD_TAG.equals(method.getName()))
		{
			return this.equals(args[0]);
		}
		else if (FINALIZE_METHOD_TAG.equals(method.getName()))
		{
			this.finalize();
			return null;
		}
		else if (GETCLASS_METHOD_TAG.equals(method.getName()))
		{
			return this.getClass();
		}
		else if (HASH_CODE_METHOD_TAG.equals(method.getName()))
		{
			return this.hashCode();
		}
		else if (NOTIFY_METHOD_TAG.equals(method.getName()))
		{
			this.notify();
			return null;
		}
		else if (NOTIFYALL_METHOD_TAG.equals(method.getName()))
		{
			this.notifyAll();
			return null;
		}
		else if (TO_STRING_METHOD_TAG.equals(method.getName()))
		{
			return this.toString();
		}
		else if (WAIT_METHOD_TAG.equals(method.getName()))
		{
			if (args.length == 0)
			{
				this.wait();
			}
			else if (args.length == 1)
			{
				this.wait((Long) args[0]);
			}
			else if (args.length == 2)
			{
				this.wait((Long) args[0], (Integer) args[1]);
			}
			return null;
		}
		CXXContext ctx = CXXContext.getInstance();
		Log.i(LOG_TAG, "CXXCallbackProxy invoke externalContextAddress=" + m_externalContextAddress + " methodName=" + method.getName() + " externalProxiedObjectID=" + m_externalProxiedObjectID);;
		return ctx.notifyCXX(m_externalContextAddress, m_externalProxiedObjectID, method.getName(), args);
	}
	
	@Deprecated
	protected String buildMethodName(Method method, Object[] args)
	{
		StringBuilder bldr = new StringBuilder();
		bldr.append(method.getName());
		bldr.append("(");
		for (Object arg : args)
		{
			if (arg != null)
			{
				bldr.append(getClassSignature(arg.getClass()));
			}
		}
		bldr.append(")");
		bldr.append(getClassSignature(method.getReturnType()));
		return bldr.toString();
	}
	
	@SuppressWarnings("rawtypes")
	@Deprecated
	protected String getClassSignature(Class clazz)
	{
		String signature = "";
		if (clazz.equals(boolean.class))
			signature = "Z";
		else if (clazz.equals(byte.class))
			signature = "B";
		else if (clazz.equals(char.class))
			signature = "C";
		else if (clazz.equals(short.class))
			signature = "S";
		else if (clazz.equals(int.class))
			signature = "I";
		else if (clazz.equals(long.class))
			signature = "J";
		else if (clazz.equals(float.class))
			signature = "F";
		else if (clazz.equals(double.class))
			signature = "D";
		else if (clazz.equals(void.class))
			signature = "V";
		else if (clazz.equals(boolean[].class))
			signature = "[Z";
		else if (clazz.equals(byte[].class))
			signature = "[B";
		else if (clazz.equals(char[].class))
			signature = "[C";
		else if (clazz.equals(short[].class))
			signature = "[S";
		else if (clazz.equals(int[].class))
			signature = "[I";
		else if (clazz.equals(long[].class))
			signature = "[J";
		else if (clazz.equals(float[].class))
			signature = "[F";
		else if (clazz.equals(double[].class))
			signature = "[D";
		else
			signature += "L" + clazz.getName().replace('.', '/') + ";";
		return signature;
	}

}
