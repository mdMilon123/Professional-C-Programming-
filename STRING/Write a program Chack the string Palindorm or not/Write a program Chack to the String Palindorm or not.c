#include<stdio.h>
#include<conio.h>
int main()
{

   char str[50];
   int i,len=0,flag=0;
   printf("Enter any String value:");
   gets(str);
   while(str[len]!='\0')
   {
       len++;
   }
   for(i=0;i<len/2;i++)
   {
       if(str[i]!=str[len-i-1]){
        flag=1;
        break;
       }
   }
   if(flag==0)
    printf("Palindrome");
   else
    printf("Not Palindrom");

    getch();

}
