/**
 * Copyright 2010-present Facebook.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package com.facebook.samples.sessionlogin;

import com.zynga.sdk.cxx.CXXContext;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button; 

public class SessionLoginSampleActivity extends Activity {

    private Button buttonLoginActivity;
    private Button buttonGetUserAttrActivity;
    private Button buttonGetFriendsActivity;
    private Button buttonPublishStory;
    private Button buttonRunFQLActivity;
    private Button buttonLogoutActivity;

    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        CXXContext.createCXXContext(this);
        
        setContentView(R.layout.main);
        
        nativeSetup(this, savedInstanceState);
        
        buttonLoginActivity = (Button) findViewById(R.id.buttonLoginActivity);
        buttonLoginActivity.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
            	nativeLogin(SessionLoginSampleActivity.this);
            }
        });
        buttonGetUserAttrActivity = (Button) findViewById(R.id.buttonGetUserAttrActivity);
        buttonGetUserAttrActivity.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                nativeGetUserAttr(SessionLoginSampleActivity.this);
            }
        });
        buttonGetFriendsActivity = (Button) findViewById(R.id.buttonGetFriendsActivity);
        buttonGetFriendsActivity.setOnClickListener(new View.OnClickListener() {
        	public void onClick(View v) {
        		nativeGetFriends(SessionLoginSampleActivity.this);
        	}
        });
        buttonPublishStory = (Button) findViewById(R.id.buttonPublishStoryActivity);
        buttonPublishStory.setOnClickListener(new View.OnClickListener() {
        	public void onClick(View v) {
        		nativePublishStory(SessionLoginSampleActivity.this);
        	}
        });
        buttonRunFQLActivity = (Button) findViewById(R.id.buttonRunFQLActivity);
        buttonRunFQLActivity.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                nativeRunFQLQuery(SessionLoginSampleActivity.this);
            }
        });
        buttonLogoutActivity = (Button) findViewById(R.id.buttonLogoutActivity);
        buttonLogoutActivity.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                nativeLogout(SessionLoginSampleActivity.this);
            }
        });
    }
    
    @Override
    public void onActivityResult(int requestCode, int resultCode, Intent data) {
        super.onActivityResult(requestCode, resultCode, data);
        nativeOnActivityResult(requestCode, resultCode, data);
    }
    
    private native void nativeSetup(Activity activity, Bundle savedInstanceState);
    private native void nativeLogin(Activity activity);
    private native void nativeLogout(Activity activity);
    private native void nativeGetUserAttr(Activity activity);
    private native void nativeGetFriends(Activity activity);
    private native void nativePublishStory(Activity activity);
    private native void nativeRunFQLQuery(Activity activity);
    private native void nativeOnActivityResult(int requestCode, int resultCode, Intent data);
    
    static {
        System.loadLibrary("SessionLoginSampleCXX");
    }
}

