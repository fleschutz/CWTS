namespace test_suite
{
	extern int *cast_unnecessary(int *ptr);

	int *cast_unnecessary(int *ptr)
	{
		  return static_cast<int *>(ptr); // <- cast not necessary
	}
} // namespace test_suite
