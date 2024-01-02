extern void variable_size_array(int size);

void variable_size_array(int size)
{
	float abc[size]; // oops, array size is not constant
	abc[0] = 3.1415;
}
