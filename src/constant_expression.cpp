namespace test_suite
{
	extern void constant_expression(void);

	static const unsigned int start_number = 10;

	void constant_expression(void)
	{
		for (unsigned int i = start_number; i >= 0; i++) // <- condition is always true (endless loop)
		{
		}
	}
} // namespace test_suite
