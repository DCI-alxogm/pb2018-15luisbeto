#include<stdio.h>
#include<stdlib.h>

int main(){

	int i, b;
	float *datos, res=0.0;
	printf("Introduce el numero de elementos: ");
	scanf("%d",&b);
	datos = (float*) calloc(b, sizeof(int));
	FILE *data;
	data=fopen("num_maximo.txt","r");
	for(i=0;i<b;i++){

		fscanf(data,"%f", (datos+i));
	}
	fclose(data);
	
	if(datos==NULL){
		printf("ERROR! memoria no reservada");
		exit(0);
	}

	for(i=0;i<b;i++){
		if(res<*(datos+i)){
		res=*(datos+i);
	}
}
	printf("EL numero mayor del archivo es: %f",res);
free(datos);

return 0;
}
