#include<stdio.h>
#include<conio.h>
void swap(int *x,int *y){
int temp =*x;
*x=*y;
*y=temp;

}
int main()
{
    int a=5,b=10;
    swap(&a,&b);
    printf("a=%d \n",a);
    printf("b=%d \n",b);
    getch();
}
