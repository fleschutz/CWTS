extern void code_unreachable_3(int i);


void code_unreachable_3(int i)
{
	if (i == 0)
		return;
	else
		throw 20;
	i++;
}

