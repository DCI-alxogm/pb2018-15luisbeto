/*este programa almacena datos de 10 estudiantes y realiza un resumen de los datos*/
#include<stdio.h>

int main()
{
FILE* archivo;
FILE* data;
int i,j,N=10,sem[8],semestre[N],mujer=0,hombre=0,sexo[N];
float edad[N],cal[N],e=0,c=0,edadr=0,calr=0;
data=fopen("información.txt","r");
//inicializar el vector
for(j=0;j<9;j++){
	sem[j]=0;
}
for(i=0;i<N;i++)
{
//lectura de datos

fscanf(data,"%f %d %d %f",&edad[i],&sexo[i],&semestre[i],&cal[i]);

//almacenamiento se datos
edadr=edadr+edad[i];
mujer=mujer+sexo[i];
calr=calr+cal[i];

//conteo de personas por semestre
for(j=1;j<=9;j++){
	if(semestre[i]==j){
	sem[j-1]++;
	}
}

}
//las operaciones para imprimir los resultados
e=edadr/N;
hombre=N-mujer;
c=calr/N;
fclose(data);

printf("\nSe capturaron %d,de los cuales %d son mujeres y %d son hombres, la edad promedio es %f\n",N,mujer,hombre,e);
printf("EL numero de estudiantes por semestre es:\nPrimero = %d\nSeundo = %d\nTercero = %d\nCuarto = %d\nQuinto = %d\nSexto = %d\nSeptimo = %d\nOctavo = %d\nNoveno = %d",sem[0],sem[1],sem[2],sem[3],sem[4],sem[5],sem[6],sem[7],sem[8]);
printf("\nEl promedio de calificacion de los estudiantes es= %f)",c);

//esta parte crea el archivo .txt
archivo = fopen("resultados.txt","w");
fprintf(archivo, "\nSe capturaron %d,de los cuales %d son mujeres y %d son hombres, la edad promedio es %f\n",N,mujer,hombre,e);
fprintf(archivo, "EL numero de estudiantes por semestre es:\nPrimero = %d\nSeundo = %d\nTercero = %d\nCuarto = %d\nQuinto = %d\nSexto = %d\nSeptimo = %d\nOctavo = %d\nNoveno = %d",sem[0],sem[1],sem[2],sem[3],sem[4],sem[5],sem[6],sem[7],sem[8]);
fprintf(archivo, "\nEl promedio de calificacion de los estudiantes es= %f)",c);
fclose(archivo);

}
