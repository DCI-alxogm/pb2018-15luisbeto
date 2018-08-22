
#include<stdio.h>
#include<math.h>

int x,y,z;
float r,o,p;

int main()
{
	printf("introduce tres x,y,z coordenadas:  ");
	scanf("%d%d%d",&x,&y,&z);
	
	r= sqrt((x*x)+(y*y)+(z*z));
	o=acos(z/r);
	p= atan(y/x);
	printf("las coordenadas esfericas en radianes son: %f, %f, %f\n",r,o,p);
}

