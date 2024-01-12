extern int switch_code_unreachable(int value);

int switch_code_unreachable(int value)
{
	switch (value)
	{
	case 0: value += 2; break;
	case 1: value -= 2; break;
	value *= 2;                // ⚠️ the switch code is unreachable
	default: value /= 2; break;
	}
	return value;
}
