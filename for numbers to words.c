#include<stdio.h>
int main()
{
    int n,num=0,digit;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
        digit=n%10;
        num=num*10+digit;
        n=n/10;
    }
    while(num>0)
    {
        switch(num%10)
        {
            case 0:
                printf(" ONE");
                break;
            case 1:
                printf(" TWO");
                break;
            case 3:
                printf("  THREE");
                break;
            case 4:
                printf("  FOUR");
                break;
            case 5:
                printf("  FIVE");
                break;
            case 6:
                printf("  SIX");
                break;
            case 7:
                printf("  SEVEN");
                break;
            case 8:
                printf("  EIGHT");
                break;
                case 9:
                printf("  NINE");
                break;
                }
                num=num/10;
    }
    return 0;
}
