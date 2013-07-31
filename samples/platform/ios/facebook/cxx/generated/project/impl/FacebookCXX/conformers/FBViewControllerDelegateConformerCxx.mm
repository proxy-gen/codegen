/*
 * Header (Abstract Protocol Callback Class Implementation)
 * Author: cxx-bindings-generator
 */


#include <FacebookCXX/conformers/FBViewControllerDelegateConformerCxx.hpp>
#include <FacebookCXX/conformers/protocols/FBViewControllerDelegateConformer.h>

FacebookCXX::FBViewControllerDelegateConformerCxx::FBViewControllerDelegateConformerCxx(){
	_proxy = (__bridge_retained void *)[FBViewControllerDelegateConformer conformerWithProxy:this];
}

FacebookCXX::FBViewControllerDelegateConformerCxx::~FBViewControllerDelegateConformerCxx(){
	FBViewControllerDelegateConformer * _no_op = (__bridge_transfer FBViewControllerDelegateConformer *)_proxy;
	#pragma unused (_no_op)
}

void * FacebookCXX::FBViewControllerDelegateConformerCxx::getProxy() const{
	return _proxy;
}
