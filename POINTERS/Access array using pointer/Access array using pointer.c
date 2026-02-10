#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int *p=arr;
    printf("the array is element: ");
    for(int i=0;i<5;i++)
        printf("%d",*(p+i));
    getch();
}
