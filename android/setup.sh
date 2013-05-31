#!/bin/bash

updatendkcontents=0
updatesdkcontents=0
while getopts ":s:n:x" opt; do
  case $opt in
    s)
      SDKDIR=${OPTARG}
      updatesdkcontents=1
      ;;
    n)
      NDKDIR=${OPTARG}
      updatendkcontents=1
      ;;
	x)
      ;;
    :)
      echo "Option -$OPTARG requires an argument." >&2
      exit 1
      ;;
  esac
done

echo `export PATH=$PATH:.`

if [ $updatesdkcontents -ne 0 ]
then
  if [ -z "$SDKDIR" ] || [ ! -f "$SDKDIR/tools/ant/build.xml" ]
  then
    echo 
    echo "Android SDK directory ($SDKDIR) is invalid!"
    echo Specify Android SDK directory with -s /absolute/path/to/sdk
    echo 
    exit 1
else
    echo `export PATH=$PATH:$SDKDIR/platform-tools/`
  fi
fi

if [ $updatendkcontents -ne 0 ]
then
  if [ -z "$NDKDIR" ] || [ ! -f "$NDKDIR/ndk-build" ]
  then
    echo 
    echo "Android SDK directory ($NDKDIR) is invalid!"
    echo Specify Android SDK directory with -n /absolute/path/to/ndk
    echo 
    exit 1
  fi
fi

sdkfilecontents="sdk.dir=${SDKDIR}"
ndkfilecontents="ndk.dir=${NDKDIR}"

echo
echo Android SDK directory was specified as $SDKDIR
echo Android NDK directory was specified as $NDKDIR
echo 
echo local.properties will contain :
echo $sdkfilecontents
echo $ndkfilecontents
echo

echo
echo Copy the required libraries into the projects
echo

buildfiles=(`find .. -type f -name "build.xml"`)
for f in "${buildfiles[@]}"
do
    echo build.xml found at echo ${f}
    localpropsf=${f/build\.xml/local\.properties}
    echo $sdkfilecontents > $localpropsf
    echo $ndkfilecontents >> $localpropsf
#	echo $ndkfilecontents >> $localpropsf
done

echo "Setup complete: Status: " $?
