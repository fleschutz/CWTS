extern int code_unreachable_3(int i);


int code_unreachable_3(int i)
{
	if (i == 0)
		return 0;
	else
		return 1;
	i++;
	return 2;
}

