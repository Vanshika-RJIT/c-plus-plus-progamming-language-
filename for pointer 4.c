#include<stdio.h>
int main()
{
    int x[4][4]={{1234},{5679},{2344},{4556}};
    int *px[4],i,j;
    for(i=0;i<4;i++)
    {
        px[i]=x[i];
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%4d",*(*(px+i)+j));
        }
        printf("\n");

    }

    return 0;
}
