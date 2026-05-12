#include <stdio.h>
int main()
{
    int a[7] = {1,2,2,3,4,1,5};
    int n = 7;
    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                for(int k = j; k < n - 1; k++)
                {
                    a[k] = a[k + 1];
                }

                n--;
                j--;
            }
        }
    }

    printf("Array after removing duplicates:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
