extern int value_unused_1(int alpha, int beta);

int value_unused_1(int alpha, int beta)
{
	alpha * beta; // result is unused
	return alpha + beta;
}
