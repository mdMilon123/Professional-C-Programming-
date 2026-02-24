#include<stdio.h>
int main()
{
    int mark;
    printf("Enter any number:");
    scanf("%d",&mark);

    (mark>=80)
    ?printf("A+")
    :(mark>=70)
    ?printf("A-")
    :(mark>=60)
    ?printf("B+")
    :(mark>=50)
    ?printf("C")
    :(mark>=40)
    ?printf("D")
    :printf("F");
    return 0;
}
