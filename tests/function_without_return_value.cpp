extern int function_without_return_value(void);

int function_without_return_value(void)
{
	return; // oops, return value is missing
}
