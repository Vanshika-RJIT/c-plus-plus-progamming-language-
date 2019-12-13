#include<stdio.h>
int main()
{
    int a,b,c,sum;
    printf("Enter the three angles:");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    if(sum==180)
        printf("THE TRIANGLE IS VALID");
    else
        printf("THE TRIANGLE IS NOT VALID");
    return 0;
}
