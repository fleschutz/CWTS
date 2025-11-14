namespace test_suite
{
	extern bool assignment_in_condition_2(int alpha);

	bool assignment_in_condition_2(int alpha)
	{
		if (alpha =! 5)   // <- Ups, I meant '!='
			return true;
		return false;
	}
}
