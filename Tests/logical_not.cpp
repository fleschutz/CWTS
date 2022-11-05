extern int logical_not(int a);

int logical_not(int a)
{
	a &= !(1 << 7); // oops, I meant '~' instead of '!'
	return a;
}
