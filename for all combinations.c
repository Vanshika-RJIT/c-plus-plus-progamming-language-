#include<stdio.h>
void main()
{
    int a=0,b=0,c=0;
    for(a=1;a<=3;a++)
    {
        for(b=1;b<=3;b++)
        {
            for(c=1;c<=3;c++)
            {
                if(a!=b && b!=c && c!=a)
                   {
                       printf("%d %d %d\n",a,b,c);
                       }

            }
        }
    }

}