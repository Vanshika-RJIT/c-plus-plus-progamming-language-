   #include<stdio.h>
   #include<conio.h>
     void gwalior(void);
     void bhopal(void);
     void indore(void);
     void main(void)
{

     printf("\nI am in main function");
    bhopal();
}
void gwalior(void)
{
  printf("\nI am in Gwalior");
  indore();
}
void bhopal(void)
{
    printf("\nI am in Bhopal");
    gwalior();
}
void indore(void)
{
    printf("\nI am in Indore");
}


