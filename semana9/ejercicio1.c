#include<stdio.h>
#include<stdlib.h>

int main(){

	int i, b;
	float *prom, res, promedio;
	printf("Introduce el numero de elementos: ");
	scanf("%d",&b);
	prom = (float*) calloc(b, sizeof(int));
	FILE *data;
	data=fopen("promedio.txt","r");
	for(i=0;i<b;i++){

		fscanf(data,"%f", (prom+i));
	}
	fclose(data);
	
	if(prom==NULL){
		printf("ERROR! memoria no reservada");
		exit(0);
	}

	for(i=0;i<b;i++){
		res=res+*(prom +i);
	}

	promedio=res/b;
	printf("El promedio de los datos es: %f",promedio);

free(prom);
return 0;
}
