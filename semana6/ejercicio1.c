#include<stdio.h>

int i,N;

int main()
{
printf("\nInserta el nunmero de alumnos\n");
scanf("%d",&N);
int sem1=0,sem2=0,sem3=0,sem4=0,sem5=0,sem6=0,sem7=0,sem8=0,sem9=0,semestre[N],mujer,hombre,sexo[N];
float edad[N],cal[N];
float e,c,edadr,calr;

for(i=0;i<N;i++)
{
printf("cual es tu edad?\n");
scanf("%d",&edad[i]);
printf("sexo (0.-hombre, 1.-mujer):\n");
scanf("%f",&sexo[i]);
printf("cual semestre vas(1-9)\n");
scanf("%d",&semestre[i]);
printf("calificación de la carrera):\n");
scanf("%f",&cal[i]);

edadr=edadr+edad[i];
mujer=mujer+sexo[i];
calr=calr+cal[i];

if(semestre[i]==1)sem1=sem1+1;
if(semestre[i]==2)sem2=sem2+1;
if(semestre[i]==3)sem3=sem2+1;
if(semestre[i]==4)sem4=sem4+1;
if(semestre[i]==5)sem5=sem5+1;
if(semestre[i]==6)sem6=sem6+1;
if(semestre[i]==7)sem7=sem7+1;
if(semestre[i]==8)sem8=sem8+1;
if(semestre[i]==9)sem9=sem9+1;

}
e=edadr/N;
hombre=N-mujer;
c=calr/N;

printf("\nSe capturaron %d,de los cuales %d son mujeres y %d son hombres, la edad promedio es %f\n",N,mujer,hombre,e);
printf("EL numero de estudiantes por semestre es:\nPrimero = %d\nSeundo = %d\nTercero = %d\nCuarto = %d\nQuinto = %d\nSexto = %d\nSeptimo = %d\nOctavo = %d\nNoveno = %d",sem1,sem2,sem3,sem4,sem5,sem6,sem7,sem8,sem9);
printf("\nEl promedio de calificacion de los estudiantes es= %f)",c);
}
