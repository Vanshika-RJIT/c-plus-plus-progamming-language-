#include<stdio.h>
int main()
{
    int x[10]={1,2,3,4,5,6,7,8,9,0};
    int *px,i;
    px=&x[9];
    for(i=9;i>=0;i--)
    {
        printf("\n\n%d",*px);
        px--;

    }
    return 0;
}
