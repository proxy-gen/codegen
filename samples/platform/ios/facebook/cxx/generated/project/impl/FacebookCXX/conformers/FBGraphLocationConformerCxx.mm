/*
 * Header (Abstract Protocol Callback Class Implementation)
 * Author: cxx-bindings-generator
 */


#include <FacebookCXX/conformers/FBGraphLocationConformerCxx.hpp>
#include <FacebookCXX/conformers/protocols/FBGraphLocationConformer.h>

FacebookCXX::FBGraphLocationConformerCxx::FBGraphLocationConformerCxx(){
	_proxy = (__bridge_retained void *)[FBGraphLocationConformer conformerWithProxy:this];
}

FacebookCXX::FBGraphLocationConformerCxx::~FBGraphLocationConformerCxx(){
	FBGraphLocationConformer * _no_op = (__bridge_transfer FBGraphLocationConformer *)_proxy;
	#pragma unused (_no_op)
}

void * FacebookCXX::FBGraphLocationConformerCxx::getProxy() const{
	return _proxy;
}
