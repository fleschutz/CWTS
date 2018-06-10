extern int enum_unhandled(Color color);


typedef enum { red, green, blue } Color;


int enum_unhandled(Color color)
{
	switch (color)
	{
	case red: return 1;
	case green: return 2;
	}
	return 0;
}
