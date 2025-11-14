namespace test_suite
{
	extern int parameter_unused(int alpha, int beta);

	int parameter_unused(int alpha, int beta) // <- function parameter is unused
	{
		return alpha / 2; 
	}
}
