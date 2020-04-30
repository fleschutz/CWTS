extern bool assignment_in_condition(int x);

bool assignment_in_condition(int x)
{
	if ( x = 5 )   // uh oh, x = 5 will evaluate to the value 5, which is always true
		return true;
	return false;
}
