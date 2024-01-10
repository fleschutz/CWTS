extern bool variable_compare_1(char alpha, unsigned char beta);

bool variable_compare_1(char alpha, unsigned char beta)
{
	return alpha == beta; // oops, not same datatype
}
