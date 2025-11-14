extern void array_bounds_1(void);

static int numbers[3] = { 0, 1, 2 };

void array_bounds_1(void)
{
	numbers[3] = 3; // <- array index out of bounds
}
