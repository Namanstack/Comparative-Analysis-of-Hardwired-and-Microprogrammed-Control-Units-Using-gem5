#include <stdio.h>

#define SIZE 50

int main() {

    int A[SIZE][SIZE];
    int B[SIZE][SIZE];
    int C[SIZE][SIZE];

    int i,j,k;

    for(i=0;i<SIZE;i++)
        for(j=0;j<SIZE;j++){
            A[i][j]=i+j;
            B[i][j]=i*j;
            C[i][j]=0;
        }

    for(i=0;i<SIZE;i++)
        for(j=0;j<SIZE;j++)
            for(k=0;k<SIZE;k++)
                C[i][j]+=A[i][k]*B[k][j];

    printf("Matrix multiplication completed\n");

    return 0;
}