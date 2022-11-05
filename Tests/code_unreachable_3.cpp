extern int code_unreachable_3(int alpha);

int code_unreachable_3(int alpha)
{
	if (alpha == 0)
		return 0;
	else
		return 1;
	alpha++;
	return 2;
}

