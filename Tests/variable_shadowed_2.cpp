extern int variable_shadowed_2(int a);

int variable_shadowed_2(int a)
{
	{	int a = 0;
		a++;
	}
	return a;
}
