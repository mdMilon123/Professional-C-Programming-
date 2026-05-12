
#include <stdio.h>
int main() {
    int mat[2][3]={{1,2,3},{4,5,6}}, i,j;
    int rowSum, colSum;

    for(i=0;i<2;i++){
        rowSum=0;
        for(j=0;j<3;j++)
            rowSum+=mat[i][j];
        printf("Row %d sum = %d\n",i,rowSum);
    }

    for(j=0;j<3;j++){
        colSum=0;
        for(i=0;i<2;i++)
            colSum+=mat[i][j];
        printf("Column %d sum = %d\n",j,colSum);
    }

    return 0;
}
