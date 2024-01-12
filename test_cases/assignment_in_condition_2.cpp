extern bool assignment_in_condition_2(int alpha);

bool assignment_in_condition_2(int alpha)
{
	if (alpha =! 5)   // ⚠️ I meant '!='
		return true;
	return false;
}
