extern int label_unused(int alpha);

int label_unused(int alpha)
{
label_is_unused: // oops, label is unused
	return alpha;
}
