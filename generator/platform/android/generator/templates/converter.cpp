##  Copyright 2013 Zynga Inc.
##
##  Licensed under the Apache License, Version 2.0 (the "License");
##  you may not use this file except in compliance with the License.
##  You may obtain a copy of the License at
##
##      http://www.apache.org/licenses/LICENSE-2.0
##
##  Unless required by applicable law or agreed to in writing, software
##  distributed under the License is distributed on an "AS IS" BASIS,
##  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
##  See the License for the specific language governing permissions and
##  limitations under the License.
##
/*
 * Implementation (Proxy Converter CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//

#set $config_module = $CONFIG.config_module
#set $config_data = $config_module.config_data
#set $namespace = $config_data['namespace']
#set $package = $config_data['package']

#set $classes = $config_module.list_classes(tags=None,xtags=['_static'],name=None)	

\#include <${package}Converter.hpp>

\#define LOG_TAG "${package}Converter"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

// Proxy Converter Types
#for $class_config in $classes
#set $class_classinfo = $class_config['deriveddata']['targetdata']['classinfo']
#set $class_jnidata = $class_config['deriveddata']['jnidata']
#set $entity_class_name = $class_classinfo['typename']
void convert_${entity_class_name}(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		#if '_enum' in $class_config['tags']
		#set $class_jni_name = $class_jnidata['jnisignature']
		#set $enum_configs = $class_config['fields']
		const char * enum_string = 0;
		do
		{
			#for $enum_config in $enum_configs
			if (${class_classinfo['namespace']}::${enum_config['name']} == cxx_value)
			{
				enum_string = "$enum_config['name']";
				break;
			}
			#end for
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("${class_jni_name}"), enum_string);
		#else
		java_value = (long) ctx->findProxyComponent(cxx_value);
		#end if
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		#if '_enum' in $class_config['tags']
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		#set $enum_configs = $class_config['fields']
		do
		{
			#for $enum_config in $enum_configs
				if (strcmp("${enum_config['name']}", enum_string) == 0)
				{
					cxx_value = ${class_classinfo['namespace']}::${enum_config['name']};
					break;
				}
			#end for
		} 
		while (0);		
		#else
		Proxy proxy;
		proxy.address = (long) java_value;
		${entity_class_name} *cxx_object = new ${entity_class_name}(proxy);
		cxx_value = (long) cxx_object;
		#end if
	}
}
#end for

// Array Converter Types
#for $class_config in $classes
#set $class_classinfo = $class_config['deriveddata']['targetdata']['classinfo']
#set $entity_class_name = $class_classinfo['typename']
#set $entity_namespace_name = $class_classinfo['namespace']
#set $entity_qualified_name = $entity_namespace_name + '::' + $entity_class_name
void convert_${entity_class_name}_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<${entity_qualified_name}> *cxx_vector = (std::vector<${entity_qualified_name}> *) cxx_value;
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

		for(std::vector<${entity_qualified_name}>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
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
		std::vector<${entity_qualified_name}> *cxx_vector = (std::vector<${entity_qualified_name}> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((${entity_qualified_name} *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
#end for 

// Array Of Array Converter Types
#for $class_config in $classes
#set $class_classinfo = $class_config['deriveddata']['targetdata']['classinfo']
#set $entity_class_name = $class_classinfo['typename']
#set $entity_namespace_name = $class_classinfo['namespace']
#set $entity_qualified_name = $entity_namespace_name + '::' + $entity_class_name
void convert_${entity_class_name}_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<std::vector<${entity_qualified_name}> > *cxx_vector = (std::vector<std::vector<${entity_qualified_name}> > *) cxx_value;
		int count = cxx_vector->size();

		CXXTypeHierarchy item_type;
		std::string child_type("[Ljava.lang.Object;");
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> item_types = item_type.child_types;
		if (item_types.size() > 0)
		{
			item_type = item_types.at(0);
			item_types = item_type.child_types;
			if (item_types.size() > 0)
			{
				item_type = item_types.at(0);
				child_type = std::string("[L") + item_type.type_name + std::string(";");
				child_type = jni->getJNIName( child_type );	
			}			
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<std::vector<${entity_qualified_name}> >::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
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

		CXXTypeHierarchy item_type;
		std::string child_type("[Ljava.lang.Object;");
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> item_types = item_type.child_types;
		if (item_types.size() > 0)
		{
			item_type = item_types.at(0);
			item_types = item_type.child_types;
			if (item_types.size() > 0)
			{
				item_type = item_types.at(0);
				child_type = std::string("[L") + item_type.type_name + std::string(";");
				child_type = jni->getJNIName( child_type );	
			}			
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<std::vector<${entity_qualified_name}> > *cxx_vector = (std::vector<std::vector<${entity_qualified_name}> > *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((std::vector<${entity_qualified_name}> *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
#end for  

