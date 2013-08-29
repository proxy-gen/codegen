/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//













// Generated Code 

#ifndef _android_database_DataSetObserver
#define _android_database_DataSetObserver
//
// Scroll Down 
//



#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class android_database_DataSetObserver 
{
public:

	android_database_DataSetObserver(const android_database_DataSetObserver& cc);
	android_database_DataSetObserver(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_database_DataSetObserver();
	// Functions
	virtual void  onChanged() ;
	virtual void  onInvalidated() ;

protected:
	android_database_DataSetObserver();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_database_DataSetObserver