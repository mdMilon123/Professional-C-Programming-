#include <stdio.h>
int main() {
    int a[6]={10,20,30,40,50};
    int n=5,pos=2,num=25,i;

    for(i=n;i>pos;i--)
        a[i]=a[i-1];

    a[pos]=num;
    n++;

    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}
