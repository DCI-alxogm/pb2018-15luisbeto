#include<stdio.h>
#include<math.h>
#include<stdlib.h>

// asignación del valor T nueva
void result(float a, float b){
	a=(1.5*a)-(0.5*b);
}

//valor absoluto
float abso(float x, float y){
	return (sqrt(pow(((x-y)/x),2))*100);
}

