#include<stdio.h>
void main(void)
{
    int calcsum(int a,int b,int c);
    int x,y,z,s;
    printf("The value of X:");
    gets(x);
    printf("The value of Y:");
    gets(y);
    printf("The value of Z:");
    gets(z);
    s=calcsum(x,y,z);
    printf("Sum=%d",s);
    }
    int calcsum(int a,int b,int c)
    {
        int d;
        d=a+b+c;
        return(d);
        }
