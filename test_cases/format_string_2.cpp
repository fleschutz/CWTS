#include <stdio.h>

extern void format_string_2(void);

void format_string_2(void)
{
	printf(""); // oops, empty format string
}
