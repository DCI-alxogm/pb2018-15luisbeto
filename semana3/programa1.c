
#include<stdio.h>

float c,k,f;

int main()
{
	printf("introduce una temperatura en °C:  ");
	scanf("%f",&c);

	k = c+273.15;
	f = (c*1.8)+32;
	c = (f-32)/1.8;

	printf("la temperatura en °k es: %f\n",k);
	printf("la temperatura en °F es: %f\n",f);
        printf("la temperatura en °C es: %f\n",c); 
}
