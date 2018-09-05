#include<stdio.h>

int inicio,final,res;
int i,res,k;

int main()
{
	printf("inserte un valor inicial:  ");
	scanf("%d",&inicio);
	printf("inserte un valor final:  ");
	scanf("%d",&final);

	for(i=inicio;i<=final;i++)
	{
		res=0;
		for(k=1;k<=100;k++)
		{
			if(i%k==0)
			{
				res++;
			}
		}
		if(res==2)
		{
			printf("%d, ",i);
		}
	}
}
