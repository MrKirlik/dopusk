#include "function.h"
#include <math.h>

int Check(int D, int a, int b, int c)
{
	if (a == 0) return 3;
	if (b == 0 && D < 0 && ((a > 0 && c > 0) || (a < 0 && c < 0))) return 5;
	if (b == 0 && D < 0 && ((a > 0 && c < 0) || (a < 0 && c > 0))) return 4;
	if (D > 0) return 2;
	if (D == 0) return 1;
	if (D < 0) return -1;
	return 1;
}

int Discriment(int a, int b, int c)
{
	if (a == 0 && b == 0) return -1;
	int D = b*b - 4*a*c;
	return D;
}

float Roots(int a, int b, int c, int i, int D, float *x1)
{
    float x;
    switch(i)
    {
	case 1: x = (float)((-1)*b)/(2*a); break;
	case 2: *x1 = ((-1)*(double)b-sqrt(D))/(double)(2*a);
		x = ((-1)*(float)b+sqrt(D))/(float)(2*a); break;
	case -1: case 5: break;
	case 3: x = (float)(c*(-1))/b; break;
	case 4: x = (float)sqrt((c*(-1))/a); break;
    }
    return x;
}
