#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int *p=arr,even=0,odd=0;
    for(int i=0;i<5;i+ +){

        if(*(p+i)%2==0)
        even++;
       else
        odd++;
    }
    printf("Even number:%d\n",even);
    printf("Odd number:%d\n",odd);

}
