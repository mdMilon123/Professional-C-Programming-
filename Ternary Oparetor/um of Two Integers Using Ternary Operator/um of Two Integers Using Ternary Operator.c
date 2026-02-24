#include<stdio.h>
int main()
{
    int num1=10,num2=20,sum;
    sum=(num1||num2)?(num1+num2):0;
    printf("the sum is:%d",sum);

    return 0;

}
