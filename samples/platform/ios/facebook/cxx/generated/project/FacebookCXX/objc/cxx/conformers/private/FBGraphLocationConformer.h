/*
 * Header (Protocol Interface)
 * Author: cxx-bindings-generator
 */


#ifndef _FBGraphLocationConformer
#define _FBGraphLocationConformer

#include <FacebookSDK/FBGraphLocation.h>
#include "FBGraphLocationConformerCxx.hpp"

@interface FBGraphLocationConformer : NSObject <FBGraphLocation> 

@property(readonly, nonatomic) FacebookCXX::FBGraphLocationConformerCxx * proxy;

+ (FBGraphLocationConformer *)conformerWithProxy:(FacebookCXX::FBGraphLocationConformerCxx *)proxy;

@end

#endif //_FBGraphLocationConformer
