//
//  FBWebDialogDelegateImpl.cpp
//  TestFacebookCXX
//
//  Created by Wesley Souza on 8/5/13.
//  Copyright (c) 2013 Zynga. All rights reserved.
//

#include "FBWebDialogDelegateImpl.h"
#include <iostream>

void FacebookCXX::FBWebDialogDelegateImpl::webDialogsWillPresentDialog_parameters_session(std::string & dialog, void *&parameters, FacebookCXX::FBSessionCxx *session){
    
    std::cout << "FBWebDialogDelegateImpl is being used." << std::endl;
    delete session;
}

signed char FacebookCXX::FBWebDialogDelegateImpl::webDialogsDialog_parameters_session_shouldAutoHandleURL(std::string &dialog, std::map<void *, void *> &parameters, FacebookCXX::FBSessionCxx *session, std::string &url){
    //We'll handle the URL by printing it
    std::cout << "User clicked the following link: " << std::endl;
    std::cout << url << std::endl;
    
    return 0;
}

