extern int array_bounds_5(void);

static int numbers[3] = { 0, 1, 2 };

int array_bounds_5(void)
{
	return numbers[-1]; // oops, array index out of bounds
}
