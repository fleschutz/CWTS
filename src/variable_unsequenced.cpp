#include <stdio.h>

extern void variable_unsequenced(int value);

void variable_unsequenced(int value)
{
	printf("%d,%d", value, ++value); // <- variable unsequenced
}
