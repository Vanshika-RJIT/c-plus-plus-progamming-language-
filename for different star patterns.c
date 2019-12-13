#include<stdio.h>
int main()
{
	int i,j;
	char alpha1='A',alpha2='E';
	for(i=1;i<=(alpha2-alpha1+1);i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",alpha1);
		}
		alpha1++;
		printf("\n");
	}
	return 0;
}
