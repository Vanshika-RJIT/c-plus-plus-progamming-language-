#include<stdio.h>
int main()
{   int m1,m2,m3,m4,m5,tot;
    float per;
    printf("\nEnter the marks in 5 subjects:");
    scanf("%2d%2d%2d%2d%2d",&m1,&m2,&m3,&m4,&m5);
    tot=(m1+m2+m3+m4+m5);
    per=(tot*100)/500;
    printf("\nThe aggregate marks :%d",tot);
    printf("\nThe percentage      :%5.2f%%",per);
    return 0;
}
