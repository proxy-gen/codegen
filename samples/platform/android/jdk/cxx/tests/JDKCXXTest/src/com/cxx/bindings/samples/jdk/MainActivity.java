package com.cxx.bindings.samples.jdk;

import com.zynga.sdk.cxx.CXXContext;

import android.os.Bundle;
import android.os.HandlerThread;
import android.app.Activity;
import android.util.Log;
import android.view.Menu;

public class MainActivity extends Activity {
	
	private static final String LOG_TAG = "MainActivity";
	
	static {
        loadTestLibrary();
    }
	
	HandlerThread _handlerThread = new HandlerThread("ZyngaCXXTestAppThread") {

        @Override
        public void run() {
            Log.i(LOG_TAG, "ZyngaCXXTestAppThread running");
            testJDKCXX();
        }
    };

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        
        CXXContext.createCXXContext(this);
        _handlerThread.start();
    }


    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.main, menu);
        return true;
    }
    
    private static void loadTestLibrary() {
        System.loadLibrary("JDKCXXTest");
    }
    
    protected void testJDKCXX() {
    	testJDKCXXFull();    	
    }
    
    public native void testJDKCXXFull();
    
}
