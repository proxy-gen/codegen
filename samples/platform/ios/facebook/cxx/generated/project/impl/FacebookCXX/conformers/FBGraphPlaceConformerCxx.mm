/*
 * Header (Abstract Protocol Callback Class Implementation)
 * Author: cxx-bindings-generator
 */


#include <FacebookCXX/conformers/FBGraphPlaceConformerCxx.hpp>
#include <FacebookCXX/conformers/protocols/FBGraphPlaceConformer.h>

FacebookCXX::FBGraphPlaceConformerCxx::FBGraphPlaceConformerCxx(){
	_proxy = (__bridge_retained void *)[FBGraphPlaceConformer conformerWithProxy:this];
}

FacebookCXX::FBGraphPlaceConformerCxx::~FBGraphPlaceConformerCxx(){
	FBGraphPlaceConformer * _no_op = (__bridge_transfer FBGraphPlaceConformer *)_proxy;
	#pragma unused (_no_op)
}

void * FacebookCXX::FBGraphPlaceConformerCxx::getProxy() const{
	return _proxy;
}
