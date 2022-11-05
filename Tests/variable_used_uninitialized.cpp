extern void variable_used_uninitialized();

void variable_used_uninitialized()
{
	int alpha = 0, beta;

	if (alpha == 0)
		beta++;
}
