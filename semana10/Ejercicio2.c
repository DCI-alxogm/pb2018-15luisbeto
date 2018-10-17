#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(int arg, char *argv[]){

	printf("EL nombre de el programa ejecutado es: %s\n",argv[0]);
	
	int p,a,b,n,espaciador,x;
	float h=0,suma=0,fx,resultado,k;
	char *nombre;
	nombre = argv[1];

	FILE*data;
	data=fopen(nombre,"w");

	p =atof (argv[2]);
	a =atof (argv[3]);
	b =atof (argv[4]);
	n =atof (argv[5]);
	k =atof (argv[6]);
	
	espaciador=(b-(a-1))/n;

	for(int i=a;i<=b;i=i+espaciador){
		x=pow(i,p); 
		h=(i-a)/k;

	for(int j=1;j<k;j++){
		suma=suma+pow((a+j*k),p);
		}

	fx=(pow(a,p)+pow(i,p))/2;
	resultado=h*(fx+suma);

	fprintf(data,"EL número %d elevado a la potencia %d es igual a %d y la integral correspondiantes es: %f\n",i,p,x,resultado);
	}

	fclose(data);	
	return 0;
}
