#include<stdio.h>

void cuadrados(float x,float x2);

int main(){
float x,x2;
printf("introduce un numero\n");
scanf("%f",&x);
cuadrados(x,x2);
return 0;
}
void cuadrados(float x,float x2){
x2=x*x;

	printf("El cuadrado de %f es %f\n",x,x2);
}
