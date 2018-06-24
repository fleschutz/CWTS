extern int answer;
extern int variable_shadowed_1(int answer);

int answer = 42;

int variable_shadowed_1(int answer)
{
	return answer;
}
