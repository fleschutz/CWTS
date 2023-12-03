extern void null_pointer_access_1();

void null_pointer_access_1()
{
	static int *ptr; // NULL by default

	*ptr = 0; // bad
}
