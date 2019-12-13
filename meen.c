#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{

  float a,b,c,s,area;
  printf("\n\nEnter First Side:");
  scanf("%f",&a);
  printf("\nEnter Second Side:");
  scanf("%f",&b);
  printf("\nEnter Third Side:");
  scanf("%f",&c);
  s=(a+b+c)/2;
  area=sqrt(s*(s-a)*(s-b)*(s-c));
  printf("Area Of Triangle=%7.2f",area);
  return 0;
}
