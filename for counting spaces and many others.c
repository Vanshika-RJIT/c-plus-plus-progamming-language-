#include"stdio.h"
int main()
{
    FILE *fp;
    char ch;
    int chara=0,spc=0,tabs=0,newli=0;
    fp=fopen("MY FRIEND.txt","r");
    while(1)
    {
        ch=fgetc(fp);
        if(ch==EOF)
        if(ch==EOF)
            break;
        chara++;
        if(ch=' ')
        spc++;
        if(ch='\n')
        newli++;
        if(ch='\t')
            tabs++;
        }
        fclose(fp);
        printf("%d %d %d",chara,spc,tabs,newli);
        return 0;
}
