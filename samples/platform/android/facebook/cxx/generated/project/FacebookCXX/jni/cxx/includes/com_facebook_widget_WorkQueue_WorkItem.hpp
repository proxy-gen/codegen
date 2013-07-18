/*
 * Header (CXX)
 * Author: cxx-bindings-generator
 */

#ifndef _com_facebook_widget_WorkQueue_WorkItem
#define _com_facebook_widget_WorkQueue_WorkItem

//includes go here

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

class com_facebook_widget_WorkQueue_WorkItem
{
public:

	bool cancel();
	bool isRunning();
	void moveToFront();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_WorkQueue_WorkItem