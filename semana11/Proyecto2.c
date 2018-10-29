#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void result(float a, float b);
float abso(float x, float y);
int main(){
	int n,i,j,N,q=0;
	//q es un contador
	float l[4];
	// el vector l[] es el vector donde se vana guardar las temperaturas iniciales de las orillas de la placa
	char nombre[20];
	// el vector nombre[] es el la variable que va a cambiar el nommbre de los de los archivos de resultados que se creen.
	float e,p=0,VA;
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
	float T[n][n], Tf[n][n];
	// Declaración de las matrices "T[][]" temperaturas finales y "Tf[][]" temperaturas anteriiores.
	for(int k=0;k<4;k++){
	fscanf(dat,"%f",&l[k]);
	}
	fscanf(dat,"%f",&e);
	fclose(dat);

	// inicialización de llas matricez a cero
	for (int i=1;i<=n;i++){
	for(int j=0;j<=n;j++){
	T[i][j]=0;
	Tf[i][j]=0;
}
}
	
	//asignación de las temperaturas de las orillas de la placa.
	for(i=1;i<n-1;i++){
			T[i][0]=l[3];
			T[i][n-1]=l[1];
}
		for(j=1;j<n-1;j++){
			T[0][j]=l[0];
			T[n-1][j]=l[2];
}
// un do while para repetir el proceso hasta llegar a un equilibrio. 
do{
	p=0;
	for(j=1;j<n-1;j++){
		for(i=1;i<n-1;i++){		
		
		T[i][j]=(T[i+1][j]+T[i-1][j]+T[i][j+1]+T[i][j-1])/4;
		// signación de valores
		result(T[i][j], Tf[i][j]);
		//valor absuluto
		VA = abso(T[i][j],Tf[i][j]);
		if(VA>p){
		p=VA;
		}
		// asignación de la variacón a p.

		// asignación de la temperatura anteriór
		Tf[i][j]=T[i][j];
		}
	}

	// asignación del nombre del archivo a crear
	sprintf(nombre, "%dresultados.txt",q);
	// archivo a crear	
	FILE *df;
	// si las temperaturas aun no ñlegan a su quilibro escribir en el archivo resultados cada 5 veces.
	if(p>e&&q%5==0){
	df=fopen(nombre,"w");
	}
	// si ya llego a su equilibro imprimir los datoe en el archivo Equiliibrio.txt
	else{
	df=fopen("Equilibrio.txt","w");
	}
	// Forma de imprimir los resultados
	fprintf(df,"Las teperaturas son: \n");
	for(j=n-2;j>0;j--){
		for(i=1;i<n-1;i++){
			fprintf(df,"%f\t",T[i][j]);
		}
		fprintf(df,"\n");
	}
fclose(df);
q++; 
}while(p>e&& q<100);

printf("  %d\n",q);
return 0;
}
