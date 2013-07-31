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
#include <iostream>

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

- (IBAction)logout:(id)sender {
    FacebookCXX::FBSessionCxx *session = FacebookCXX::FBSessionCxx::activeSession();
    session->closeAndClearTokenInformation();
    delete session;
}

@end
