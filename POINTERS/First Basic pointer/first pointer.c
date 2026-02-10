#include<stdio.h>
#include<conio.h>
int main()
{
    int num=10;
    int *ptr;

    ptr= &num;
    printf("the number of address:%d\n",&num);
    printf("the number of address:%d\n",ptr);
    printf("value of address:%d\n",*ptr);
    printf("value of number:%d\n",num);

    *ptr =20;

    printf("after assine the value \n\n");
    printf("the number of address:%d\n",&num);
    printf("the number of address:%d\n",ptr);
    printf("value of address:%d\n",*ptr);
    printf("value of number:%d\n",num);
    getch();

}
