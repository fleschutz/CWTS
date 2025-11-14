namespace test_suite
{
	extern int *stack_address_returned(void);

	int *stack_address_returned(void)
	{
		int array[10] = {};

		return array; // <- returns stack address
	}
}
