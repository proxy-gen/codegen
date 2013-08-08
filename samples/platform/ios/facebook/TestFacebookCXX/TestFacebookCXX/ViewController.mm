//
//  ViewController.m
//  TestFacebookCXX
//
//  Created by Wesley Souza on 7/25/13.
//  Copyright (c) 2013 Zynga. All rights reserved.
//

#import "ViewController.h"
#include <FacebookCXX/proxies/FBSessionCxx.hpp>
#include <FacebookCXX/proxies/FBRequestCxx.hpp>
#include <FacebookCXX/converters/FacebookCXXConverter.hpp>
#include <FacebookCXX/conformers/FBWebDialogsDelegateConformerCxx.hpp>
#include <iostream>
#include "FBWebDialogDelegateImpl.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
/**
 * CXX Code
 *
 */
 

void  sessionStateChanged(FacebookCXX::FBSessionCxx *session,
                           FacebookCXX::FBSessionStateCxx &state,
                           std::string &error)
{
    switch (state) {
        case FacebookCXX::FBSessionStateOpen:
            std::cout << "You are logged in." << std::endl;
            break;
        case FacebookCXX::FBSessionStateClosed:
            std::cout << "You are logged out." << std::endl;
            break;
        case FacebookCXX::FBSessionStateClosedLoginFailed:{
            // Once the user has logged in, we want them to
            // be looking at the root view.
            
            FacebookCXX::FBSessionCxx * session = FacebookCXX::FBSessionCxx::activeSession();
            session->closeAndClearTokenInformation();
            delete session;
        }
            break;
        default:
            break;
    }
    
    if (error.compare("") != 0) {
        UIAlertView *alertView = [[UIAlertView alloc]
                                  initWithTitle:@"Error"
                                  message:[NSString stringWithCString:error.c_str() encoding:NSUTF8StringEncoding]
                                  delegate:nil
                                  cancelButtonTitle:@"OK"
                                  otherButtonTitles:nil];
        [alertView show];
    }
}

void forMeRequestCompleted(FacebookCXX::FBRequestConnectionCxx *requsetConnection, void* &user, std::string &error){
    if (error.compare("") == 0){
        FBGraphUserProtocolCxx *puser = new FBGraphUserProtocolCxx(user);
        std::cout << "First name: " <<  puser->first_name() << std::endl
        << "Last name: " << puser->last_name() << std::endl
        << "Profile ID: " << puser->_id() << std::endl;
        delete puser;
    }
}

void forFriendsRequestCompleted(FacebookCXX::FBRequestConnectionCxx *requsetConnection, void* &ocUserDict, std::string &error){
    if (error.compare("") == 0){
        std::map<void *, void*> userDict;
        convert_dictionary(ocUserDict, userDict, CONVERT_TO_CXX);
        
        void *ocUserArray = userDict.begin()->second;
        std::vector<void *> userArray;
        convert_array(ocUserArray, userArray, CONVERT_TO_CXX);
        
        for(std::vector<void *>::iterator iter = userArray.begin(); iter!= userArray.end(); iter++){
            FBGraphUserProtocolCxx *pFriend = new FBGraphUserProtocolCxx(*iter);
            std::cout << "First name: " <<  pFriend->first_name() << std::endl
            << "Last name: " << pFriend->last_name() << std::endl
            << "Profile ID: " << pFriend->_id() << std::endl;
            delete pFriend;
        }
    }
}

void webDialogResult(FacebookCXX::FBWebDialogResultCxx &result, std::string &url, std::string &error){
    if (error.compare("") != 0){
        std::cout << "Error publishing the story." << std::endl;
    }
    else {
        if (result == FacebookCXX::FBWebDialogResultDialogNotCompleted) {
            std::cout << "User canceled story publishing" << std::endl;
        }
        else {
            std::cout << "User shared the story." << std::endl;
        }
    }
}


- (IBAction)login:(id)sender {
    std::vector<void *> empty;
    signed char allowLoginUI = true;
    FacebookCXX::FBSessionCxx::openActiveSessionWithReadPermissions_allowLoginUI_completionHandler(empty, allowLoginUI, &sessionStateChanged);
}

- (IBAction)logName:(id)sender {
    FacebookCXX::FBSessionCxx * session = FacebookCXX::FBSessionCxx::activeSession();
    if (session->isOpen()){
        FacebookCXX::FBRequestCxx *request = FacebookCXX::FBRequestCxx::requestForMe();
        request->startWithCompletionHandler(&forMeRequestCompleted);
    }
    delete session;
}

- (IBAction)logFriends:(id)sender {
    FacebookCXX::FBSessionCxx * session = FacebookCXX::FBSessionCxx::activeSession();
    if (session->isOpen()){
        FacebookCXX::FBRequestCxx *request = FacebookCXX::FBRequestCxx::requestForMyFriends();
        request->startWithCompletionHandler(&forFriendsRequestCompleted);
        delete request;
    }
    delete session;
}

- (IBAction)webDialog:(id)sender {
    std::map<void *, void *> parameters;
    std::string name = "name";
    std::string caption = "caption";
    std::string description = "description";
    std::string link = "link";
    std::string picture = "picture";

    std::string name_value = "WebDialog Testing.";
    std::string caption_value = "Caption Value";
    std::string description_value = "Description Value https://developers.facebook.com/ios";
    std::string link_value = "https://developers.facebook.com/ios";
    std::string picture_value = "https://raw.github.com/fbsamples/ios-3.x-howtos/master/Images/iossdk_logo.png";

    void* objc_name;
    convert_string(objc_name, name, CONVERT_TO_OBJC);
    
    void* objc_caption;
    convert_string(objc_caption, caption, CONVERT_TO_OBJC);
    
    void* objc_description;
    convert_string(objc_description, description, CONVERT_TO_OBJC);
    
    void* objc_link;
    convert_string(objc_link, link, CONVERT_TO_OBJC);
    
    void* objc_picture;
    convert_string(objc_picture, picture, CONVERT_TO_OBJC);
    
    void* objc_name_value;
    convert_string(objc_name_value, name_value, CONVERT_TO_OBJC);
    
    void* objc_caption_value;
    convert_string(objc_caption_value, caption_value, CONVERT_TO_OBJC);
    
    void* objc_description_value;
    convert_string(objc_description_value, description_value, CONVERT_TO_OBJC);
    
    void* objc_link_value;
    convert_string(objc_link_value, link_value, CONVERT_TO_OBJC);
    
    void* objc_picture_value;
    convert_string(objc_picture_value, picture_value, CONVERT_TO_OBJC);
    
    parameters[objc_name] = objc_name_value;
    parameters[objc_caption] = objc_caption_value;
    parameters[objc_description] = objc_description_value;
    parameters[objc_link] = objc_link_value;
    parameters[objc_picture] = objc_picture_value;
    
    FacebookCXX::FBSessionCxx *session = FacebookCXX::FBSessionCxx::activeSession();
    FacebookCXX::FBWebDialogDelegateImpl *conformer = new FBWebDialogDelegateImpl();
    
    std::string dialog = "feed";
    
    FacebookCXX::FBWebDialogsCxx::presentDialogModallyWithSession_dialog_parameters_handler_delegate(session, dialog, parameters, &webDialogResult, conformer);
    delete session;
}

- (IBAction)logout:(id)sender {
    FacebookCXX::FBSessionCxx *session = FacebookCXX::FBSessionCxx::activeSession();
    session->closeAndClearTokenInformation();
    delete session;
}

@end
