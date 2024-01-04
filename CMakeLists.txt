# Platform-independent CMakefile to build CWTS
# --------------------------------------------

cmake_minimum_required (VERSION 3.5)

# Uncomment one(!) of the following lines to force using a certain C++ compiler:
# SET (CMAKE_CXX_COMPILER "clang")
# set (CMAKE_CXX_CLANG_TIDY "clang-tidy;-checks=*,-modernize*")
# set (CMAKE_CXX_CPPCHECK   "cppcheck")
# set (CMAKE_CXX_COMPILER   "gcc")

if (MSVC)
	add_compile_options (/Wall /wd4514 /wd4710)
elseif (CMAKE_CXX_COMPILER_ID MATCHES "Clang")
	add_compile_options (-Weverything)
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
	add_compile_options (-Wall -Wextra -pedantic -Wundef)
else ()
	add_compile_options (-Wall -Wextra -pedantic -Wundef)
endif()

project (CWTS)

file(GLOB src "tests/*.cpp")
add_executable (CWTS ${src})

install (TARGETS CWTS DESTINATION . )
