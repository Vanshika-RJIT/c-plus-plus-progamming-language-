#include<stdio.h>
int main()
{
    long int num,r=0,rem;
    printf("Enter the number:");
    scanf("%ld",&num);
    while(num>0)
    {
        rem=num%10;
        r=r*10+(rem+1);
        num=num/10;
    }
     num=r;
    r=0;
    while(num>0)
    {
        rem=num%10;
        r=r*10+rem;
        num=num/10;
    }

    printf("The new number:%ld",r);
    return 0;
}
