extern void array_bounds_4(void);

static int numbers[3] = { 0, 1, 2 };

void array_bounds_4(void)
{
	numbers[-1] = -1; // oops, array index out of bounds
}
