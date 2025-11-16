namespace test_suite
{
	extern bool bool_compare(int number);

	bool bool_compare(int number)
	{
		return (number > 0) == 2; // <- comparison is always false
	}
} // namespace test_suite
