extern void null_pointer_access();


void null_pointer_access()
{
	static int *ptr;

	*ptr = 0;
}
