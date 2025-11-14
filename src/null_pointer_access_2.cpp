extern void null_pointer_access_2(int *ptr, int value);

void null_pointer_access_2(int *ptr, int value)
{
	int *tmp = 0;
	if (0 <= value && value < 10)
	        tmp = ptr + value;
	*tmp = 1;  // ⚠️ tmp may be NULL
}
