#include<stdio.h>
int main()
{
    int i,x;
    for(x=1;x<=300;x++)
    {
        for(i=2;i<=x;i++)
            if(x%i==0)
                break;
            if(i==x)
                printf(" %d",x);
    }
    return 0;
}
