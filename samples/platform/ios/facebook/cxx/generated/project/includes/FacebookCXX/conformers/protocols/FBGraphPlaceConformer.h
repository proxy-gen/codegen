/*
 * Header (Protocol Interface)
 * Author: cxx-bindings-generator
 */


#ifndef _FBGraphPlaceConformer
#define _FBGraphPlaceConformer

#include <FacebookSDK/FBGraphPlace.h>
#include <FacebookCXX/conformers/FBGraphPlaceConformerCxx.hpp>

@interface FBGraphPlaceConformer : NSObject <FBGraphPlace> 

@property(readonly, nonatomic) FacebookCXX::FBGraphPlaceConformerCxx * proxy;

+ (FBGraphPlaceConformer *)conformerWithProxy:(FacebookCXX::FBGraphPlaceConformerCxx *)proxy;

@end

#endif //_FBGraphPlaceConformer
