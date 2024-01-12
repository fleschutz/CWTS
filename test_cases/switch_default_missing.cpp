bool switch_default_missing(int value);

bool switch_default_missing(int value)
{
	switch (value) // ⚠️ the switch default is missing
	{
	case 0:
		return true;
	case 1:
		return false;
	}
	return false;
}
