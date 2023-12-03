#include <stdio.h>

extern void format_string_3();

void format_string_3(char *str)
{
	printf(str); // bad
}
