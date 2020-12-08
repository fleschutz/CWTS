# Platform-independent Makefile - requires cmake 2.8 or higher
cmake_minimum_required(VERSION 2.8)

# Static source code analysis:
# set(CMAKE_CXX_CPPCHECK "cppcheck")

if(MSVC)
	add_compile_options(/Wall /wd4514 /wd4710)
elseif(CMAKE_CXX_COMPILER_ID MATCHES "Clang")
	add_compile_options(-Weverything -pedantic)
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
	add_compile_options(-Wall -Wextra -pedantic -Wundef)
else()
	add_compile_options(-Wall -Wextra -pedantic -Wundef)
endif()

project(CWTS)

add_executable(CWTS
	Tests/array_bounds_1.cpp
	Tests/array_bounds_2.cpp
	Tests/array_braces_missing.cpp
	Tests/assignment_in_condition.cpp
	Tests/bool_compare.cpp
	Tests/branches_identical_1.cpp
	Tests/branches_identical_2.cpp
	Tests/branches_identical_3.cpp
	Tests/cast_unnecessary.cpp
	Tests/code_unreachable_1.cpp
	Tests/code_unreachable_2.cpp
	Tests/code_unreachable_3.cpp
	Tests/comment.cpp
	Tests/constant_expression.cpp
	Tests/constant_overflow.cpp
	Tests/division_by_zero.cpp
	Tests/enum_unhandled.cpp
	Tests/enum_value.cpp
	Tests/extra_tokens.cpp
	Tests/file_empty.cpp
	Tests/format_string_1.cpp
	Tests/format_string_2.cpp
	Tests/format_string_3.cpp
	Tests/function_parameter_unused.cpp
	Tests/function_without_prototype.cpp
	Tests/function_without_return_value.cpp
	Tests/identifier_undefined.cpp
	Tests/implicit_conversion_1.cpp
	Tests/implicit_conversion_2.cpp
	Tests/implicit_conversion_3.cpp
	Tests/label_unused.cpp
	Tests/member_init_reorder.cpp
	Tests/parentheses.cpp
	Tests/pointer_compare.cpp
	Tests/null_pointer_access_1.cpp
	Tests/null_pointer_access_2.cpp
	Tests/recursive_include.cpp
	Tests/shift_count_negative.cpp
	Tests/shift_count_overflow.cpp
	Tests/shift_value_negative.cpp
	Tests/shift_overflow.cpp
	Tests/stack_address_returned.cpp
	Tests/static_const_unused.cpp
	Tests/static_function_unused.cpp
	Tests/switch_body_empty.cpp
	Tests/switch_code_unreachable.cpp
	Tests/switch_default_missing.cpp
	Tests/value_unused.cpp
	Tests/variable_assignment.cpp
	Tests/variable_compare_1.cpp
	Tests/variable_compare_2.cpp
	Tests/variable_compare_3.cpp
	Tests/variable_compare_4.cpp
	Tests/variable_init_self.cpp
	Tests/variable_size_array.cpp
	Tests/variable_shadowed_1.cpp
	Tests/variable_shadowed_2.cpp
	Tests/variable_unsequenced.cpp
	Tests/variable_unused.cpp
	Tests/variable_used_uninitialized.cpp
	)
