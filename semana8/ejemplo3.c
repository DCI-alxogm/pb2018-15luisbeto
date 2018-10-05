/*ARITMETICA CON APUNTADORES*/
#include <stdio.h> 

int main () { 

 	int MAX = 3;
 	int a[]={10, 100, 200};
	int i, *ptr; 
 	 
 	ptr = a;	//Asignamos la dirección del arreglo al apuntador
 
 	for ( i = 0; i < MAX; i++) { 
		 printf("la dirección de la variable var[%d] = %x\n", i, ptr); 
		 printf("Valor de la variable var[%d] = %d\n", i, *ptr );	// nos movemos a la siguiente posición en la memoria
		 ptr++; 
	}
 
 	return 0; 
}
