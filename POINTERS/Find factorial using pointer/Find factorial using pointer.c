#include<stdio.h>
#include<conio.h>
int main()
{
    int a=5,fact=1;
   int *p=&a;

   for(int i=1;i<=*p;i++)
     fact *=i;
   printf("Factorial =%d",fact);
   getch();



}
