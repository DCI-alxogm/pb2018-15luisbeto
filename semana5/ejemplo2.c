#include<stdio.h>
#include<math.h>

float exp_;
int n=10,j;

int main()
{
	for(j=0;j<n;j++)
	{
		exp_=exp(j);
		printf("%i \t %f\n",j,exp_);
	}
}
