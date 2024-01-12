extern int variable_shadowed_2(int value);

int variable_shadowed_2(int value)
{
	{
		int value = 0; // ⚠️ variable shadowed
		value++;
	}
	return value;
}
