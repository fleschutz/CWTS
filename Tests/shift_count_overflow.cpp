extern int shift_count_overflow(int a);

int shift_count_overflow(int a)
{
	return a << 66; // bad
}
