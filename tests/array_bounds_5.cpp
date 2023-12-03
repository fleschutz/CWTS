extern int array_bounds_5();
static int numbers[3] = { 0, 1, 2 };

int array_bounds_5()
{
	return numbers[-1]; // bad
}
