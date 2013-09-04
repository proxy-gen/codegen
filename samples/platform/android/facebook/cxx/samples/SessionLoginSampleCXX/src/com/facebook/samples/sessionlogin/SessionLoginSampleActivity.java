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

import com.facebook.Session;
import com.zynga.sdk.cxx.CXXContext;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button; 

public class SessionLoginSampleActivity extends Activity {

    private Button buttonLoginActivity;
    private Button buttonGetFriendsActivity;
    private Button buttonPublishStory;
    private Button buttonLogoutActivity;

    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        CXXContext.createCXXContext(this);
        setContentView(R.layout.main);

        buttonLoginActivity = (Button) findViewById(R.id.buttonLoginActivity);
        buttonLoginActivity.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
            	nativeLogin(SessionLoginSampleActivity.this);
            }
        });
        buttonGetFriendsActivity = (Button) findViewById(R.id.buttonGetFriendsActivity);
        buttonGetFriendsActivity.setOnClickListener(new View.OnClickListener() {
        	public void onClick(View v) {
        		nativeGetFriends(SessionLoginSampleActivity.this);
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
        Session.getActiveSession().onActivityResult(this, requestCode, resultCode, data);
    }
    
    private native void nativeLogin(Activity activity);
    private native void nativeLogout(Activity activity);
    private native void nativeGetFriends(Activity activity);
    
    static {
        System.loadLibrary("SessionLoginSampleCXX");
    }
}

