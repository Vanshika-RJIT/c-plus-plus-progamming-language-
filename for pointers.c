#include<stdio.h>
int main()
{
    int x=12;
    int *px;
    px=&x;
    printf("The value of x:%d",*px);
    printf("The address of x:%u",px);
    printf("The value of x:%d",x);
    return 0;

}
