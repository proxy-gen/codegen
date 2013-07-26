//
//  ViewController.m
//  TestFacebookCXX
//
//  Created by Wesley Souza on 7/25/13.
//  Copyright (c) 2013 Zynga. All rights reserved.
//

#import "ViewController.h"
#include "FBSessionCxx.hpp"
#include "FBRequestCxx.hpp"
#include "FacebookCXXConverter.hpp"

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


- (IBAction)login:(id)sender {
    std::vector<void *> empty;
    signed char allowLoginUI = true;
    FacebookCXX::FBSessionCxx::openActiveSessionWithReadPermissions_allowLoginUI_completionHandler(empty, allowLoginUI, &sessionStateChanged);
}



@end
