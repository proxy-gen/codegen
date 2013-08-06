/*
 * Header (Protocol Interface)
 * Author: cxx-bindings-generator
 */


#ifndef _FBLoginViewDelegateConformer
#define _FBLoginViewDelegateConformer

#include <FacebookSDK/FBLoginView.h>
#include <FacebookCXX/conformers/FBLoginViewDelegateConformerCxx.hpp>

@interface FBLoginViewDelegateConformer : NSObject <FBLoginViewDelegate> 

@property(readonly, nonatomic) FacebookCXX::FBLoginViewDelegateConformerCxx * proxy;

+ (FBLoginViewDelegateConformer *)conformerWithProxy:(FacebookCXX::FBLoginViewDelegateConformerCxx *)proxy;

@end

#endif //_FBLoginViewDelegateConformer
