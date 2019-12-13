#include<stdio.h>
int main()
{
    int amount,note10,note50,note100;
    printf("Enter the amount:");
    scanf("%d",&amount);
    note100=note50=note10=0;
    if(amount>=100)
    {
        note100=amount/100;
        amount=amount-note100*100;
    }
    if(amount>=50)
    {
        note50=amount/50;
        amount=amount-note50*50;
    }if(amount>=10)
    {
        note10=amount/10;
        amount=amount-note10*10;
    }
    printf("The total no.of notes:");
    printf("100=%d\n50=%d\n10=%d",note100,note50,note10);
    return 0;
}




