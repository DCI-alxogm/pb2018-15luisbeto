#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int n,b,i,j,N;
	float l[4]; 
	double e=.000000001,p=0;	
	FILE *dat;
	dat=fopen("datos.txt","r");
	fscanf(dat,"%d",&b);
	N=b*b;
	n=b+2;
	float T[n][n], Tf[n][n];
	for(int k=0;k<4;k++){
	fscanf(dat,"%f",&l[k]);
	}
	fclose(dat);
	for(i=0;i<=n;i++){
		for(j=0;j<=n;j++){
			Tf[i][j]=0;
			T[i][j]=0;
		}
	}


	for(i=1;i<n-1;i++){
			T[i][0]=l[3];
			T[i][n-1]=l[1];
}
		for(j=1;j<n-1;j++){
			T[0][j]=l[0];
			T[n-1][j]=l[2];
}

do{
	for(j=1;j<n-1;j++){
		for(i=1;i<n-1;i++){		
			
		T[i][j]=(T[i+1][j]+T[i-1][j]+T[i][j+1]+T[i][j-1])/4;
		T[i][j]=(1.5*T[i][j])-(0.5*Tf[i][j]);
		p=0;
		if(sqrt(pow((T[i][j]-Tf[i][j])/T[i][j],2))*100>p){
		p=sqrt(pow((T[i][j]-Tf[i][j])/T[i][j],2))*100;
		}
		Tf[i][j]=T[i][j];
}
}
}while(p>e);


	FILE *df;
	df=fopen("resultados.txt","w");
	fprintf(df,"Las teperaturas son: \n");
	for(j=n-2;j>0;j--){
		for(i=1;i<n-1;i++){
			fprintf(df,"%f\t",T[i][j]);
		}
		fprintf(df,"\n");
	}
fclose(df);
return 0;
}
