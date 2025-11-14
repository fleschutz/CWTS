namespace test_suite
{
	extern int function_without_return_value(void);

	int function_without_return_value(void)
	{
		return; // <- return value is missing
	}
}
