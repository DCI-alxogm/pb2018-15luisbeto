#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(int arg, char *argt[]){

	int p,a,b,n,espaciador,x;
	float h=0,suma=0,fx,resultado,k;
	FILE*data;
	data=fopen("potencia.txt","r");

	fscanf(data,"%d %d %d %d %f",&p,&a,&b,&n,&k); 
	
	espaciador=(b-(a-1))/n; 

	fclose(data);


	FILE*res; 
	res=fopen("resultados.txt","w");
	
	for(int i=a;i<=b;i=i+espaciador){
		x=pow(i,p); 
		h=(i-a)/k;

	for(int j=1;j<k;j++){
		suma=suma+pow((a+j*k),p);
		}

	fx=(pow(a,p)+pow(i,p))/2;
	resultado=h*(fx+suma);

	fprintf(res,"EL número %d elevado a la %d potencia es igual a %d y la integral correspondiantes es: %f\n",i,p,x,resultado);
	}

	fclose(res);	
	return 0;
}
