#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void cuerpo(int n, double e, double p, float tem, float tem1, float tem2, float tem3);
int main(){
	int n,i,j,N,q=0;
	//q es un contador
	float l[4];
	// el vector l[] es el vector donde se vana guardar las temperaturas iniciales de las orillas de la placa
	char nombre[20];
	// el vector nombre[] es el la variable que va a cambiar el nommbre de los de los archivos de resultados que se creen.
	double e,p=0;
	//e es el marjen de erros que minimo que puede tener la tabla, y p es la variación de temperatura que entre la temperatura anterior y la temperatura final.	

	FILE *dat;
	dat=fopen("datos.txt","r");
	//dato.txt es el archi previamente creado de donde se leeran los datos iniciales.
	fscanf(dat,"%d",&n);
	// n es el nnumero de puntos por lado que hay en la placa
	N=n*n;
	// N es el numero de puntos totales en la placa.
	n=n+2;
	// la n se le suman 2, para que que la matriz obtenga las dimenciones correctas de los puntos dados.
	// Declaración de las matrices "T[][]" temperaturas finales y "Tf[][]" temperaturas anteriiores.
	for(int k=0;k<4;k++){
	fscanf(dat,"%f",&l[k]);
	}
	fscanf(dat,"%lf",&e);
	printf("%lf",e);
	fclose(dat);
	cuerpo( n, e, p, l[0], l[1], l[2], l[3]);

return 0;
}
