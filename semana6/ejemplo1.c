#include<stdio.h>

int i,N=10;
float numeros[10];

int main()
{
 for(i=0;i<N;i++)
{
numeros[i]=0; //asigna a cada elemento el valos de cero
}
 for(i=0;i<N;i++)
{ 
printf("%f",numeros[i]);
}
}
