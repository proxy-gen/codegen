/*
 * Header (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//





#ifndef _android_widget_SectionIndexer
#define _android_widget_SectionIndexer





#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_widget_SectionIndexer
{
public:
	std::vector<long> getSections();
	int getPositionForSection(int& arg0);
	int getSectionForPosition(int& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_SectionIndexer