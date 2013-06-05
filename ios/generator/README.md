cxx generator for objc
=================

Getting started
-----------------

1. if you want to use generator for modules not related to zdk or appservices, you just need content of ios/generator
lets call this directory GENERATOR_ROOT

2. create generator config for your module under GENERATOR_ROOT/conf directory, you can use cfg_fb.py config as an example;
 most of the options for those configs have comments

3. launch generator with the following command: python generator-objc.py CONFIG_NAME, e.g. python generator-objc.py cfg_fb,
please remember your config should be placed under GENERATOR_ROOT/conf directory

4. generated result will be available under directory which you specified as a "result_dir" parameter in your config file


How to build your CXX framework
-----------------
1. Create Xcode project with type "Static iOS Framework";

2. Add generated files to your Xcode project:

    1) Right click on your project in left side panel and select "Add files to ProjectName", add files you just generated

3. Click on your build target in "TARGETS" panel, open "Build Phases" tab. Specify sources to compile in "Compile Sources" section and headers to expose in "Copy Headers" section;

4. Add dependency frameworks to your project: native framework for which cxx bindings are created and all its native deps;

5. Add "GenUtilsCXX" framework as dependency to your project.

6. Open "Build Settings" tab and change following options:

   1) add these "Other linker flags" options: -ObjC -all_load -fobjc-arc;

   2) set "Build active architecture only" to "NO", so you will get universal binary framework.

8. Try to build your project with "Run" button in xcode;
