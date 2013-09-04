/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 	
	
 	
 		 
 		 
 		 
	
	
 		 
 	
 		 
 		 
 		 
 	
 		 
 		 
	
	


 		 
 		 
 	
 		 



















// Generated Code 

#ifndef _com_facebook_model_GraphObject_Factory_GraphObjectListImpl
#define _com_facebook_model_GraphObject_Factory_GraphObjectListImpl
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_lang_Class.hpp>

#include <com_facebook_model_GraphObjectList.hpp>

#include <com_facebook_model_GraphObject.hpp>

#include <org_json_JSONArray.hpp>

#include <java_util_Collection.hpp>

#include <java_lang_String.hpp>


#include <java_util_AbstractList.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations




class com_facebook_model_GraphObject;




class com_facebook_model_GraphObject_Factory_GraphObjectListImpl : public AndroidCXX::java_util_AbstractList,public FacebookCXX::com_facebook_model_GraphObjectList
{
public:

	// Public Constructor
	com_facebook_model_GraphObject_Factory_GraphObjectListImpl(AndroidCXX::org_json_JSONArray const& arg0,AndroidCXX::java_lang_Class const& arg1,Proxy * aProxy = new Proxy());
	com_facebook_model_GraphObject_Factory_GraphObjectListImpl(const com_facebook_model_GraphObject_Factory_GraphObjectListImpl& cc);
	com_facebook_model_GraphObject_Factory_GraphObjectListImpl(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_model_GraphObject_Factory_GraphObjectListImpl();
	// Functions
	virtual void  add(int const& arg0,AndroidCXX::java_lang_Object const& arg1) ;
	virtual FacebookCXX::com_facebook_model_GraphObjectList * castToListOf(AndroidCXX::java_lang_Class const& arg0) ;
	virtual void  clear() ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::org_json_JSONArray * getInnerJSONArray() ;
	virtual AndroidCXX::java_lang_Object * get(int const& arg0) ;
	virtual int  hashCode() ;
	virtual bool  removeAll(AndroidCXX::java_util_Collection const& arg0) ;
	virtual bool  remove(AndroidCXX::java_lang_Object const& arg0) ;
	virtual bool  retainAll(AndroidCXX::java_util_Collection const& arg0) ;
	virtual AndroidCXX::java_lang_Object * set(int const& arg0,AndroidCXX::java_lang_Object const& arg1) ;
	virtual int  size() ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_model_GraphObject_Factory_GraphObjectListImpl