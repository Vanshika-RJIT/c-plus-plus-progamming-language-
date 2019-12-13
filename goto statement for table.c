#include<stdio.h>
int main()
{
    int i=1,n,t;
    printf("Enter the number:");
    scanf("%d",&n);
    Start:
    t=n*i;
    printf("\n\n%d*%d=%d",n,i,t);
    if(i==10)
    goto Stop;
    i=i+1;
    goto Start;
    Stop:
    printf("\n\n");
    return 0;

}
