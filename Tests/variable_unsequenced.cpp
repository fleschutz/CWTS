#include <stdio.h>

extern void variable_unsequenced(int a);

void variable_unsequenced(int a)
{
	printf("%d,%d", a, ++a);
}
