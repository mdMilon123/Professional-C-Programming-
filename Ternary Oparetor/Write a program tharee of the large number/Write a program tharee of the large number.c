#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter any frist number:");
    scanf("%d",&num1);

    printf("Enter any second number:");
    scanf("%d",&num2);

    printf("Enter any third number:");
    scanf("%d",&num3);

    int max=(num1>num2 && num1>num3)
    ?printf("the large Number:%d",num1)
    :(num2>num1 && num2>num3)
    ?printf("the large is Number:%d",num2)
    :(num3>num1 &&num3>num2)
    ?printf(" the large Number:%d",num3):printf("not equl");
    return 0;
}
