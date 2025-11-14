#include <limits.h>

extern int shift_overflow(void);

int shift_overflow(void)
{
	return INT_MAX << 10; // <- shift overflow
}
