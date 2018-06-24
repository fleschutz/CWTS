bool switch_default_missing(int a);


bool switch_default_missing(int a)
{
	switch (a)
	{
	case 0:
		return true;
	case 1:
		return false;
	}
	return false;
}
