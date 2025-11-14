namespace test_suite
{
	extern void variable_assignment();

	void variable_assignment()
	{
		int alpha = 1, beta = 2;

		if (alpha = beta) // <- Ups, I meant "alpha == beta"
			return;
	}
}
