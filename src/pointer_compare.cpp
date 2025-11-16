namespace test_suite
{
	extern bool pointer_compare(const char *ptr);

	bool pointer_compare(const char *ptr)
	{
		return (ptr == '\0'); // <- different datatypes (typical typo, "*ptr" was meant)
	}
} // namespace test_suite
