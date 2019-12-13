
#include<stdio.h>
int main()
{
    char gender,quali,m,f,pg,g;
    int y_o_s,sal;
    printf("Enter the gender,qualifications and years of service:");
    scanf("%f%f%d",&gender,&quali,&y_o_s);
    if(gender==m&&y_o_s>=10&&quali==pg)
        printf("The salary is RS.15000");
    else if(gender==m&&y_o_s>=10&&quali==g)
        printf("The salary is RS.10000");
    else if(gender==m&&y_o_s<10&&quali==pg)
        printf("The salary is RS.1000");
        else if(gender==f&&y_o_s>=10&&quali==pg)
            printf("The salary is RS.12000");
            else if(gender==f&&y_o_s>=10&&quali==g)
            printf("The salary is RS.9000");
            else if(gender==f&&y_o_s<10&&quali==pg)
                printf("The salary is RS.10000");
            else
                printf("The salary is RS.6000");
            return 0;

            }

