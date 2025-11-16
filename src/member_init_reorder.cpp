namespace test_suite
{
	struct Alpha
	{
		int beta;
		int gamma;
		Alpha(): gamma(0), beta(1) { } // <- member reordered
	};
} // namespace test_suite
