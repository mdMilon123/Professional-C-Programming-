#include <stdio.h>
int main()
{
    printf("Enter the number:");
    int a[5],i,pos=0,neg=0,zero=0;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(i=0;i<5;i++)
    {
        if(a[i]>0)
            pos++;
        else if(a[i]<0)
            neg++;
        else
            zero++;
    }

    printf("Positive=%d\nNegative=%d\nZero=%d",pos,neg,zero);

    return 0;
}
