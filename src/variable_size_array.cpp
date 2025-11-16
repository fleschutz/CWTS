namespace test_suite
{
	extern void variable_size_array(int size);

	void variable_size_array(int size)
	{
		float abc[size]; // <- array size is not constant
		abc[0] = 3.1415;
	}
} // namespace test_suite
