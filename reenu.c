#include<stdio.h>
int main()
{
    int c,d,temp;
    printf("Enter the values of C and D:");
    scanf("%d%d",&c,&d);
    temp=c;
    c=d;
    d=temp;
    printf("The successfully interchanged numbers:\nC=%d\nD=%d",c,d);
    return 0;
}
