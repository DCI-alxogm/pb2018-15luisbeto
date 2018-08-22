#include<stdio.h>

int opcion;

int main()
{
	printf("Teclea una opcion:\n");
	printf("\n1.-convertir temperaturas");
	printf("\n2.-convertir coordenadas");

	scanf("%d",&opcion);

	switch(opcion)
	{
	case 1:
		printf("entre la opcion 1");
		break;
	case 2:
		printf("entre la opcion 2");
		break;
	default:
		printf("opcion invalida");
		break;
	}
}
