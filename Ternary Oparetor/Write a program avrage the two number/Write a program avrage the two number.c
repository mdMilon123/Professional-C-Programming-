#include<stdio.h>
int main()
{
    int num1=10,num2=20;
    float avg=(num1>0 && num2>0)?(num1+num2)/2.0:0;
    printf("Average :%.2f",avg);
    return 0;
}
