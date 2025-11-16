#include <cstdio>

namespace test_suite
{
	extern void format_string_3(const char *str);

	void format_string_3(const char *str)
	{
		printf(str); // <- <str> is handled as format string
	}
} // namespace test_suite
