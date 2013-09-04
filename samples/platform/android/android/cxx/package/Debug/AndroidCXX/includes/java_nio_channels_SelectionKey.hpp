/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
	
	
	
	




















// Generated Code 

#ifndef _java_nio_channels_SelectionKey
#define _java_nio_channels_SelectionKey
//
// Scroll Down 
//



#include <java_lang_Object.hpp>

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


class java_nio_channels_SelectableChannel;


class java_nio_channels_Selector;

class java_nio_channels_SelectionKey : public AndroidCXX::java_lang_Object
{
public:

	java_nio_channels_SelectionKey(const java_nio_channels_SelectionKey& cc);
	java_nio_channels_SelectionKey(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_nio_channels_SelectionKey();
	// Functions
	virtual AndroidCXX::java_lang_Object * attach(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_Object * attachment() ;
	virtual void  cancel() ;
	virtual AndroidCXX::java_nio_channels_SelectableChannel * channel() ;
	virtual AndroidCXX::java_nio_channels_SelectionKey * interestOps(int const& arg0) ;
	virtual int  interestOps() ;
	virtual bool  isAcceptable() ;
	virtual bool  isConnectable() ;
	virtual bool  isReadable() ;
	virtual bool  isValid() ;
	virtual bool  isWritable() ;
	virtual int  readyOps() ;
	virtual AndroidCXX::java_nio_channels_Selector * selector() ;

protected:
	java_nio_channels_SelectionKey();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_channels_SelectionKey