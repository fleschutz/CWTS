#include <climits>

namespace test_suite
{
	extern int shift_overflow(void);

	int shift_overflow(void)
	{
		return INT_MAX << 10; // <- shift overflow
	}
} // namespace test_suite
