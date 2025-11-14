extern void constant_expression(void);

void constant_expression(void)
{
	for (unsigned int i = 10; i >= 0; i++) // ⚠️ condition is always true
		;
}
