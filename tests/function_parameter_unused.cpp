#include <stdio.h>

extern void parameter_unused(int alpha);

void parameter_unused(int alpha) // oops, function parameter is unused
{
	printf(" "); 
}
