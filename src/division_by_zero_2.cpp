namespace test_suite
{
	extern float division_by_zero_2(float alpha);

	float division_by_zero_2(float alpha)
	{
		return alpha / 0.0; // <- division by zero
	}
} // namespace test_suite
