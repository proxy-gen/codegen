/**
 * 
 */
package com.zynga.sdk.cxx;

import java.lang.reflect.Method;
import java.lang.reflect.Type;
import java.util.List;
import java.util.Map;

import junit.framework.TestCase;

/**
 * @author rvergis
 * 
 */
public class CXXTypeTest extends TestCase {

	/**
	 * @param name
	 */
	public CXXTypeTest(String name) {
		super(name);
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see junit.framework.TestCase#setUp()
	 */
	protected void setUp() throws Exception {
		super.setUp();
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see junit.framework.TestCase#tearDown()
	 */
	protected void tearDown() throws Exception {
		super.tearDown();
	}
	
	@SuppressWarnings("rawtypes")
	public void testGetTypeInfo()
			throws NoSuchMethodException
		{
			System.out.println("====testGetTypeInfo=====");
			Class[] classes = new Class[] { A.class  };
			String[] expected = new String[] {
				"java.util.List<java.util.List<java.util.List<java.util.List<java.util.List<java.lang.Number>>>>>", //77
				"java.util.List<java.util.List<java.lang.Number>>", //78
				"java.util.List<java.util.List<java.lang.Number>>", //79
				"java.lang.Number", //80
				"java.lang.Number", //81
				"java.lang.String", //82
				"int", //83
				"java.util.Map<java.util.Map,java.util.Map<java.lang.String,java.lang.Integer>>", //84
				"java.util.Map<java.util.Map,java.util.Map<java.lang.String,java.lang.Object>>", //85
				"java.util.Map<java.util.Map,java.util.Map<java.lang.String,java.lang.Integer>>", //86
				"java.util.Map<java.lang.String,java.lang.Integer>", //87
				"java.lang.Integer[]", //88
				"int[]", //89
				"java.util.List<java.lang.Number>[]", //90
				"java.util.List<java.lang.Number>[]", //91
				"java.util.List<java.util.List<java.lang.String>>[]", //92
				"java.util.List<java.util.List<java.lang.String>>[]", //93
				"java.util.List<java.util.List<java.lang.String[]>>", //94
				"java.util.List<java.lang.String[]>", //95
				"java.util.List<java.util.List<java.util.List<java.lang.String>>>", //96
				"java.util.List<java.lang.Number>", //97
				"java.util.List<java.lang.Integer>", //98
				"java.util.List<java.lang.Double>", //99
				"java.util.List<java.lang.String>" // 100
			};
			int testIdx = 0;
			for (Class clazz : classes)
			{
				Method[] methods = clazz.getDeclaredMethods();
				for (Method method : methods) 
				{
					Type[] types = method.getGenericParameterTypes();
					for (Type type : types)
					{
						CXXType cxxType = new CXXType(type);
						assertEquals(expected[testIdx++], cxxType.toString());
					}
				}
			}
		}	

	// ~ CLASSES

	static class A<U extends Number> {
		
		public <T extends List<? extends U>> void m77(List<? extends List<? extends List<? extends List<T>>>> s)
		{
			
		}
		
		public <T extends U> void m78(List<? extends List<? extends T>> s)
		{
			
		}
		
		public void m79(List<? extends List<? extends U>> s)
		{
			
		}
		
		public <T extends U> void m80(T s) {

		}

		public void m81(U s) {

		}

		public void m82(String s) {

		}

		public void m83(int s) {

		}

		public <T extends Integer> void m84(Map<Map, Map<String, T>> s) {

		}

		public <T> void m85(Map<Map, Map<String, T>> s) {

		}

		public void m86(Map<Map, Map<String, Integer>> s) {

		}

		public void m87(Map<String, Integer> s) {

		}

		public void m88(Integer[] s) {

		}

		public void m89(int[] s) {

		}

		public <T extends List<? extends U>> void m90(T[] s) {

		}

		public <T extends List<U>> void m91(T[] s) {

		}

		public <T extends List<String>> void m92(List<T>[] s) {

		}

		public void m93(List<List<String>>[] s) {

		}

		public void m94(List<List<String[]>> s) {

		}

		public void m95(List<String[]> s) {

		}

		public void m96(List<List<List<String>>> s) {

		}

		public <T extends U> void m97(List<? extends T> s) {

		}

		public <T extends Integer> void m98(List<? extends T> s) {

		}

		public void m99(List<? extends Double> s) {

		}

		public void m100(List<String> s) {

		}
	}

}
