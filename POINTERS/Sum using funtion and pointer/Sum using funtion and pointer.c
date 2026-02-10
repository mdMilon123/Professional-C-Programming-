#include<stdio.h>
#include<conio.h>
void sum(int *a,int *b){
printf("sum=%d",*a+*b);
}
int main()
{
    int x=10,y=30;
    sum(&x,&y);
    getch();


}
