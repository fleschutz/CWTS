namespace test_suite
{
	extern int shift_value_negative(void);

	int shift_value_negative(void)
	{
		return -1 << 2; // <- value to shift is negative
	}
} // namespace test_suite
