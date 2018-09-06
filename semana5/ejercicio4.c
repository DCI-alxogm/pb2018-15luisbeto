#include<stdio.h>
#include<math.h>

int i=1,g=0,numero,bin;
int opc;

int main()
{
while(i==1)
    {
int res=0;
int bin;
int g=0,contador=1,num,num1;
printf("\nElige una de las siguientes opciones:  \n");
printf("1.-convertir un numero binario a decimal\n");
printf("2.-convertir un numero decimal a binario\n");
scanf("%d",&opc);
    switch (opc)
    {
        case 1:
        printf("inserta un valor binario:   ");
        scanf("%d",&bin);
   
        num=bin;
   
        while(num/10>0)
        {
        num=num/10;
        contador++;  
        }   
    for(i=(contador-1);i>=0;i--)
    {
        if(bin/pow(10,i)>=1)
        {
            res= res + pow(2,i);
            bin= bin - pow(10,i);
        }
    }
    printf("\nel valor decimal es :%d",res);
        printf ("\nsi quieres volver a intentarlo escribe un 1, si quieres salir escribe un 0:  ");
        scanf("%d",&i);
        break;
        case 2:
        printf("inserta un numero :  ");
        scanf("%d",&numero);
        if(numero%2!=0)
{
numero=numero-1;
res=1;
}
        while(numero>0)
        {
	    if(numero%2!=0)
	{
            res=res+ pow(10,g);
        }
	numero=(numero/2)-(numero%2);
	g++;
	}
        printf ("\nel numero binario es  :   %d",res);
        printf ("\nsi quieres volver a intentarlo escribe un 1, si quieres salir escribe un 0:  ");
        scanf("%d",&i);
        break;
        default:
        printf("selecciona una de las dos opciones porfavor");
        i=1;
        break;
}
}
       }
