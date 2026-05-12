
#include <stdio.h>
int main() {
    int mat[2][2]={{1,2},{3,4}}, i,j, transpose[2][2];

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            transpose[j][i]=mat[i][j];

    for(i=0;i<2;i++){
        for(j=0;j<2;j++)
            printf("%d ",transpose[i][j]);
        printf("\n");
    }

    return 0;
}
