#include<stdio.h>
#include<conio.h>
int main()
{
    int h,m,s,t;
    printf("DIGITAL CLOCK");
    for(h=0;h<=59;h++)
    {
        for(m=0;m<=59;m++)
        {
            for(s=0;s<=59;s++)
            {
                for(t=0;t<=222233;t++);
                gotoxy(35,12);
                printf("%d:%d:%d",h,m,s);
            }
        }
    }
    return 0;
}
