#include<stdio.h>
#include<conio.h>
int main()
{
    char str[]="Hello";
    char *p=str;
    int count =0;
    while(*p!='\0')
    {
        count++;
        p++;
    }
    printf("Length = %d",count);
    getch();
}
