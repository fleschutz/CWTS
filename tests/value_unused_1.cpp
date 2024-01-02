extern int value_unused_1(int alpha, int beta);

int value_unused_1(int alpha, int beta)
{
	alpha * beta; // oops, the result is unused
	return alpha + beta;
}
