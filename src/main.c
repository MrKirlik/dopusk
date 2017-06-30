#include "function.h"
#include <stdio.h>
#include <math.h>

int main ()
{
	float a,b,c,x,D;
	int i;
	printf("a*(x*x)+b*x+c=0\n");
	printf ("a = ");
	scanf("%f",&a);
	printf("b = ");
	scanf("%f",&b);
	printf("c = ");
	scanf("%f",&c);
	D = Discriment(a,b,c);
	
	if (a==0) {	
		if (b ==0) {
			if (c != 0) 
			{
				printf("Vvedennie dannie ne verni");	
			
			}
			else 
			{
				printf("Korni beskonechnie");
			}
		}
		else 
		{	x=-c/b;
		  	printf("%0.2f", x);
		}
	}	
	else 
	{
		i = Proverka(D);
		switch (i) {
			case 0:
				x = ((-1)*b) / (2 * a);
				printf ("%.2f",x);
				break;
			case 1:
				printf("Has no roots");
				break;
			case 2:
				x = ((-1)* b + sqrt(D)) / (2 * a);
				printf ("%.2f\n",x);
				x = ((-1)* b - sqrt(D)) / (2 * a);
				printf ("%.2f",x);
				break;
			   }
	     }
	
	return 0;
}

