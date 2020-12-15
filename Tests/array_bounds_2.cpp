extern int array_bounds_2();
static int numbers[3] = { 0, 1, 2 };

int array_bounds_2()
{
	return numbers[3]; // bad
}
