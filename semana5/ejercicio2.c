#include<stdio.h>

int res=1,c=1,i=1,j,x;

int main()
{
while(i==1)
{
printf("\nincerta un numero");
scanf("%d",&x);

for(j=0;j<x;j++)
{
 res=c*res;
printf("\n%d.- %d",c,res);
c=c+1;
}
printf("\nSi quieres probar con otro numero escribe un 1\n Si quieres salir escribe cualquier utro numero");
scanf("%d",&i);
}
}
