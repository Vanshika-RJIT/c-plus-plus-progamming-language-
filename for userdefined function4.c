#include<stdio.h>
void main(void)
{
    void calcsum(void);
    calcsum();
    }
    void calcsum(void)
    {
        int x,y,z,s;
        printf("\nThe value of X:");
    gets(x);
    printf("\nThe value of Y:");
    gets(y);
    printf("\nThe value of Z:");
    gets(z);
        s=x+y+z;
        printf("The Sum:%d",s);
        }

