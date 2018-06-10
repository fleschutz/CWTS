cmake_minimum_required (VERSION 2.6)

# (1) Specify your C++ compiler here:
set (CMAKE_CXX "/usr/bin/g++")

# (2) Specify your warning settings here:
set (CMAKE_CXX_FLAGS "-Wall -Wextra -pedantic -Wundef -Wshadow")

project (CWTS)

add_executable (CWTS
	Tests/code_unreachable_1.cpp
	Tests/code_unreachable_2.cpp
	Tests/code_unreachable_3.cpp
	Tests/comment.cpp
	Tests/constant_expression.cpp
	Tests/constant_overflow.cpp
	Tests/division_by_zero.cpp
	Tests/enum_unhandled.cpp
	Tests/file_empty.cpp
	Tests/format_string.cpp
	Tests/parameter_unused.cpp
	Tests/parentheses.cpp
	Tests/null_pointer_access.cpp
	Tests/static_function_unused.cpp
	Tests/undefined_identifier.cpp
	Tests/variable_assignment.cpp
	Tests/variable_compare.cpp
	Tests/variable_init_self.cpp
	Tests/variable_shadowed.cpp
	Tests/variable_used_uninitialized.cpp
	Tests/variable_unused.cpp
	)
