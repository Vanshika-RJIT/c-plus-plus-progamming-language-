#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
  int a,b,c;
  float s;
  printf("\n\nEnter First No.");
  scanf("%d",&a);
  printf("\nEnter Second No.");
  scanf("%d",&b);
  printf("\nEnter Third No.");
  scanf("%d",&c);
  s=(a+b+c)/2;
  printf("S=%7.2f",s);
  return 0;
}
