/*
 * Header (Abstract Protocol Callback Class Implementation)
 * Author: cxx-bindings-generator
 */


#include <FacebookCXX/conformers/FBWebDialogsDelegateConformerCxx.hpp>
#include <FacebookCXX/conformers/protocols/FBWebDialogsDelegateConformer.h>

FacebookCXX::FBWebDialogsDelegateConformerCxx::FBWebDialogsDelegateConformerCxx(){
	_proxy = (__bridge_retained void *)[FBWebDialogsDelegateConformer conformerWithProxy:this];
}

FacebookCXX::FBWebDialogsDelegateConformerCxx::~FBWebDialogsDelegateConformerCxx(){
	FBWebDialogsDelegateConformer * _no_op = (__bridge_transfer FBWebDialogsDelegateConformer *)_proxy;
	#pragma unused (_no_op)
}

void * FacebookCXX::FBWebDialogsDelegateConformerCxx::getProxy() const{
	return _proxy;
}
