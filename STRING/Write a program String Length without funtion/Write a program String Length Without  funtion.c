#include<stdio.h>
#include<conio.h>
int main()
{
    char sl[50];
    printf("Enter the full name: ");
    gets(sl);
    int i=0,len=0;
    while(sl[i]!='\0'){
        i++;
        len++;
    }
    printf("Length :%d\n",len);
}
