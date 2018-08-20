
#include<stdio.h>
#include<math.h>

long double x,y,y2,y3;

int main()
{
	printf("Introduce una variable : ");
	scanf("%Le",&x);

	y=exp(x);
	printf("resultado 1:  %Le\n",y);
	y2=cos(x)+2*tan(x/2);
	printf("resultado 2:  %Le radianes\n",y2);
	y3=log(x)+3*(x*x);
	printf("resultado 3: %Le\n",y3);
}
