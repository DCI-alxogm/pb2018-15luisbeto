#include<stdio.h>
#include<math.h>

void Temperatura();
void Coordenadas(int x, int y, int z);
int Factor(int c,int res);
int Primo();

int x,y,z;
int j,x,a=1;
int inicio,final,v,i;
int op,l=0;

int main(){
	
while(l<1){
	printf("seleciona una opcion\n");
	printf("1.-convertir temperaturas\n");
	printf("2.-convertir coordenadas\n");
	printf("3.-factorial de un numero\n");
	printf("4.-numeros primos\n");
	scanf("%d",&op);

	switch(op){

	case 1:
		Temperatura();
		printf("\nquires elegir otra opcion inserta porfavor un cero\nsi quires salir del programa incerta cualquier otro numero");
		scanf("%d",&l);

	break;

	case 2:
		printf("introduce tres x,y,z coordenadas:  ");
		scanf("%d%d%d",&x,&y,&z);
		Coordenadas(x,y,z);

		printf("\nquires elegir otra opcion inserta porfavor un cero\n si quires salir del programa incerta cualquier otro numero");
		scanf("%d",&l);
	break;

	case 3:
		printf("\nincerta un numero");
		scanf("%d",&x);

		for(j=0;j<x;j++){
			a=Factor(j,a);
			printf("\n %d",a);
		}
		printf("\nquires elegir otra opcion inserta porfavor un cero\n si quires salir del programa incerta cualquier otro numero");
		scanf("%d",&l);
	break;

	case 4:
		printf("inserte un valor inicial:  ");
		scanf("%d",&inicio);
		printf("inserte un valor final:  ");
		scanf("%d",&final);
		for(i=inicio;i<=final;i++)
		{
		v=Primo();
			if(v==2)
		{
			printf("%d\t",i);
		}
		}
		printf("\nquires elegir otra opcion inserta porfavor un cero\n si quires salir del programa incerta cualquier otro numero");
		scanf("%d",&l);
	break;

	default:
		printf("porfavor seleciona una opcion");
	break;

	l=0;
		}
	}
return 0;
}

void Temperatura(){

	float c,k,f;
	printf("introduce una temperatura en °C:  ");
	scanf("%f",&c);

	k = c+273.15;
	f = (c*1.8)+32;
	c = (f-32)/1.8;

	printf("la temperatura en °k es: %f\n",k);
	printf("la temperatura en °F es: %f\n",f);
        printf("la temperatura en °C es: %f\n",c); 
	
}
void Coordenadas(int x, int y, int z){
		float p,r,o;
		r= sqrt((x*x)+(y*y)+(z*z));
		o=acos(z/r);
		p= atan(y/x);
	printf("las coordenadas esfericas en radianes son: %f, %f, %f\n",r,o,p);
}

int Factor(int c,int res){
	c=c+1;
	res=c*res;
return (res);
}

int Primo(){
		int res=0,k;
		for(k=1;k<=100;k++)
		{
			if(i%k==0)
			{
				res++;
			}
		}
return (res);
}

