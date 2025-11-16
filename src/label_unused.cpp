namespace test_suite
{
	extern int label_unused(int alpha);

	int label_unused(int alpha)
	{
	label_is_unused: // <- label is unused
		return alpha;
	}
} // namespace test_suite
