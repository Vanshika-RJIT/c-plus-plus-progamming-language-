#include<stdio.h>
int main()
{
    int a,b,choice,sub,div,add,multi;
    printf("Enter the two numbers:");
    scanf("%d%d",&a,&b);
    printf("1.addition\n2.subtraction\n3.multiplication\n4.division");
    printf("Enter the choice:");
    scanf("%d",&choice);
    switch(choice)
    { case 1: add=a+b;
        printf("The addition of two numbers:%d",add);
        break;
    case 2: sub=a-b;
        printf("The subtraction of two numbers:%d",sub);
        break;
    case 3:multi=a*b;
        printf("The multiplication of two numbers:%d",multi);
        break;
    case 4:div=a/b;
        printf("The division of two numbers:%d",div);
        break;
    default:
        printf("The invalid operation of two numbers");
        break;
        }
        return 0;
        }
