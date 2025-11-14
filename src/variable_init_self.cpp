namespace test_suite
{
	extern int variable_init_self(void);

	int variable_init_self(void)
	{
		int alpha = alpha; // <- variable initialized by itself
		return alpha;
	}
}
