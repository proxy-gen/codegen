/*
 * Header (Abstract Protocol Callback Class Implementation)
 * Author: cxx-bindings-generator
 */


#include "FBGraphObjectConformerCxx.hpp"
#include "FBGraphObjectConformer.h"

FacebookCXX::FBGraphObjectConformerCxx::FBGraphObjectConformerCxx(){
	_proxy = (__bridge_retained void *)[FBGraphObjectConformer conformerWithProxy:this];
}

FacebookCXX::FBGraphObjectConformerCxx::~FBGraphObjectConformerCxx(){
	FBGraphObjectConformer * _no_op = (__bridge_transfer FBGraphObjectConformer *)_proxy;
	#pragma unused (_no_op)
}

void * FacebookCXX::FBGraphObjectConformerCxx::getProxy() const{
	return _proxy;
}
