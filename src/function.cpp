#include "function.h"

int Check(float D)
{
	if (D > 0) return 2;
	if (D == 0) return 1;
	if (D < 0) return -1;
	return 1;
}

float Discriment(float a, float b, float c)
{
	float D = b*b - 4*a*c;
	return D;
}
