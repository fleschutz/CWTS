extern int array_bounds_3(void);

static int numbers[3] = { 0, 1, 2 };

int array_bounds_3(void)
{
	const int index = 3;
	return numbers[index]; // ⚠️ array index out of bounds
}
