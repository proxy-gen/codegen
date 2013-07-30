/*
 * Header (Protocol Interface)
 * Author: cxx-bindings-generator
 */


#ifndef _FBOpenGraphActionConformer
#define _FBOpenGraphActionConformer

#include <FacebookSDK/FBOpenGraphAction.h>
#include "FBOpenGraphActionConformerCxx.hpp"

@interface FBOpenGraphActionConformer : NSObject <FBOpenGraphAction> 

@property(readonly, nonatomic) FacebookCXX::FBOpenGraphActionConformerCxx * proxy;

+ (FBOpenGraphActionConformer *)conformerWithProxy:(FacebookCXX::FBOpenGraphActionConformerCxx *)proxy;

@end

#endif //_FBOpenGraphActionConformer
