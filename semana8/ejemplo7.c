/*EJEMPLO: ENCONTRAR LA SUMA DE 6 NÚMEROS 
GUARDADOS EN UN ARREGLO. (DECLARANDO UN ARREGLO 
Y MANIPULÁNDOLO COMO APUNTADOR)*/
#include <stdio.h> 
#include <stdlib.h>

int main(){
 
	 int i, num[6],sum = 0; 
	 printf("Introduce 6 números enteros:\n"); 

	 for(i = 0; i < 6; ++i){
  
		 scanf("%d",(num + i));	// (num + i) es equivalente a &num[i] 
		 sum += *(num + i); 	// *(num + i) es equivalente a num[i]
	 } 

	 printf("Suma = %d", sum); 

	 return 0; 
}
