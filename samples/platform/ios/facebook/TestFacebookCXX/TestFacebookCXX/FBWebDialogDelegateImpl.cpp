//
//  FBWebDialogDelegateImpl.cpp
//  TestFacebookCXX
//
//  Created by Wesley Souza on 8/5/13.
/**
 *  Copyright 2013 Zynga Inc.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

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

