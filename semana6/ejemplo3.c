#include<stdio.h>

int i,N=10;

int main()
{
float numero[N];
for(i=0;i<N;i++)
{
printf("inserta un numero");
scanf("%f",&numero[i]);
printf("%f\n",numero[i]);
}
}
