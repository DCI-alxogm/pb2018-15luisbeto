#include<stdio.h>
#include<math.h>

int final,i,n;
float e,c,s,l,raiz,delta,x;
int main()
{
printf("incerta una variable");
scanf("%f",&x);
printf("incerta un intervalo");
scanf("%f",&final);
printf("incerta el numero de veces que se repite");
scanf("%d",&n);
delta=(final)/n;

for(i=0;i<n;i++)
{
e=exp(x);
c=cos(x);
s=sin(x);
l=log(x);
raiz=sqrt(x);
printf("\ncos%f \nsen%f \nexp%f \nlog%f \nraiz%f",c,s,e,l,raiz);
x=x+delta;
}
}
