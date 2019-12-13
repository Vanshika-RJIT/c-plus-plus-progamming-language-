struct Books
{
 char name[39];
 int pages;
 float rate;
}
#include<stdio.h>
int main()
{
struct books book1={"my name is vanshika sikarwar",129,639};
struct books book2={"vanshika sikarwar",459,978};
printf("%s",book1.name);
printf("%d",book1.pages);
printf("%f",book1.rate);

printf("%s",book2.name);
printf("%d",book2.pages);
printf("%f",book2.rate);
return 0;

}
