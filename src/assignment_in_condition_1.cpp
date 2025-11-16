namespace test_suite
{
	extern bool assignment_in_condition_1(int alpha);

	bool assignment_in_condition_1(int alpha)
	{
		if (alpha = 5)   // <- 'alpha = 5' will evaluate to value 5, which is always true
			return true;
		return false;
	}
} // namespace test_suite
