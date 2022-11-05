extern int value_unused(int a, int b);

int value_unused(int a, int b)
{
	a * b; // result is unused
	return a + b;
}
