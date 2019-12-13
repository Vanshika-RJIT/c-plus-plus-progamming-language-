#include<stdio.h>
#include"my function2.c"
int main()
{
    int n,r,ncr;
    printf("Enter the n:");
    scanf("%d",&n);
    printf("Enter the r:");
    scanf("%d",&r);
    ncr=fact(n)/(fact(r)*fact(n-r));
    printf("%d",ncr);
    return 0;

}
