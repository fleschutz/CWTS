extern int branches_identical_3(bool alpha);

int branches_identical_3(bool alpha)
{
	if (alpha == true)
	{
		return 1;
	}
	else if (alpha == true) // ⚠️ this condition is obsolete
	{	
		return 2;
	}
	return 3;
}
