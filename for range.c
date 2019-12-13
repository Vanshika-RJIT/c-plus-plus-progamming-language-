#include<stdio.h>
int main()
{
    int num,largest=-30000,smallest=30000,range;
    char choice='y';
    while(choice=='y')
    {
      printf("Enter the number:");
      scanf("%d",&num);
      if(num>largest)
        largest=num;
      if(num<smallest)
        smallest=num;
      printf("Do u want to add another number y\n:");
      scanf("%c",&choice);
    }
    range=largest-smallest;
    printf("The range is %d",range);
    return 0;
}
