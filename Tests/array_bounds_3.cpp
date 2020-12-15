extern int array_bounds_3();
static int numbers[3] = { 0, 1, 2 };

int array_bounds_3()
{
	const int index = 3;
	return numbers[index]; // bad
}
