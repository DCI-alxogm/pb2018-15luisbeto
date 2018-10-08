/*USO DE APUNTADORES*/
#include<stdio.h>

int main(){

	int var=20;	//declaración de la variable
	int *ip;	//declaración de el apuntador
	/*asignación de la diracción a el apuntador*/
	ip = &var;	// el "&" en la variable significa la direccion donde esta guardad la variable
	
	printf("La declaración de la variable var es: %x\n",&var);
	printf("Dirección guardada en el apuntador ip: %X\n",ip);
	printf("El valor de ip: %d\n",*ip);	//el "*" indica el valor guaradado en esa dirección
	return 0;
}
