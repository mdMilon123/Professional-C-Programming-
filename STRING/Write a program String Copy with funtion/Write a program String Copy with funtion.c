#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char sl[]="C Programming";
    char s[20];

    strcpy(s,sl);

    printf("Sl Length : %s\n",sl);
    printf("S Length : %s\n",s);

    getch();
}
