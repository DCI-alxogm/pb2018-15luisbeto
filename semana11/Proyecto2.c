#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int n,b,i,j,N;
	float l[4], e=1;	
	FILE *dat;
	dat=fopen("datos.txt","r");
	fscanf(dat,"%d",&b);
	N=b*b;
	n=b+1;
	float T[n][n], Tf[n][n];
	for(int k=0;k<4;k++){
	fscanf(dat,"%f",&l[k]);
	}
	fclose(dat);
	for(j=0;j<n;j++){
		for(i=0;i<n;i++){
			Tf[i][j]=0;
			T[i][j]=0;
		}
	}


	for(j=0;j<n;j++){
		for(i=0;i<n;i++){
			if(i==0){		
				T[i][j]=l[0];}
			if(j==0){
				T[i][j]=l[1];}
			if(i==n){
				T[i][j]=l[2];}
			if(j==n){
				T[i][j]=l[3];}
}}
	do{
	for(j=1;j<n;j++){
		for(i=1;i<n;i++){
			
		T[i][j]=n*(T[i+1][j]+T[i-1][j]+T[i][j+1]+T[i][j-1])/8;
		}
	}
	for(j=1;j<n;j++){
		for(i=1;i<n;i++){

		Tf[i][j]=n*(T[i+1][j]+T[i-1][j]+T[i][j+1]+T[i][j-1])/8;
		}
	}
	}while(abs((Tf[i][j]-T[i][j])/T[i][j])*100>e);

	FILE *df;
	df=fopen("resultados.txt","w");
	fprintf(df,"Las teperaturas son: \n");
	for(i=1;i<n;i++){
		for(j=1;j<n;j++){
			fprintf(df,"%f\t",Tf[i][j]);
		}
		fprintf(df,"\n");
	}
fclose(df);
return 0;
}
