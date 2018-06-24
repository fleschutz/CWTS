extern int switch_code_unreachable(int a);

int switch_code_unreachable(int a)
{
	switch (a)
	{
	case 0: a += 2; break;
	case 1: a -= 2; break;
	a *= 2;
	default: a /= 2; break;
	}
	return a;
}
