/*
 * FacebookCXX.hpp
 *
 * Author: cxx-bindings-generator
 */


#ifndef FACEBOOKCXX_HPP_
#define FACEBOOKCXX_HPP_



#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace ZDK {
class FacebookSession
{

public:
	FacebookSession();
	FacebookSession(const FacebookSession& cc);
	FacebookSession(void * proxy);
	virtual ~FacebookSession();

 	
 	 bool isOpened();
protected:

private:
void * self;

};
}

#ifdef __cplusplus
}
#endif //__cplusplus

#endif /* FACEBOOKCXX_HPP_ */