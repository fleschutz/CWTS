namespace test_suite
{
	extern void variable_used_uninitialized(void);

	void variable_used_uninitialized(void)
	{
		int alpha = 0, beta;

		if (alpha == 0)
			beta++; // <- variable used uninitialized
	}
} // namespace test_suite
