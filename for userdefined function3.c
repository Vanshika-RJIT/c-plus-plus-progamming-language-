#include<stdio.h>
void main(void)
{
    void calcsum(int a,int b,int c);
    int x,y,z;
    printf("The value of X:");
    gets(x);
    printf("The value of Y:");
    gets(y);
    printf("The value of Z:");
    gets(z);
    calcsum(x,y,z);
    }
    void calcsum(int a,int b,int c)
    {
        int d;
        d=a+b+c;
        printf("The Sum:%d",d);
        }
