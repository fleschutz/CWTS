typedef enum { red, green, blue } Color;

extern int enum_unhandled(Color color);

int enum_unhandled(Color color)
{
	switch (color)
	{
	case red: return 1;
	case green: return 2;
	default: return 4;    // <- case 'blue' is unhandled
	}
}
