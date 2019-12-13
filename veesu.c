#include<stdio.h>
int main()
{
    int num1,num2,num3,big;
    printf("Enter the three numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);
    big=num1>num2?num1>num3?num1:num3:num2>num3?num2:num3;
    printf("THE LARGEST NUMBER:%d",big);
    return 0;
}
