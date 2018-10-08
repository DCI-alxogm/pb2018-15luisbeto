/*ARITMETICA CON APUNTADORES*/
#include<stdio.h>

int main(){

	int MAX = 3;
	int var[]={30,40,50};
	int i,*ptr;
	ptr = var;

	for(i=0;i<MAX;i++){
		printf("La dirección de la variable var[%d] =  %x\n",i,ptr);
		printf("Valor de la variable  var[%d] = %d\n",i,*ptr);
		ptr++;
	}
	return 0;
}
