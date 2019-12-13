#include<stdio.h>
void main(void)
{
    void gwalior(void);
     void bhopal(void);
     void indore(void);
     printf("\nI am in main function");
    bhopal();
    gwalior();
    indore();
}
void gwalior(void)
{
  printf("\nI am in Gwalior");
}
void bhopal(void)
{
    printf("\nI am in Bhopal");
}
void indore(void)
{
    printf("\nI am in Indore");
}
