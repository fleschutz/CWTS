#include <stdio.h>

namespace test_suite
{
	extern void format_string_2(void);

	void format_string_2(void)
	{
		printf(""); // <- empty format string
	}
}
