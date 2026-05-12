#include <stdio.h>
int main() {
    int a[5]={1,2,3,4,5}, i, evenSum=0, oddSum=0;

    for(i=0;i<5;i++){
        if(a[i]%2==0)
            evenSum+=a[i];
        else
            oddSum+=a[i];
    }

    printf("Even index sum = %d\n",evenSum);
    printf("Odd index sum = %d",oddSum);

    return 0;
}
