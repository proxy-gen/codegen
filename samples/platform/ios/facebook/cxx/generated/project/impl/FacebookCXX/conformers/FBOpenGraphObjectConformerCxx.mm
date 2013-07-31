/*
 * Header (Abstract Protocol Callback Class Implementation)
 * Author: cxx-bindings-generator
 */


#include <FacebookCXX/conformers/FBOpenGraphObjectConformerCxx.hpp>
#include <FacebookCXX/conformers/protocols/FBOpenGraphObjectConformer.h>

FacebookCXX::FBOpenGraphObjectConformerCxx::FBOpenGraphObjectConformerCxx(){
	_proxy = (__bridge_retained void *)[FBOpenGraphObjectConformer conformerWithProxy:this];
}

FacebookCXX::FBOpenGraphObjectConformerCxx::~FBOpenGraphObjectConformerCxx(){
	FBOpenGraphObjectConformer * _no_op = (__bridge_transfer FBOpenGraphObjectConformer *)_proxy;
	#pragma unused (_no_op)
}

void * FacebookCXX::FBOpenGraphObjectConformerCxx::getProxy() const{
	return _proxy;
}
