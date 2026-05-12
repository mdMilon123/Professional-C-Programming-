#include <stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int key,i;

    printf("Enter number: ");
    scanf("%d",&key);

    for(i=0;i<5;i++)
    {
        if(a[i]==key)
        {
            printf("Found at index %d",i);
            return 0;
        }
    }

    printf("Not found");

    return 0;
}
