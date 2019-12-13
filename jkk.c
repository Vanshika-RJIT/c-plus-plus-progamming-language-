#include<stdio.h>
int main()
{
    int yr;
    printf("Enter a year:");
    scanf("%d",&yr);
    if(yr%4==0)
        printf("THE YEAR IS LEAP YEAR");
    else
        printf("THE YEAR IS NOT A LEAP YEAR");
        return 0;
}
