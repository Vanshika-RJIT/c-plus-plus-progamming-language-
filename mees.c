#include<stdio.h>
int main()
{
    int c,d;
    printf("Enter the two numbers C and D:");
    scanf("%d%d",&c,&d);
    c=c+d;
    d=c-d;
    c=c-d;
    printf("The successfully interchanged numbers:\nC:%d\nD:%d",c,d);
    return 0;
}
