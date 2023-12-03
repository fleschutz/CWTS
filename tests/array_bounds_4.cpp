extern void array_bounds_4();
static int numbers[3] = { 0, 1, 2 };

void array_bounds_4()
{
	numbers[-1] = -1; // bad
}
