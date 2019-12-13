//To find the largest number from given four numbers
#include<stdio.h>
int main()
{
    int num1,num2,num3,num4,big;
    printf("Enter the four numbers:");
    scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
    if(num1>num2)
        if(num1>num3)
        if(num1>num4)
        big=num1;
    else
        big=num4;
    else
        if(num3>num4)
        big=num3;
    else
        big=num4;
    else
        if(num2>num3)
        if(num2>num4)
        big=num2;
    else
        big=num4;
    else
        if(num3>num4)
            big=num3;
        else
            big=num4;
        printf("THE LARGEST NUMBER IS %d",big);
        return 0;
}
