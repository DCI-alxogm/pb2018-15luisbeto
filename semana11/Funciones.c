#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void cuerpo(int n, double e, double p, float tem, float tem1, float tem2, float tem3){
	double T[n][n], Tf[n][n], VA;
	char nombre[20];
	int q=0,c=1,i,j;
	// inicialización de llas matricez a cero
	for (i=1;i<=n;i++){
	for(j=0;j<=n;j++){
	T[i][j]=0;
	Tf[i][j]=0;
}
}
	
	//asignación de las temperaturas de las orillas de la placa.
	for(i=1;i<n-1;i++){
			T[i][0]=tem3;
			T[i][n-1]=tem1;
}
		for(j=1;j<n-1;j++){
			T[0][j]=tem;
			T[n-1][j]=tem2;
}
// un do while para repetir el proceso hasta llegar a un equilibrio. 
do{
	for(j=1;j<n-1;j++){
		for(i=1;i<n-1;i++){		
		
		T[i][j]=(T[i+1][j]+T[i-1][j]+T[i][j+1]+T[i][j-1])/4;
		// signación de valores
		T[i][j]=(1.5*T[i][j])-(0.5*Tf[i][j]);
		//valor absuluto

		
		// asignación de la variacón a p.

		// asignación de la temperatura anteriór
		Tf[i][j]=T[i][j];
		}
	}

	// asignación del nombre del archivo a crear
	sprintf(nombre, "%dresultados.txt",c);
	// archivo a crear	
	FILE *df;
	// si las temperaturas aun no ñlegan a su quilibro escribir en el archivo resultados cada 5 veces.
	if(q%50==0){
	df=fopen(nombre,"w");
	c++;
	// Forma de imprimir los resultados
	for(j=n-2;j>0;j--){
		for(i=1;i<n-1;i++){
			fprintf(df,"%lf\t",T[i][j]);
		}
		fprintf(df,"\n");
	}
fclose(df);
}
q++; 
}while(q<3000);

printf("  %d\n",q);
}
