# Platform-independent CMakefile to build CWTS
# --------------------------------------------

cmake_minimum_required (VERSION 3.5)

project (CWTS)

# Uncomment one(!) of the following lines to force using a certain C++ compiler:
# set (CMAKE_CXX_COMPILER   "clang")
# set (CMAKE_CXX_CLANG_TIDY "clang-tidy;-checks=*,-modernize*")
# set (CMAKE_CXX_CPPCHECK   "cppcheck")
# set (CMAKE_CXX_COMPILER   "gcc")

if (MSVC)
	add_compile_options (/Wall /wd4514 /wd4710)
elseif (CMAKE_CXX_COMPILER_ID MATCHES "Clang")
	add_compile_options (-Weverything -pedantic)
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
	add_compile_options (-Wall -Wextra -pedantic -Wundef)
else ()
	add_compile_options (-Wall -Wextra -pedantic -Wundef)
endif()

add_executable (CWTS
	tests/array_bounds_1.cpp
	tests/array_bounds_2.cpp
	tests/array_bounds_3.cpp
	tests/array_bounds_4.cpp
	tests/array_bounds_5.cpp
	tests/array_bounds_6.cpp
	tests/array_braces_missing.cpp
	tests/assignment_in_condition_1.cpp
	tests/assignment_in_condition_2.cpp
	tests/bool_compare.cpp
	tests/branches_identical_1.cpp
	tests/branches_identical_2.cpp
	tests/branches_identical_3.cpp
	tests/cast_unnecessary.cpp
	tests/code_unreachable_1.cpp
	tests/code_unreachable_2.cpp
	tests/code_unreachable_3.cpp
	tests/comment.cpp
	tests/constant_expression.cpp
	tests/constant_overflow.cpp
	tests/division_by_zero_1.cpp
	tests/division_by_zero_2.cpp
	tests/enum_unhandled.cpp
	tests/enum_value.cpp
	tests/extra_tokens.cpp
	tests/file_empty.cpp
	tests/format_string_1.cpp
	tests/format_string_2.cpp
	tests/format_string_3.cpp
	tests/function_parameter_unused.cpp
	tests/function_without_prototype.cpp
	tests/function_without_return_value.cpp
	tests/identifier_undefined.cpp
	tests/implicit_conversion_1.cpp
	tests/implicit_conversion_2.cpp
	tests/implicit_conversion_3.cpp
	tests/label_unused.cpp
	tests/logical_not.cpp
	tests/member_init_reorder.cpp
	tests/parentheses.cpp
	tests/pointer_compare.cpp
	tests/null_pointer_access_1.cpp
	tests/null_pointer_access_2.cpp
	tests/recursive_include.cpp
	tests/shift_count_negative.cpp
	tests/shift_count_overflow.cpp
	tests/shift_value_negative.cpp
	tests/shift_overflow.cpp
	tests/stack_address_returned.cpp
	tests/static_const_unused.cpp
	tests/static_function_unused.cpp
	tests/switch_body_empty.cpp
	tests/switch_code_unreachable.cpp
	tests/switch_default_missing.cpp
	tests/value_unused_1.cpp
	tests/value_unused_2.cpp
	tests/variable_assignment.cpp
	tests/variable_compare_1.cpp
	tests/variable_compare_2.cpp
	tests/variable_compare_3.cpp
	tests/variable_compare_4.cpp
	tests/variable_init_self.cpp
	tests/variable_size_array.cpp
	tests/variable_shadowed_1.cpp
	tests/variable_shadowed_2.cpp
	tests/variable_unsequenced.cpp
	tests/variable_unused.cpp
	tests/variable_used_uninitialized.cpp
	)

install (TARGETS CWTS DESTINATION . )
