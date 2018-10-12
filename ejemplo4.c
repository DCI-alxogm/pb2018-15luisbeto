#include<stdio.h>
float x2;
float cuadrados();
int main(){
x2=cuadrados();
printf("El cuadrado es %f\n",x2);
return 0;
}
float cuadrados(){
float x;
printf("introduce un numero\n");
scanf("%f",&x);
return (x*x);
}
