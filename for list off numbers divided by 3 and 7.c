#include<stdio.h>
int main()
{
    int i=100;
    Start:
    if(i%3==0&&i%7==0)
            printf("%d",i);
    if(i==300)
        goto Stop;
    i=i+1;
    goto Start;
    Stop:
        printf("\n\n");
        return 0;

}
