#include <stdio.h>

extern void format_string_3();

void format_string_3(char *s)
{
	printf(s); // bad
}
