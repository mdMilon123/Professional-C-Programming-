#include <stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int i,largest,second;

    largest=second=a[0];

    for(i=1;i<5;i++)
    {
        if(a[i]>largest)
        {

            largest=a[i];
            second=largest;
        }
        else if(a[i]>second && a[i]!=largest)
        {
            second=a[i];
        }
    }

    printf("Second Largest = %d",second);

    return 0;
}
