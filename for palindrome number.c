#include<stdio.h>
int main()
{
    int oi,ri=0,i,n,rem;
    printf("Enter the number:");
    scanf("%d",&n);
    oi=n;
    while(n>0)
    {
        rem=n%10;
        ri=ri*10+rem;
        n=n/10;
    }
    if(oi==ri)
        printf("The number %d is palindrome",oi);
    else
        printf("The number %d is not palindrome",oi);

    return 0;
}
