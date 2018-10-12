#include<stdio.h>

void cuadrados();

int main(){
cuadrados();
return 0;
}
void cuadrados(){
float x,x2;
printf("introduce un numero\n");
scanf("%f",&x);
x2=x*x;

	printf("El cuadrado de %f es %f\n",x,x2);
}
