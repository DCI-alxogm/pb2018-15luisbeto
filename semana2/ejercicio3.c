/*progra 3 de la segunda semana*/

#include<stdio.h>

float va1,va2,va3,va4;           //se declaran las variables que se va a pedir
float res;
int i;                         //se declara una variable de control para el ciclo

int main()
{
    printf("INTRODUCE 4 NUMEROS REALES : \n");       //se introduce el texto para el usuario 
    scanf("%f%f%f%f",&va1,&va2,&va3,&va4);            //se escanean las variavles que introducio el usuario
    
    for(i=0;i<4;i++)                                  //se declara en el ciclo que se repita 4 veces
    {
        if(i==0)                                      //se utiliza un if para imprimir las ecuaciones
        {
            printf("\ne = (%f + %f) * %f / %f\n",va1,va2,va3,va4);
	    res=(va1+va2)*va3/va4;
	    printf("el resultado es : %f",res);
        }
        else
        {
         if(i==1)
        {
            printf("\ne = ((%f + %f) * %f) / %f\n",va1,va2,va3,va4); 
	    res=((va1+va2)*va3)/va4;
	    printf("el resultado es : %f",res);
        }
        else
            {
                if(i==2)
        {
            printf("\ne = (%f + %f) * %f / %f\n",va1,va2,va3,va4);
	    res=(va1+va2)*va3/va4;
	    printf("el resultado es : %f",res); 
        }
        else
                {
                 printf("\ne = %f + (%f * %f) / %f\n",va1,va2,va3,va4);
	         res=va1+(va2*va3)/va4;
	         printf("el resultado es : %f",res);
                }
            }   
        }
    }
}
