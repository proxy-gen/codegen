//
//  FBWebDialogDelegateImpl.h
//  TestFacebookCXX
//
//  Created by Wesley Souza on 8/5/13.
//  Copyright (c) 2013 Zynga. All rights reserved.
//

#ifndef __TestFacebookCXX__FBWebDialogDelegateImpl__
#define __TestFacebookCXX__FBWebDialogDelegateImpl__

#include <FacebookCXX/conformers/FBWebDialogsDelegateConformerCxx.hpp>

namespace FacebookCXX {

    class FBWebDialogDelegateImpl : public FBWebDialogsDelegateConformerCxx {
public:
    
    void webDialogsWillPresentDialog_parameters_session(std::string&,void *&,FacebookCXX::FBSessionCxx *);
    
    signed char webDialogsDialog_parameters_session_shouldAutoHandleURL(std::string&,std::map<void *, void *>&,FacebookCXX::FBSessionCxx *,std::string&);
};

}

#endif /* defined(__TestFacebookCXX__FBWebDialogDelegateImpl__) */
