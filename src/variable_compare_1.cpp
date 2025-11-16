namespace test_suite
{
	extern bool variable_compare_1(char alpha, unsigned char beta);

	bool variable_compare_1(char alpha, unsigned char beta)
	{
		return alpha == beta; // <- different datatypes
	}
} // namespace test_suite
