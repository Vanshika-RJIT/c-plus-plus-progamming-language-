#include <stdio.h>
int xor;
int main()
{
	for(int i=l;i<=r;i++)
	{
		xor=xor^i;
	}
	printf("%d\n",xor);
	if(xor%2==0)
		printf("even");
	else 
		printf("odd");
		return 0;
}
