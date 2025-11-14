namespace test_suite
{
	extern short implicit_conversion_2(int alpha);

	short implicit_conversion_2(int alpha)
	{
		return alpha; // <- implicit conversion (int to short)
	}
}
