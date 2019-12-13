#include<stdio.h>
int main()
{
    int x,i;
    printf("Enter the number:");
    scanf("%d",&x);
    for(i=2;i<=x-1;i++)
        if(x%i==0)
        break;
    if(i==x)
        printf("The number %d is prime",x);
        else
            printf("The number %d is not prime",x);
        return 0;
}
