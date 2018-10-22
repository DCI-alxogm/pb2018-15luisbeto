#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int n,i,j,N;
	float T[i][j], Tf[i][j], l[4], e;	
	FILE *dat;
	dat=fopen("datos.txt","r");
	for(int k=0;k<4;k++){
	fscanf(dat,"%f",&l[k]);
	}
	fscanf(dat,"%d",&n);
	fclose(dat);
	N=n*n;
	for(j=1;j<n;j++){
		for(i=1;i<n;i++){
			Tf[i][j]=0;
			T[i][j]=0;
		}
	}
	for(j=1;j<(n-1);j++){
		for(i=1;i<(n-1);i++){
			while (abs((Tf[i][j]-T[i][j])/T[i][j])>e){
			Tf[i][j]=T[i][j];
			Tf[i][j]=(T[i+1][j]+T[i-1][j]+T[i][j+1]+T[i][j-1])/4;
			}
		}
	}
	FILE *df;
	df=fopen("resultados.txt","w");
	fprintf(df,"Las teperaturas son: \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			fprintf(df,"%f\t",Tf[i][j]);
		}
		fprintf(df,"\n");
	}
fclose(df);
return 0;
}
