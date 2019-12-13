#include<stdio.h>
#include<conio.h>
int main()
{
    float km,m,feet,inch,cm;
    printf("Enter distance between two cities in km:");
    scanf("%f",&km);
    m=1000*km;
    feet=3280.84*km;
    inch=39370.1*km;
    cm=100000*km;
    printf("\ndistance between two cities in metre     :%7.2fm",m);
    printf("\ndistance between two cities in feet      :%7.2ffeet",feet);
    printf("\ndistance between two cities in inch      :%7.2finch",inch);
    printf("\ndistance between two cities in centimetre:%7.2fcm",cm);
    return 0;
}
