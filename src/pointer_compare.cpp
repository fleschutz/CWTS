namespace test_suite
{
	extern int pointer_compare(char *ptr);

	int pointer_compare(char *ptr)
	{
		return (ptr == '\0'); // <- Ups, I meant "*ptr"
	}
} // namespace test_suite
