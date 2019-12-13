#include<stdio.h>
int main()
{
    long int num;
    int rem,sum=0;
    printf("Enter the number:");
    scanf("%ld",&num);
    while(num>0)
    {
        Start:
        rem=num%10;
        sum=sum+rem;
        num=num/10;
        if(rem==0)
            goto Stop;
            else
        goto Start;
        Stop:
printf("The sum of digits:%d",sum);}
    return 0;
}
