#include<stdio.h>
void display(struct booksx);
struct books
{
    char name[35];
    int pages;
    float rate;
    struct date
    {
        int day;
        int month;
        int year;

    }doi;

} books1={"nidhe&premu",123,567,{12,03,2019}};
int main()
{
    display(books1);
    }
   void display(struct booksx)
   {
    printf("\n\n%s",booksx.name);
    printf("\n\n%d",booksx.pages);
    printf("\n\n%f",booksx.rate);
    printf("\n\n%d:%d:%d",bookx.doi.day,bookx.doi.month,bookx.doi.year);
}
