#include <stdio.h>
int main()
{
    int a[5],i;
    printf("Enter the number:");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);

    printf("Even: ");
    for(i=0;i<5;i++)
        if(a[i]%2==0)
            printf("%d ",a[i]);

    printf("\nOdd: ");
    for(i=0;i<5;i++)
        if(a[i]%2!=0)
            printf("%d ",a[i]);

    return 0;
}
