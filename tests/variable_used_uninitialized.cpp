extern void variable_used_uninitialized(void);

void variable_used_uninitialized(void)
{
	int alpha = 0, beta;

	if (alpha == 0)
		beta++; // oops, variable used uninitialized
}
