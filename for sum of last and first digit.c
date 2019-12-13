#include<stdio.h>
int main()
{
    long int num,lastdigit,firstdigit,sum=0;
    printf("Enter the four digit number:");
    scanf("%ld",&num);
    lastdigit=num%10;
    firstdigit=num;
    while(num>10)
    {
        num=num/10;
    }
    firstdigit=num;
    sum=firstdigit+lastdigit;
    printf("THE SUM OF FIRST AND LAST DIGIT:%d",sum);
    return 0;


}
