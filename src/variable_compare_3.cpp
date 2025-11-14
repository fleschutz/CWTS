namespace test_suite
{
	extern bool variable_compare_3(int alpha, unsigned int beta);

	bool variable_compare_3(int alpha, unsigned int beta)
	{
		return alpha == beta; // <- different datatypes
	}
}
