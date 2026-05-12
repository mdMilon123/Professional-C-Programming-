#include <stdio.h>
int main()
{
    int a[5]={1,2,2,3,1};
    int i,j,count;

    for(i=0;i<5;i++)
    {
        count=1;

        if(a[i]==-1)
            continue;

        for(j=i+1;j<5;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                a[j]=-1;
            }
        }

        printf("%d occurs %d times\n",a[i],count);
    }

    return 0;
}
