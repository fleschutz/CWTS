#include <limits.h>

extern int shift_overflow();

int shift_overflow()
{
	return INT_MAX << 10;
}
