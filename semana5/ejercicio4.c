#include<stdio.h>

int bin[8];
int i;
int main()
{
	printf("inserta un numero binario : ");
	scanf("%s",bin);
	for(i=7;i>=0;i--)
	{
	printf("%s",bin[i]);
	}
}
