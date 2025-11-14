namespace test_suite
{
	extern int shift_count_overflow(int value);

	int shift_count_overflow(int value)
	{
		return value << 66; // <- shift count is too high
	}
}
