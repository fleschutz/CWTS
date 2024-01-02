extern bool variable_compare_4(long alpha, unsigned long beta);

bool variable_compare_4(long alpha, unsigned long beta)
{
	return alpha == beta; // oops, different datatypes
}
