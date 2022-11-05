extern int logical_not(int alpha);

int logical_not(int alpha)
{
	alpha &= !(1 << 7); // oops, I meant '~' instead of '!'
	return alpha;
}
