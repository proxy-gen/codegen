set -ex

# options

usage(){
cat << EOF
usage: $0 [options]

Generates the Java <-> C++ bindings

OPTIONS:
-h	this help

EOF
}

while getopts "dvh" OPTION; do
case "$OPTION" in
d)
debug=1
;;
v)
verbose=1
;;
h)
usage
exit 0
;;
esac
done

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

_CFG_FILE=$(dirname "$0")"/generator.cfg"
if [ -e "$_CFG_FILE" ]
then
    [ -r "$_CFG_FILE" ] || die "Fatal Error: $_CFG_FILE exists but is unreadable"
    . "$_CFG_FILE"
fi

if [ -z "${CXX_PARSER_ROOT}" ]; then
    echo "Fatal Error: CXX_PARSER_ROOT is not defined in user-generate.cfg, exiting"
    exit 1
fi
echo "CXX_PARSER_ROOT: $CXX_PARSER_ROOT"

if [ -z "${PYTHON_BIN}" ]; then
    echo "Fatal Error: PYTHON_BIN is not defined in user-generate.cfg, exiting"
    exit 1
fi
echo "PYTHON_BIN: $PYTHON_BIN"

if [ -z "${JAVA_FRAMEWORK_HEADERS}" ]; then
    echo "Fatal Error: JAVA_FRAMEWORK_HEADERS is not defined in user-generate.cfg, exiting"
    exit 1
fi

echo "JAVA_FRAMEWORK_HEADERS: $JAVA_FRAMEWORK_HEADERS"

if [ -z "${CXX_GENERATOR_ROOT}" ]; then
    echo "Fatal Error: CXX_GENERATOR_ROOT is not defined in user-generate.cfg, exiting"
    exit 1
fi
echo "CXX_GENERATOR_ROOT: $CXX_GENERATOR_ROOT"

if [ -z "${BASE_CXX_HEADER_OUTPUT_DIR}" ]; then
	echo "Fatal Error: BASE_CXX_HEADER_OUTPUT_DIR is not defined in user-generate.cfg, exiting"
	exit 1
fi
echo "BASE_CXX_HEADER_OUTPUT_DIR: $BASE_CXX_HEADER_OUTPUT_DIR"

if [ -z "${BASE_CXX_SRC_OUTPUT_DIR}" ]; then
	echo "Fatal Error: BASE_CXX_SRC_OUTPUT_DIR is not defined in user-generate.cfg, exiting"
	exit 1
fi
echo "BASE_CXX_SRC_OUTPUT_DIR: $BASE_CXX_SRC_OUTPUT_DIR"

if [ -z "${BASE_CXX_MAKEFILES_OUTPUT_DIR}" ]; then
    echo "Fatal Error: BASE_CXX_MAKEFILES_OUTPUT_DIR is not defined in user-generate.cfg, exiting"
    exit 1
fi
echo "BASE_CXX_MAKEFILES_OUTPUT_DIR: $BASE_CXX_MAKEFILES_OUTPUT_DIR"

if [ -z "${BASE_CXX_DIR}" ]; then
    echo "Fatal Error: BASE_CXX_DIR is not defined in user-generate.cfg, exiting"
    exit 1
fi
echo "BASE_CXX_DIR: $BASE_CXX_DIR"

if [ -z "${CXX_JVM_CLASSPATH}" ]; then
    echo "Fatal Error: CXX_JVM_CLASSPATH is not defined in user-generate.cfg, exiting"
    exit 1
fi
echo "CXX_JVM_CLASSPATH: $CXX_JVM_CLASSPATH"

echo "Building CXX Bindings Parser"
g++ -c -I${JAVA_FRAMEWORK_HEADERS} -I${BASE_CXX_DIR} -I${BASE_CXX_DIR}/internal -I${BASE_CXX_DIR}/exported ${BASE_CXX_DIR}/JNIContext.cpp -o ${CXX_PARSER_ROOT}/JNIContext.o
g++ -c -I${JAVA_FRAMEWORK_HEADERS} -I${BASE_CXX_DIR} -I${BASE_CXX_DIR}/internal -I${BASE_CXX_DIR}/exported -I${CXX_GENERATOR_ROOT}/indexer ${CXX_GENERATOR_ROOT}/indexer/CXXGenerator.cpp  -o ${CXX_PARSER_ROOT}/CXXGenerator.o
g++ -dynamiclib -framework JavaVM -o ${CXX_PARSER_ROOT}/libCXXGenerator.dylib ${CXX_PARSER_ROOT}/JNIContext.o  ${CXX_PARSER_ROOT}/CXXGenerator.o 

echo "Generating CXX bindings for Android"

SECTION=facebook-sdk
echo "Generating section=" $SECTION
LD_LIBRARY_PATH=${CXX_PARSER_ROOT} $PYTHON_BIN ${CXX_GENERATOR_ROOT}/generator.py ${DIR}/generator.ini \
                        --src-output-dir ${BASE_CXX_SRC_OUTPUT_DIR} \
                        --header-output-dir  ${BASE_CXX_HEADER_OUTPUT_DIR} \
                        --makefiles-output-dir ${BASE_CXX_MAKEFILES_OUTPUT_DIR} \
                        --section $SECTION \
                        --log  info
