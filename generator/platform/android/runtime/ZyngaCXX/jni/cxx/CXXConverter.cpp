/*
 * CXXConverter.cpp
 *
 *  Created on: June 30, 2013
 *      Author: rvergis
 */

#include <CXXConverter.hpp>
#include <CXXTypeHierarchy.hpp>
#include <CXXContext.hpp>
#include <JNIContext.hpp>

#define LOG_ENABLED 1
#define log(...) if (LOG_ENABLED) fprintf(stderr, __VA_ARGS__)

cxx_converter get_converter(std::stack<long>& converter_stack)
{
	long converter_ptr = converter_stack.top();
	converter_stack.pop();
	cxx_converter converter = (cxx_converter) converter_ptr;
	return converter;
}

void convert_boolean(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (jboolean) cxx_value;
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx_value = (bool) java_value;
	}
}

void convert_java_util_Date(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) jni->createNewObjectRef("java/util/Date");
		jni->invokeVoidMethod((jobject) java_value, "java/util/Date", "setTime", "(J)V", (jlong) cxx_value);	
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx_value = (long) jni->invokeLongMethod((jobject) java_value, "java/util/Date", "getTime", "()J");
	}
}

void convert_java_util_List(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();
	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		CXXTypeHierarchy item_type = child_types.at(0);

		cxx_converter item_converter = get_converter(converter_stack);
		java_value = (long) jni->createNewObjectRef("java/util/ArrayList");

		std::vector<long> *cxx_vector = (std::vector<long> *) cxx_value;
		for(std::vector<long>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) *it;
			long java_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->invokeBooleanMethod((jobject) java_value, "java/util/ArrayList", "add", "(Ljava/lang/Object;)Z", (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		CXXTypeHierarchy item_type = child_types.at(0);

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<long> *cxx_vector = (std::vector<long> *) cxx_value;
		int size = (int) jni->invokeIntMethod((jobject) java_value, "java/util/List", "size", "()I");
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->invokeObjectMethod((jobject) java_value, "java/util/List", "get", "(I)Ljava/lang/Object;", idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(cxx_item_ptr);
		}

		jni->popLocalFrame();
	}
}

void convert_java_util_Map(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		CXXTypeHierarchy key_type = child_types.at(0);
		CXXTypeHierarchy value_type = child_types.at(1);

		cxx_converter key_converter = get_converter(converter_stack);
		cxx_converter value_converter = get_converter(converter_stack);

		java_value = (long) jni->createNewObjectRef("java/util/HashMap");
		std::map<long,long> *cxx_map = (std::map<long,long> *) cxx_value;

		for(std::map<long,long>::iterator it = cxx_map->begin(); it != cxx_map->end(); ++it)
		{
			long cxx_key = (long) (*it).first;
			long java_key = 0;
			key_converter(java_key, cxx_key, key_type, converter_type, converter_stack);

			long cxx_value = (long) (*it).second;
			long java_value = 0;
			value_converter(java_value, cxx_value, value_type, converter_type, converter_stack);

			jni->invokeObjectMethod((jobject) java_value, "java/util/Map", "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", (jobject) java_key, (jobject) java_value);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		CXXTypeHierarchy key_type = child_types.at(0);
		CXXTypeHierarchy value_type = child_types.at(1);

		cxx_converter key_converter = get_converter(converter_stack);
		cxx_converter value_converter = get_converter(converter_stack);

		std::map<long,long> *cxx_map = (std::map<long,long> *) cxx_value;
		jobject java_set = (jobject) jni->invokeObjectMethod((jobject) java_value, "java/util/Map", "entrySet", "()Ljava/util/Set;");
		jobject java_iterator = (jobject) jni->invokeObjectMethod((jobject) java_set, "java/util/Set", "iterator", "()Ljava/util/Iterator;");

		int size = (int) jni->invokeIntMethod((jobject) java_value, "java/util/Map", "size", "()I");

		for (int idx = 0; idx < size; idx++)
		{
			jobject java_entry = (jobject) jni->invokeObjectMethod((jobject) java_iterator, "java/util/Iterator", "next", "()Ljava/lang/Object;");
			long java_key = (long) jni->invokeObjectMethod((jobject) java_entry, "java/util/Map$Entry", "getKey", "()Ljava/lang/Object;");
			long java_value = (long) jni->invokeObjectMethod((jobject) java_entry, "java/util/Map$Entry", "getValue", "()Ljava/lang/Object;");

			long cxx_key = 0;
			key_converter(java_key, cxx_key, key_type, converter_type, converter_stack);
			
			long cxx_value = 0;
			value_converter(java_value, cxx_value, value_type, converter_type, converter_stack);

			cxx_map->insert(std::pair<long,long>(cxx_key, cxx_value));
		}

		jni->popLocalFrame();
	}
}

void convert__object_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<long> *cxx_vector = (std::vector<long> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<long>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) *it;
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<long> *cxx_vector = (std::vector<long> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(cxx_item_ptr);
		}

		jni->popLocalFrame();
	}
}

void convert__byte_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();
		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<char> *cxx_vector = (std::vector<char> *) cxx_value;
		int count = cxx_vector->size();
		char java_array[count];
		int item_idx = 0;
		for(std::vector<char>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			char item = (char) *it;
			java_array[item_idx++] = item;
		}
		java_value = (long) jni->createByteArray(*java_array, count);
		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();
		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<char> *cxx_vector = (std::vector<char> *) cxx_value;
		int count = (int) jni->getArrayLength((jarray) java_value);
		char * java_array = jni->getByteArray((jbyteArray) java_value);
		for (int idx = 0 ; idx < count; idx++)
		{
			char item = (char) java_array[idx];
			cxx_vector->push_back(item);
		}
		jni->popLocalFrame();
	}
}

void convert__char_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();
		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<char> *cxx_vector = (std::vector<char> *) cxx_value;
		int count = cxx_vector->size();
		char java_array[count];
		int item_idx = 0;
		for(std::vector<char>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			char item = (char) *it;
			java_array[item_idx++] = item;
		}
		java_value = (long) jni->createCharArray(*java_array, count);
		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();
		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<char> *cxx_vector = (std::vector<char> *) cxx_value;
		int count = (int) jni->getArrayLength((jarray) java_value);
		char * java_array = jni->getCharArray((jcharArray) java_value);
		for (int idx = 0 ; idx < count; idx++)
		{
			char item = (char) java_array[idx];
			cxx_vector->push_back(item);
		}
		jni->popLocalFrame();
	}
}

void convert__short_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();
		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<short> *cxx_vector = (std::vector<short> *) cxx_value;
		int count = cxx_vector->size();
		short java_array[count];
		int item_idx = 0;
		for(std::vector<short>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			short item = (short) *it;
			java_array[item_idx++] = item;
		}
		java_value = (long) jni->createShortArray(*java_array, count);
		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();
		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<short> *cxx_vector = (std::vector<short> *) cxx_value;
		int count = (int) jni->getArrayLength((jarray) java_value);
		short * java_array = jni->getShortArray((jshortArray) java_value);
		for (int idx = 0 ; idx < count; idx++)
		{
			short item = (short) java_array[idx];
			cxx_vector->push_back(item);
		}
		jni->popLocalFrame();
	}
}

void convert__int_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();
		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<int> *cxx_vector = (std::vector<int> *) cxx_value;
		int count = cxx_vector->size();
		int java_array[count];
		int item_idx = 0;
		for(std::vector<int>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			int item = (int) *it;
			java_array[item_idx++] = item;
		}
		java_value = (long) jni->createIntArray(*java_array, count);
		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();
		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<int> *cxx_vector = (std::vector<int> *) cxx_value;
		int count = (int) jni->getArrayLength((jarray) java_value);
		int * java_array = jni->getIntArray((jintArray) java_value);
		for (int idx = 0 ; idx < count; idx++)
		{
			int item = (int) java_array[idx];
			cxx_vector->push_back(item);
		}
		jni->popLocalFrame();
	}
}

void convert__long_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();
		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<long> *cxx_vector = (std::vector<long> *) cxx_value;
		int count = cxx_vector->size();
		long java_array[count];
		int item_idx = 0;
		for(std::vector<long>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long item = (long) *it;
			java_array[item_idx++] = item;
		}
		java_value = (long) jni->createLongArray(*java_array, count);
		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();
		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<long> *cxx_vector = (std::vector<long> *) cxx_value;
		int count = (int) jni->getArrayLength((jarray) java_value);
		long * java_array = jni->getLongArray((jlongArray) java_value);
		for (int idx = 0 ; idx < count; idx++)
		{
			long item = (long) java_array[idx];
			cxx_vector->push_back(item);
		}
		jni->popLocalFrame();
	}
}

void convert__float_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();
		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<float> *cxx_vector = (std::vector<float> *) cxx_value;
		int count = cxx_vector->size();
		float java_array[count];
		int item_idx = 0;
		for(std::vector<float>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			float item = (float) *it;
			java_array[item_idx++] = item;
		}
		java_value = (long) jni->createFloatArray(*java_array, count);
		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();
		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<float> *cxx_vector = (std::vector<float> *) cxx_value;
		int count = (int) jni->getArrayLength((jarray) java_value);
		float * java_array = jni->getFloatArray((jfloatArray) java_value);
		for (int idx = 0 ; idx < count; idx++)
		{
			float item = (float) java_array[idx];
			cxx_vector->push_back(item);
		}
		jni->popLocalFrame();
	}
}

void convert__double_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();
		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<double> *cxx_vector = (std::vector<double> *) cxx_value;
		int count = cxx_vector->size();
		double java_array[count];
		int item_idx = 0;
		for(std::vector<double>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			double item = (double) *it;
			java_array[item_idx++] = item;
		}
		java_value = (long) jni->createDoubleArray(*java_array, count);
		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();
		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<double> *cxx_vector = (std::vector<double> *) cxx_value;
		int count = (int) jni->getArrayLength((jarray) java_value);
		double * java_array = jni->getDoubleArray((jdoubleArray) java_value);
		for (int idx = 0 ; idx < count; idx++)
		{
			double item = (double) java_array[idx];
			cxx_vector->push_back(item);
		}
		jni->popLocalFrame();
	}
}

void convert__boolean_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();
		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<bool> *cxx_vector = (std::vector<bool> *) cxx_value;
		int count = cxx_vector->size();
		bool java_array[count];
		int item_idx = 0;
		for(std::vector<bool>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			bool item = (bool) *it;
			java_array[item_idx++] = item;
		}
		java_value = (long) jni->createBooleanArray(*java_array, count);
		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();
		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<bool> *cxx_vector = (std::vector<bool> *) cxx_value;
		int count = (int) jni->getArrayLength((jarray) java_value);
		bool * java_array = jni->getBooleanArray((jbooleanArray) java_value);
		for (int idx = 0 ; idx < count; idx++)
		{
			bool item = (bool) java_array[idx];
			cxx_vector->push_back(item);
		}
		jni->popLocalFrame();
	}
}



