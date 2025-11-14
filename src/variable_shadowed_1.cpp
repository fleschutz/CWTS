namespace test_suite
{
	extern int answer;
	extern int variable_shadowed_1(int answer);

	int answer = 0;

	int variable_shadowed_1(int answer)
	{
		return answer; // <- variable shadowed
	}
}
