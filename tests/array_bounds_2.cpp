extern int array_bounds_2(void);

static int numbers[3] = { 0, 1, 2 };

int array_bounds_2(void)
{
	return numbers[3]; // oops, array index out of bounds
}
