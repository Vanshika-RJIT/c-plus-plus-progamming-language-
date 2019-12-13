#include<stdio.h>
int main()
{
    int x[10];
    int i,sum=0;
    float avg;
    printf("Enter the numbers(1 to 10) for which you want to find average    : ");
    for(i==0;i<=9;i++)
    scanf("%d",&x[i]);

    for(i==0;i<=9;i++)
    sum=sum+x[i];

    printf("The sum is %d",sum);
    avg=sum/10.0;
    printf("The average is %f",avg);
    return 0;
}
