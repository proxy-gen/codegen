/*
 * Header (Abstract Protocol Callback Class Implementation)
 * Author: cxx-bindings-generator
 */


#include "FBGraphLocationConformerCxx.hpp"
#include "FBGraphLocationConformer.h"

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
