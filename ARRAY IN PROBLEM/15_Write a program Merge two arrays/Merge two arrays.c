#include <stdio.h>
int main() {
    int a[3]={1,2,3}, b[2]={4,5}, c[5];
    int i,j;

    for(i=0;i<3;i++)
        c[i]=a[i];
    for(j=0;j<2;j++)
        c[i+j]=b[j];

    for(i=0;i<5;i++)
        printf("%d ",c[i]);

    return 0;
}
