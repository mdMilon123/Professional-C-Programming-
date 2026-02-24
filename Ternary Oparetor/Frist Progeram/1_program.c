//Write a program large number in the three number//
#include<stdio.h>
int main()
{
    int a=5,b=10,c=20;
    //without the terany oprator //
    /*
    if(a>b && a>c)
    {
        printf("the large number of :%d\n",a);
    }
    else if(b>a && b>c)
    {
         printf("the large number of :%d\n",b);
    }
    else if(c>a && c>b)
    {
      printf("the large number of :%d\n",c);
    }
    else
    {
        printf("Not equel");
    }
    */
    // use to the ternary oprator
    int result = (a > b) ?
                 ((a > c) ? a : c) :
                 ((b > c) ? b : c);

    printf("%d", result);


}
