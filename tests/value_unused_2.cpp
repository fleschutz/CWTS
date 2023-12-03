extern int value_unused_2(int alpha, int beta);

int value_unused_2(int alpha, int beta)
{
	return alpha, beta; // only one is used
}
