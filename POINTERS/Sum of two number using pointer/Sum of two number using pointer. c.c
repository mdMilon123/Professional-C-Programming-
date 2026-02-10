#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter any two number :");
    scanf("%d %d",&a,&b);
    int *p1=&a,*q2 = &b;
    printf("the sum %d\n",*p1 + *q2);



}
