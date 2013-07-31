/*
 * Header (Protocol Interface)
 * Author: cxx-bindings-generator
 */


#ifndef _FBGraphUserConformer
#define _FBGraphUserConformer

#include <FacebookSDK/FBGraphUser.h>
#include <FacebookCXX/conformers/FBGraphUserConformerCxx.hpp>

@interface FBGraphUserConformer : NSObject <FBGraphUser> 

@property(readonly, nonatomic) FacebookCXX::FBGraphUserConformerCxx * proxy;

+ (FBGraphUserConformer *)conformerWithProxy:(FacebookCXX::FBGraphUserConformerCxx *)proxy;

@end

#endif //_FBGraphUserConformer
