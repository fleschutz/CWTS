namespace test_suite
{
	extern bool bool_cast(int value);

	bool bool_cast(int value)
	{
		if (value > 42)
			return true;
		return 0; // <- zero is NOT false
	}
} // namespace test_suite
