extern int variable_shadowed(int a);


int variable_shadowed(int a)
{
	{	int a = 0;
		a++;
	}
	return a;
}
