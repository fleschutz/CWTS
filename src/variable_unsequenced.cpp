#include <cstdio>

namespace test_suite
{
	extern void variable_unsequenced(int value);

	void variable_unsequenced(int value)
	{
		printf("%d,%d", value, ++value); // <- variable unsequenced
	}
} // namespace test_suite
