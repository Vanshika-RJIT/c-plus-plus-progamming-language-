#include<stdio.h>
int main()
{
    int i;
    struct books
    {
     char name[34];
     float rate;
     int pages;
    }
    book[3]={{"vansu",123,456},
    {"mansi",234,567},
    {"Tanya",465,787}};
    for(i=0;i<3;i++)
    {
        printf("\n\n%s",book[i].name);
        printf("\n\n%d",book[i].pages);
        printf("\n\n%f",book[i].rate);
    }
    return 0;
}
