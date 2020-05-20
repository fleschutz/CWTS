extern int *cast_unnecessary(int *p);

int *cast_unnecessary(int *p)
{
	  return static_cast<int *>(p);
}
