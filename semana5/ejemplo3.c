#include<stdio.h>
#include<math.h>

float res;
int n=3,k,j;

int main()
{
	for(j=0;j<n;j++)
	{
		for(k=0;k<n;k++)
		{
			res=j*k*1.0;
			printf("%d %d %f\n",j,k,res);
		}
	}
}
