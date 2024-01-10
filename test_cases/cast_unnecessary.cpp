extern int *cast_unnecessary(int *ptr);

int *cast_unnecessary(int *ptr)
{
	  return static_cast<int *>(ptr); // oops, cast not necessary
}
