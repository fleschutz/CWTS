extern void variable_assignment();

void variable_assignment()
{
	int alpha = 1, beta = 2;

	if (alpha = beta) // oops, I meant "alpha == beta"
		return;
}

