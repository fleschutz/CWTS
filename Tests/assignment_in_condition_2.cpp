extern bool assignment_in_condition_2(int x);

bool assignment_in_condition_2(int x)
{
	if ( x =! 5 )   // oops, I meant '!='
		return true;
	return false;
}
