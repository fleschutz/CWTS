namespace test_suite
{
	extern int parentheses(int value);

	int parentheses(int value)
	{
		if (value > 0) // <- explicit parentheses recommended
			if (value == 7)
				return 1;
		else
			return 2;
		return 3;
	}
}
