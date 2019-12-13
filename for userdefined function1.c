#include<stdio.h>
void main(void)
{
    void add10(int *x);
    int a=10;
    printf("\nThe given value of A:%d",a);
    add10(&a);
    printf("\nThe given value of A:%d",a);
    }
    void add10(int *x)
    {
        *x=*x+10;
        printf("\nThe new value:%d",*x);
    }
