void variable_used_uninitialized()
{
	int a = 0, b;

	if (a == 0)
		b++;
}
