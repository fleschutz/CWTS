﻿extern int shift_count_negative(int value);

int shift_count_negative(int value)
{
	return value << -1; // ⚠️ shift count is negative
}
