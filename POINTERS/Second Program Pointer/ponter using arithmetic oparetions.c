#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    system("COLOR 0C");
    int a=10,b=20;
    int *p,*q;
    p=&a;
    q=&b;
    printf("*p = %d\n",*p);
    printf("*q = %d\n",*q);
    printf("*p + *q = %d\n",*p + *q);
    // 1 increment and decrement //
    printf("\n\n");
    (*p)++;
    (*q)--;

    printf("*p = %d\n",*p);
    printf("*q = %d\n",*q);
    printf("*p + *q = %d\n",*p + *q);

    //add the pointer number
    printf("\n\n");
    *p+=3;
    *q-=5;

    printf("*p = %d\n",*p);
    printf("*q = %d\n",*q);
    printf("*p + *q = %d\n",*p + *q);

    getch();


}
