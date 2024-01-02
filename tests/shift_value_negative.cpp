extern int shift_value_negative(void);

int shift_value_negative(void)
{
	return -1 << 2; // oops, value to shift is negative
}
