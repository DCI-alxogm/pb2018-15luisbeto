#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//inicio
void inicio(int n){
float T[n][n], Tf[n][n];
for (int i=1;i<=n;i++){
	for(int j=0;j<=n;j++){
	T[i][j]=0;
	Tf[i][j]=0;
}
}
}


void result(float a, float b){
	a=(1.5*a)-(0.5*b);
}

//valor absoluto
float abso(float x, float y){
	return (sqrt(pow(((x-y)/x),2))*100);
}

