#include <stdio.h>

extern void format_string_3(char *str);

void format_string_3(char *str)
{
	printf(str); // oops, <str> is handled as format string
}
