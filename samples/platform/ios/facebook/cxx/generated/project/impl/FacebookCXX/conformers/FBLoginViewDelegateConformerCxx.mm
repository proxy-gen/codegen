/*
 * Header (Abstract Protocol Callback Class Implementation)
 * Author: cxx-bindings-generator
 */


#include <FacebookCXX/conformers/FBLoginViewDelegateConformerCxx.hpp>
#include <FacebookCXX/conformers/protocols/FBLoginViewDelegateConformer.h>

FacebookCXX::FBLoginViewDelegateConformerCxx::FBLoginViewDelegateConformerCxx(){
	_proxy = (__bridge_retained void *)[FBLoginViewDelegateConformer conformerWithProxy:this];
}

FacebookCXX::FBLoginViewDelegateConformerCxx::~FBLoginViewDelegateConformerCxx(){
	FBLoginViewDelegateConformer * _no_op = (__bridge_transfer FBLoginViewDelegateConformer *)_proxy;
	#pragma unused (_no_op)
}

void * FacebookCXX::FBLoginViewDelegateConformerCxx::getProxy() const{
	return _proxy;
}
