#include<stdio.h>
int main()
{
    long int num;
    int rem1,rem2,sum1=0,sum2=0;
    printf("Enter the number:");
    scanf("%ld",&num);
    while(num>0)
    {
        rem1=num%10;
        sum1=sum1+rem1;
        num=num/10;
    }
    sum1=num;
    while(num>0)
    {
        rem2=num%10;
        sum2=sum2+rem2;
        num=num/10;
    }
    printf("The sum of Digits:%d",sum2);
    return 0;

}
