#include <stdio.h>

int main(int arg, char *argv[]){

	printf("El programa que estas ejecutando es: %s\n", argv[0]);

	char *nombre_archivo;

	FILE *fp;
	if(arg==2){

		nombre_archivo=argv[1];
		printf("El nombre del archivo es: %s \t %s \n", 		argv[1], nombre_archivo);

		fp = fopen(nombre_archivo, "w");
		int N=18;
		fprintf(fp, "%i", N);
		fclose(fp);

	}

	else if(arg>2){

		printf("Mas argumentos de los necesarios\n");

	}
	else{

		printf("Se requiere de al menos 1 argumento \n");

	}

	return 0;
}
