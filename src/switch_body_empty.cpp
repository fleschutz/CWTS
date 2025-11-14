namespace test_suite
{
	extern void switch_body_empty(int value);

	void switch_body_empty(int value)
	{
		switch (value) // <- the switch body is empty
		{
		}
	}
}
