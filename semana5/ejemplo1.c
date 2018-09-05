#include<stdio.h>

float temp_c,temp_k;
float Tem_C,final,delta,n;
int i;

int main()
{
	printf("inserta temperatura inicial");
	scanf("%f",&Tem_C);
	printf("\ninserta temperatura final");
	scanf("%f",&final);
	printf("\ninsertar el espaciador que desea");	
	scanf("%f",&n);

	delta = (final-Tem_C)/n;
	temp_c = Tem_C;
	for(i=0;i<n;i++)
	{
		temp_k=temp_c+273.15;
		printf("%f  %f\n",temp_c,temp_k);
		temp_c=temp_c+delta;		
	}
return 0;
}
