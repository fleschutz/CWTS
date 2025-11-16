namespace test_suite
{
	extern void code_unreachable_2(int alpha);

	void code_unreachable_2(int alpha)
	{
		throw 0;
		alpha++; // <- code is unreachable
	}
} // namespace test_suite
