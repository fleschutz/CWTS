namespace test_suite
{
	extern bool variable_compare_4(long alpha, unsigned long beta);

	bool variable_compare_4(long alpha, unsigned long beta)
	{
		return alpha == beta; // <- different datatypes
	}
} // namespace test_suite
