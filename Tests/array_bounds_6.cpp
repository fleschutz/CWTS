extern int array_bounds_6();
static int numbers[3] = { 0, 1, 2 };

int array_bounds_6()
{
	const int index = -1;
	return numbers[index]; // bad
}
