Facebook SDK
============

A very barebones C++ version of the Facebook SDK.

Generating
----------
Setup generator (if not done already). See README.md under parent android directory for details.

Invoke `generate.py -s $ANDROID_HOME -n $NDK_HOME` from the config directory to generate the sample C++ code.

*  C++ source will be generated under generated/src
*  C++ includes will be generated under generated/includes

Building
--------
Setup generator (if not done already). See README.md under parent android directory for details.

Invoke `ant debug` from the android directory to build the libraries under android/libs.

Running
-------

A simple test project using the API is included. 

Currently it does very little

*  Creates a c++ Facebook Session object
*  Checks if the session isOpened


TODO
----
Login Flow through C++.



