extern int value_unused_1(int alpha, int beta);

int value_unused_1(int alpha, int beta)
{
	alpha * beta; // ⚠️ the result is unused
	return alpha + beta;
}
