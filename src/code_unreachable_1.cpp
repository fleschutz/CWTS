namespace test_suite
{
	extern void code_unreachable_1(int alpha);

	void code_unreachable_1(int alpha)
	{
		return;
		alpha++; // <- code is unreachable
	}
} // namespace test_suite
