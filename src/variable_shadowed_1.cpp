namespace test_suite
{
	extern const int alpha;
	extern int variable_shadowed_1(int alpha);

	const int alpha = 0;

	int variable_shadowed_1(int alpha)
	{
		return alpha; // <- variable shadowed
	}
} // namespace test_suite
