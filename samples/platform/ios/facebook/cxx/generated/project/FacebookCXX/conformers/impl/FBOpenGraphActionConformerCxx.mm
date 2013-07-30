/*
 * Header (Abstract Protocol Callback Class Implementation)
 * Author: cxx-bindings-generator
 */


#include "FBOpenGraphActionConformerCxx.hpp"
#include "FBOpenGraphActionConformer.h"

FacebookCXX::FBOpenGraphActionConformerCxx::FBOpenGraphActionConformerCxx(){
	_proxy = (__bridge_retained void *)[FBOpenGraphActionConformer conformerWithProxy:this];
}

FacebookCXX::FBOpenGraphActionConformerCxx::~FBOpenGraphActionConformerCxx(){
	FBOpenGraphActionConformer * _no_op = (__bridge_transfer FBOpenGraphActionConformer *)_proxy;
	#pragma unused (_no_op)
}

void * FacebookCXX::FBOpenGraphActionConformerCxx::getProxy() const{
	return _proxy;
}
