#include<stdio.h>
int main()
{
    struct books
    {
        char name[34];
        float rate;
        int pages;
        struct date
        {
         int day;
         int month;
         int year;
        }doi;
    }book1={"Vanshika",123,456,{12,04,2019}};
    printf("\n\n%s",book1.name);
    printf("\n\n%d",book1.pages);
    printf("\n\n%f",book1.rate);
    printf("\n\n%d:%d:%d",book1.doi.day,book1.doi.month,book1.doi.year);
    return 0;


}
