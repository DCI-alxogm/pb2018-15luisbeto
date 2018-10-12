#include<stdio.h>

float cuadrados(float h);

int main(){
float x,x2;
printf("introduce un numero\n");
scanf("%f",&x);
x2=cuadrados(x);
printf("El cuadrado de %f es %f\n",x,x2);
return 0;
}
float cuadrados(float h){
return (h*h);
}
