/* este es el primer programa de la segumda semana*/
#include<stdio.h>

int edad;
int a;
int incremento;
int edadact;
int i=2028;
char n[15];

int main()
{
    printf ("Hola : ");
    scanf ("%s", &n);
    printf ("Primer programa del curso, semana 2\n");
    printf ("Intruduce el año actual : ");
    scanf ("%d", &a);
    printf ("introduce tu edad : ");
    scanf ("%d", &edad);
    
    incremento = a-i;
    edadact = edad-incremento;
    
    printf("%s tu edad en 2028 es : %d\n ",n,edadact);
    return 0;
} 
