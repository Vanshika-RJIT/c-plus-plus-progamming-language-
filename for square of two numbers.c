#include<stdio.h>
#define min(x,y)(x)<(y)?(x):(y)
int main()
{
    int b,c;
    printf("Enter the values of b and c:");
    scanf("%d%d",&b,&c);
    printf("min=%d",min(b,c));
    return 0;
}
