extern void null_pointer_access_1(void);

void null_pointer_access_1(void)
{
	static int *ptr; // NULL by default

	*ptr = 0; // ⚠️ null pointer access
}
