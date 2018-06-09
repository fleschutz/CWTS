cmake_minimum_required (VERSION 2.6)

# (1) Specify your C++ compiler here:
set (CMAKE_CXX "/usr/bin/clang++")
set (CMAKE_CXX "/usr/bin/g++")

# (2) Specify your warning level here:
set (CMAKE_CXX_FLAGS "-Wall -Wextra")

project (CWTS)

add_executable (CWTS
	test_comparison.cpp
	test_constant_expression.cpp
	test_dead_code.cpp
	test_empty_file.cpp
	test_format_string.cpp
	test_pointer.cpp
	test_static_function_unused.cpp
	test_unused_parameter.cpp
	test_variable_assignment.cpp
	test_variable_used_uninitialized.cpp
	test_variable_unused.cpp
	)
