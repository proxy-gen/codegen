/*
 * Header (CXX)
 * Author: cxx-bindings-generator
 */

#ifndef _com_facebook_model_GraphLocation
#define _com_facebook_model_GraphLocation

//includes go here

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

class com_facebook_model_GraphLocation
{
public:

	
    "//TODO: add CONVERTER for java.lang.String"
	void setState(java_lang_String& arg0);
	
    "//TODO: add CONVERTER for java.lang.String"
	double getLatitude();
	double getLongitude();
	void setLatitude(double& arg0);
	void setLongitude(double& arg0);
	
    "//TODO: add CONVERTER for java.lang.String"
	void setStreet(java_lang_String& arg0);
	
    "//TODO: add CONVERTER for java.lang.String"
	void setCity(java_lang_String& arg0);
	void setCountry(java_lang_String& arg0);
	
    "//TODO: add CONVERTER for java.lang.String"
	void setZip(java_lang_String& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_model_GraphLocation