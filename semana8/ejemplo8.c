/*EJEMPLO: ENCONTRAR LA SUMA DE 6 NÚMEROS 
GUARDADOS EN UN ARREGLO (DECLARANDO UN 
APUNTADOR Y MANIPULANDO COMO ARREGLO)*/
#include <stdio.h> 
#include <stdlib.h>

int main(){
 
	 int i, sum = 0; 
	 int *num; 
	 printf("Introduce 6 números enteros:\n"); 
	 num=(int*) malloc(6 * sizeof(int));

	 for(i = 0; i < 6; ++i){ 
 
		 scanf("%d",&num[i]);	// (num + i) es equivalente a &num[i] 
		 sum +=num[i];		// *(num + i) es equivalente a num[i]
	 } 

	 printf("Suma = %d", sum); 

	 return 0;
}
