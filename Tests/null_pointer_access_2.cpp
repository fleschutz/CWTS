extern void null_pointer_access_2(int *p, int a);

void null_pointer_access_2(int *p, int a)
{
	int *q = 0;
	if (0 <= a && a < 10)
	        q = p + a;
	*q = 1;  // q may be NULL
}
