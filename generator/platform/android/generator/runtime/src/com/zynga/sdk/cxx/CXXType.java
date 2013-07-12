package com.zynga.sdk.cxx;

import java.lang.reflect.GenericArrayType;
import java.lang.reflect.ParameterizedType;
import java.lang.reflect.Type;
import java.lang.reflect.TypeVariable;
import java.lang.reflect.WildcardType;
import java.util.ArrayList;
import java.util.List;

@SuppressWarnings("rawtypes")
public class CXXType {

	private static Class ARRAY_CLASS = Array.class;
	private static Class OBJECT_CLASS = Object.class;
	
	private Package typePackage;
	
	private Class typeType;
	
	private Class typeClass;
	
	private List<CXXType> childTypes = new ArrayList<CXXType>();
	
	public CXXType(Type type)
	{
		typeType = inferTypeType(type);
		typeClass = inferTypeClass(type);
		typePackage = inferTypePackage(type);
		childTypes = buildChildTypes(type);
	}
	
	public Class getTypeType() {
		return typeType;
	}

	public Package getTypePackage() {
		return typePackage;
	}

	public Class getTypeClass() 
	{
		return typeClass;
	}
	
	public List<CXXType> getChildTypes() 
	{
		return childTypes;
	}
	
	public int getNumChildTypes()
	{
		return childTypes.size();
	}
	
	public String toString() {
		StringBuilder strBldr = new StringBuilder();
		if (typeClass == Array.class)
		{
			CXXType componentType = childTypes.get(0);
			strBldr.append(componentType.toString());
			strBldr.append("[");
			strBldr.append("]");
		}
		else
		{			
			strBldr.append(typeClass.getName());
			if (!childTypes.isEmpty())
			{
				strBldr.append("<");
				int idx = 0;
				for (CXXType childType : childTypes)
				{
					if (idx++ > 0)
					{
						strBldr.append(",");
					}
					strBldr.append(childType.toString());
				}
				strBldr.append(">");
			}
		}		
		return strBldr.toString();
	}

	private Class inferTypeClass(Type type)
	{
		if (type instanceof Class)
		{
			if (((Class) type).isArray()) 
			{
				return ARRAY_CLASS;
			}
			return ((Class) type);
		}
		else if (type instanceof ParameterizedType)
		{
			Type rawType = ((ParameterizedType) type).getRawType();
			return inferTypeClass(rawType);
		}
		else if (type instanceof TypeVariable)
		{
			Type[] bounds = ((TypeVariable) type).getBounds();
			return inferTypeClass(bounds[0]);
		}
		else if (type instanceof GenericArrayType)
		{
			return ARRAY_CLASS;
		}
		else if (type instanceof WildcardType)
		{
			Type[] upperBounds = ((WildcardType) type).getUpperBounds();
			if (upperBounds != null && upperBounds.length > 0)
			{
				// lower bound declared
				Type[] bounds = upperBounds;
				Type bound = bounds[0];
				return inferTypeClass(bound);
			}
			//TODO: FIXME add support for lower bound
		}
		return OBJECT_CLASS;
	}
	
	private List<CXXType> buildChildTypes(Type type)
	{
		// String[], List<T>[], List<List<T>[]
		if (type instanceof Class)
		{
			Type componentType = ((Class) type).getComponentType();
			if (componentType != null)
			{
				childTypes.add(new CXXType(componentType));
			}
		}
		else if (type instanceof ParameterizedType)
		{
			Type[] componentTypes = ((ParameterizedType) type).getActualTypeArguments();
			for (Type componentType : componentTypes)
			{
				childTypes.add(new CXXType(componentType));
			}
		}
		else if (type instanceof GenericArrayType)
		{
			Type componentType = ((GenericArrayType) type).getGenericComponentType();
			childTypes.add(new CXXType(componentType));
		}
		else if (type instanceof TypeVariable)
		{
			Type[] containerTypes = ((TypeVariable) type).getBounds();
			if (containerTypes.length > 0)
			{
				Type containerType = containerTypes[0];
				if (containerType instanceof Class)
				{
					Type componentType = ((Class) containerType).getComponentType();
					if (componentType != null)
					{
						childTypes.add(new CXXType(componentType));
					}
				}
				else if (containerType instanceof ParameterizedType)
				{
					Type[] componentTypes = ((ParameterizedType) containerType).getActualTypeArguments();
					for (Type componentType : componentTypes)
					{
						childTypes.add(new CXXType(componentType));
					}
				}
				else if (containerType instanceof TypeVariable)
				{
					List<CXXType> componentTypes = buildChildTypes(containerType);  
					childTypes.addAll(componentTypes);
				}
			}				
		}
		else if (type instanceof WildcardType)
		{
			Type[] upperBounds = ((WildcardType) type).getUpperBounds();
			if (upperBounds != null && upperBounds.length > 0)
			{
				// lower bound declared
				Type[] containerTypes = upperBounds;
				if (containerTypes.length > 0)
				{
					Type containerType = containerTypes[0];
					if (containerType instanceof Class)
					{
						Type componentType = ((Class) containerType).getComponentType();
						if (componentType != null)
						{
							childTypes.add(new CXXType(componentType));
						}
					}
					else if (containerType instanceof ParameterizedType)
					{
						Type[] componentTypes = ((ParameterizedType) containerType).getActualTypeArguments();
						for (Type componentType : componentTypes)
						{
							childTypes.add(new CXXType(componentType));
						}
					}
					else if (containerType instanceof TypeVariable)
					{
						List<CXXType> componentTypes = buildChildTypes(containerType);
						childTypes.addAll(componentTypes);
					}
				}
				
			}
		}
		return childTypes;
	}
	
	private Class inferTypeType(Type type)
	{
		if (type instanceof Class)
		{
			return Class.class;
		}
		else if (type instanceof GenericArrayType)
		{
			return GenericArrayType.class;
		}
		else if (type instanceof ParameterizedType)
		{
			return ParameterizedType.class;
		}
		else if (type instanceof TypeVariable)
		{
			return TypeVariable.class;
		}
		else if (type instanceof WildcardType)
		{
			return WildcardType.class;
		}
		
		throw new IllegalArgumentException("unknown type " + type.toString());
	}
	
	private Package inferTypePackage(Type type)
	{
		Class typeClass = inferTypeClass(type);
		Package pkg = typeClass.getPackage();
		if (typeClass == Array.class)
		{
			pkg = null;
		}
		return pkg;
	}
	
	public static class Array
	{
		
	}
}
