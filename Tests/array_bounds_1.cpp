extern void array_bounds_1();
static int numbers[3] = { 0, 1, 2 };

void array_bounds_1()
{
	numbers[3] = 0; // bad
}
