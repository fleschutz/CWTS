#include <stdio.h>

extern void format_string_1();

void format_string_1()
{
	printf("%s", 0); // bad
}
