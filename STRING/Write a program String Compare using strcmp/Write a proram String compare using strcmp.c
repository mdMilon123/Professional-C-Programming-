#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char str1[]="Md Milon miah";
    char str2[]="Milon";

    int d = strcmp(str1,str2);
    if(d==0)
        printf("String are equal");
    else
        printf("String are not eqal");
    getch();
}
