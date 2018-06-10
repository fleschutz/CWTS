cmake_minimum_required (VERSION 2.6)

# (1) Specify your C++ compiler here:
set (CMAKE_CXX "/usr/bin/clang++")
set (CMAKE_CXX "/usr/bin/g++")

# (2) Specify your warning level here:
set (CMAKE_CXX_FLAGS "-Wall -Wextra")

project (CWTS)

add_executable (CWTS
	Tests/constant_expression.cpp
	Tests/dead_code.cpp
	Tests/file_empty.cpp
	Tests/format_string.cpp
	Tests/parameter_unused.cpp
	Tests/pointer.cpp
	Tests/static_function_unused.cpp
	Tests/variable_assignment.cpp
	Tests/variable_compare.cpp
	Tests/variable_init_self.cpp
	Tests/variable_used_uninitialized.cpp
	Tests/variable_unused.cpp
	)
