
#include <stdio.h>

int main() {
    int a[5] = {1,2,3,4,5};
    int n = 5, i, temp;

    temp = a[0];

    for(i=0;i<n-1;i++)
    {
        a[i] = a[i+1];
    }

    a[n-1] = temp;

    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}
