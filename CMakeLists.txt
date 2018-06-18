cmake_minimum_required (VERSION 2.6)

# (1) Specify your C++ compiler here:
set (CMAKE_CXX_COMPILER "clang++")

# (2) Specify your warning options here:
set (CMAKE_CXX_FLAGS "-Weverything -pedantic")

project (CWTS)

add_executable (CWTS
	Tests/array_bounds.cpp
	Tests/branches_identical.cpp
	Tests/code_unreachable_1.cpp
	Tests/code_unreachable_2.cpp
	Tests/code_unreachable_3.cpp
	Tests/comment.cpp
	Tests/constant_expression.cpp
	Tests/constant_overflow.cpp
	Tests/division_by_zero.cpp
	Tests/enum_unhandled.cpp
	Tests/extra_tokens.cpp
	Tests/file_empty.cpp
	Tests/format_string.cpp
	Tests/function_without_prototype.cpp
	Tests/function_without_return_value.cpp
	Tests/identifier_undefined.cpp
	Tests/label_unused.cpp
	Tests/member_init_reorder.cpp
	Tests/parameter_unused.cpp
	Tests/parentheses.cpp
	Tests/null_pointer_access.cpp
	Tests/stack_address_returned.cpp
	Tests/static_function_unused.cpp
	Tests/value_unused.cpp
	Tests/variable_assignment.cpp
	Tests/variable_compare.cpp
	Tests/variable_init_self.cpp
	Tests/variable_size_array.cpp
	Tests/variable_shadowed.cpp
	Tests/variable_unsequenced.cpp
	Tests/variable_unused.cpp
	Tests/variable_used_uninitialized.cpp
	)
