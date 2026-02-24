#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the Letter :");
    scanf("%c",&ch);

    (ch>='A' && ch>='Z')?printf("Uppercase Letter"):printf("Lowercase Letter");
}
