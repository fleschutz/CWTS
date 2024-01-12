extern void code_unreachable_1(int alpha);

void code_unreachable_1(int alpha)
{
	return;
	alpha++; // ⚠️ code is unreachable
}

int main() { return 0; } // to make the linker happy
