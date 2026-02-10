#include <stdio.h>
#include<conio.h>
int main()
{
    int a, b, sum;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    sum = a + b;

    printf("Sum of the two numbers = %d", sum);

    getch();
}

