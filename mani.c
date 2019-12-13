#include<stdio.h>
#include<conio.h>
int main()
{
    char address[68]={"ROM COMPUTER\n\t\tNear Throat Palace,\n\t\tNaya Bazar,Lashkar,Gwalior"};
    char name[20];
    char sum[120];
    char by[6];
    char remark[20];
    float fees;
    printf("No.507");
    printf("\t\t\t\t\tDated:1-Jan-2019\n");
    printf("\t\t%s",address);
    printf("\n\n\t\tReceipt");
    printf ("\nReceived with thanks from:");
    scanf("%s",&name);
    printf("\nThe sum of:");
    scanf("%s",&sum);
    printf("\nBy:");
    scanf("%s",&by);
    printf("\nRemarks:");
    scanf("%s",&remark);
    printf("\n\n\n\n\n\tfees:Rs.");
    scanf("%f",&fees);
    printf("%s",name);
    printf("%s",sum);
    printf("%s",by);
    printf("%s",remark);
    printf("%7.2f",fees);
    return 0;

}
