extern void code_unreachable_1(int i);

void code_unreachable_1(int i)
{
	return;
	i++;
}

int main() { return 0; } // to make the linker happy
