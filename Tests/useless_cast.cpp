extern int *useless_cast(int *p);

int *useless_cast(int *p)
{
	  return static_cast<int *>(p);
}
