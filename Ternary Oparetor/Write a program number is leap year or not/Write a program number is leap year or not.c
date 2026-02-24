#include<stdio.h>
int main()
{
    int year;
    printf("Enter any year:");
    scanf("%d",&year);

    (year%4==0)
    ?printf("Leap Year")
    :(year%400==0 && year%100!=0)
    ?printf("Leap year")
    :printf("Not leap year");
    return 0;
}
