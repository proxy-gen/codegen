/*
 * Header (Protocol Interface)
 * Author: cxx-bindings-generator
 */


#ifndef _FBWebDialogsDelegateConformer
#define _FBWebDialogsDelegateConformer

#include <FacebookSDK/FBWebDialogs.h>
#include <FacebookCXX/conformers/FBWebDialogsDelegateConformerCxx.hpp>

@interface FBWebDialogsDelegateConformer : NSObject <FBWebDialogsDelegate> 

@property(readonly, nonatomic) FacebookCXX::FBWebDialogsDelegateConformerCxx * proxy;

+ (FBWebDialogsDelegateConformer *)conformerWithProxy:(FacebookCXX::FBWebDialogsDelegateConformerCxx *)proxy;

@end

#endif //_FBWebDialogsDelegateConformer
