#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    //write a program string length use to funtion//
    char sl[50];
    printf("Enter the full name:");
    gets(sl);
    int len = strlen(sl);
    printf("Length : %d\n",len);
    getch();

}


