#include<stdio.h>
#include<conio.h>
int main()
{
    int a=10;
    int *p=&a;
    *p = 20;
    printf("New value :%d",a);
    getch();
}
