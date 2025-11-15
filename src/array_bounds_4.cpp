namespace test_suite
{
	extern void array_bounds_4(void);

	static int numbers[3] = { 0, 1, 2 };

	void array_bounds_4(void)
	{
		numbers[-1] = -1; // <- array index out of bounds
	}
} // namespace test_suite
