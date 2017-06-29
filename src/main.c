#include "function.h"
#include <stdio.h>

int main()
{
    int a, b, c, D;
    float x1, x;
    printf("a*x^2 + b*x + c = 0 \nenter a = ");
    scanf("%d", &a); printf("\nb = ");
    scanf("%d", &b); printf("\nc = ");
    scanf("%d", &c); printf("\n");
    D = Discriment(a, b, c);
    int i = Check(D, a, b, c);
    x = Roots(a, b, c, i, D, &x1);
    switch(i)
    {
	case 1: case 3: printf("root: %.2f", x); break;
	case 2: printf("roots: %.2f %.2f", x, x1); break;
	case -1: case 5: printf("no roots"); break;
    }
    return 0;
}
