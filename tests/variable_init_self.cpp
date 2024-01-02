extern int variable_init_self(void);

int variable_init_self(void)
{
	int alpha = alpha; // oops, variable initialized by itself
	return alpha;
}
