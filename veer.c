#include<stdio.h>
int main()
{
  float f,c;
  printf("Enter the temperature in fahrenheit:");
  scanf("%f",&f);
  c=5.0/9*(f-32);
  printf("The temperature in centigrade      :%5.2f",c);
  return 0;

}
