/*
 * Header (Protocol Interface)
 * Author: cxx-bindings-generator
 */


#ifndef _FBViewControllerDelegateConformer
#define _FBViewControllerDelegateConformer

#include <FacebookSDK/FBViewController.h>
#include <FacebookCXX/conformers/FBViewControllerDelegateConformerCxx.hpp>

@interface FBViewControllerDelegateConformer : NSObject <FBViewControllerDelegate> 

@property(readonly, nonatomic) FacebookCXX::FBViewControllerDelegateConformerCxx * proxy;

+ (FBViewControllerDelegateConformer *)conformerWithProxy:(FacebookCXX::FBViewControllerDelegateConformerCxx *)proxy;

@end

#endif //_FBViewControllerDelegateConformer
