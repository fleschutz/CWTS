cmake_minimum_required (VERSION 2.6)

# (1) Specify your C++ compiler here:
set (CMAKE_CXX "/usr/bin/clang++")

# (2) Specify your warning settings here:
set (CMAKE_CXX_FLAGS "-Wall -Wextra -pedantic")

project (CWTS)

add_executable (CWTS
	Tests/code_unreachable_1.cpp
	Tests/code_unreachable_2.cpp
	Tests/code_unreachable_3.cpp
	Tests/constant_expression.cpp
	Tests/file_empty.cpp
	Tests/format_string.cpp
	Tests/parameter_unused.cpp
	Tests/null_pointer_access.cpp
	Tests/static_function_unused.cpp
	Tests/variable_assignment.cpp
	Tests/variable_compare.cpp
	Tests/variable_init_self.cpp
	Tests/variable_used_uninitialized.cpp
	Tests/variable_unused.cpp
	)
