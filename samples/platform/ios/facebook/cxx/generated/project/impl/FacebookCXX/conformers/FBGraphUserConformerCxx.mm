/*
 * Header (Abstract Protocol Callback Class Implementation)
 * Author: cxx-bindings-generator
 */


#include <FacebookCXX/conformers/FBGraphUserConformerCxx.hpp>
#include <FacebookCXX/conformers/protocols/FBGraphUserConformer.h>

FacebookCXX::FBGraphUserConformerCxx::FBGraphUserConformerCxx(){
	_proxy = (__bridge_retained void *)[FBGraphUserConformer conformerWithProxy:this];
}

FacebookCXX::FBGraphUserConformerCxx::~FBGraphUserConformerCxx(){
	FBGraphUserConformer * _no_op = (__bridge_transfer FBGraphUserConformer *)_proxy;
	#pragma unused (_no_op)
}

void * FacebookCXX::FBGraphUserConformerCxx::getProxy() const{
	return _proxy;
}
