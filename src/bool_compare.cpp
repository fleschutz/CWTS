namespace test_suite
{
	extern bool bool_compare(int alpha);

	bool bool_compare(int alpha)
	{
		return (alpha > 0) == 2; // <- condition is always false
	}
} // namespace test_suite
