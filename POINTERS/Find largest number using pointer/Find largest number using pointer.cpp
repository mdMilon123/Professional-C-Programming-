#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter any two value :");
    scanf("%d %d",&a,&b);
    int *p=&a,*q=&b;
    if(*p>*q)
        printf("Largest =%d",*p);
    else
        printf("Largest = %d",*q);
    getch();
}
