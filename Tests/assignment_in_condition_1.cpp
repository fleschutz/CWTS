extern bool assignment_in_condition_1(int x);

bool assignment_in_condition_1(int x)
{
	if ( x = 5 )   // uh oh, x = 5 will evaluate to the value 5, which is always true
		return true;
	return false;
}
