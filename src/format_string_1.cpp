#include <cstdio>

namespace test_suite
{
	extern void format_string_1();

	void format_string_1()
	{
		printf("%s", 0); // <- null pointer access
	}
} // namespace test_suite
