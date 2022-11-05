extern int pointer_compare(char *ptr);

int pointer_compare(char *ptr)
{
	return (ptr == '\0'); // oops, I meant "*ptr"
}
