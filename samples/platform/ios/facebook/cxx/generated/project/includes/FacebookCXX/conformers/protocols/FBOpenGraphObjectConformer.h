/*
 * Header (Protocol Interface)
 * Author: cxx-bindings-generator
 */


#ifndef _FBOpenGraphObjectConformer
#define _FBOpenGraphObjectConformer

#include <FacebookSDK/FBOpenGraphObject.h>
#include <FacebookCXX/conformers/FBOpenGraphObjectConformerCxx.hpp>

@interface FBOpenGraphObjectConformer : NSObject <FBOpenGraphObject> 

@property(readonly, nonatomic) FacebookCXX::FBOpenGraphObjectConformerCxx * proxy;

+ (FBOpenGraphObjectConformer *)conformerWithProxy:(FacebookCXX::FBOpenGraphObjectConformerCxx *)proxy;

@end

#endif //_FBOpenGraphObjectConformer
