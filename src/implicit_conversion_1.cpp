namespace test_suite
{
	extern char implicit_conversion_1(short alpha);

	char implicit_conversion_1(short alpha)
	{
		return alpha; // <- implicit conversion (short to char)
	}
} // namespace test_suite
