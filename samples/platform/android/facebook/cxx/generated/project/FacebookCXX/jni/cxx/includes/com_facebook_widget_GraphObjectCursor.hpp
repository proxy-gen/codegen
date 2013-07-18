/*
 * Header (CXX)
 * Author: cxx-bindings-generator
 */

#ifndef _com_facebook_widget_GraphObjectCursor
#define _com_facebook_widget_GraphObjectCursor

//includes go here

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

class com_facebook_widget_GraphObjectCursor
{
public:

	void close();
	bool isFirst();
	bool isClosed();
	int getPosition();
	bool isFromCache();
	
    "//TODO: add CONVERTER for com.facebook.model.GraphObject"
	bool moveToFirst();
	int getCount();
	bool areMoreObjectsAvailable();
	bool moveToNext();
	bool move(int& arg0);
	bool moveToPosition(int& arg0);
	bool moveToLast();
	bool moveToPrevious();
	bool isLast();
	bool isBeforeFirst();
	bool isAfterLast();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_GraphObjectCursor