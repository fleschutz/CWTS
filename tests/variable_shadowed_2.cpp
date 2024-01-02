extern int variable_shadowed_2(int value);

int variable_shadowed_2(int value)
{
	{
		int value = 0; // oops, variable shadowed
		value++;
	}
	return value;
}
