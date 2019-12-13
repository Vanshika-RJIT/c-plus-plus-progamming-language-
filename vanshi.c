#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num%2==0)
        printf("THE GIVEN NUMBER IS EVEN");
    else
        printf("THE GIVEN NUMBER IS ODD");
    return 0;
}
