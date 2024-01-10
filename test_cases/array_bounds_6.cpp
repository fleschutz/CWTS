extern int array_bounds_6(void);

static int numbers[3] = { 0, 1, 2 };

int array_bounds_6(void)
{
	const int index = -1;
	return numbers[index]; // oops, array index out of bounds
}
