/*
 * Header (Protocol Interface)
 * Author: cxx-bindings-generator
 */


#ifndef _FBGraphObjectConformer
#define _FBGraphObjectConformer

#include <FacebookSDK/FBGraphObject.h>
#include <FacebookCXX/conformers/FBGraphObjectConformerCxx.hpp>

@interface FBGraphObjectConformer : NSObject <FBGraphObject> 

@property(readonly, nonatomic) FacebookCXX::FBGraphObjectConformerCxx * proxy;

+ (FBGraphObjectConformer *)conformerWithProxy:(FacebookCXX::FBGraphObjectConformerCxx *)proxy;

@end

#endif //_FBGraphObjectConformer
