#include<stdio.h>
int main()
{
    int A[3][3], B[3][2], C[3][2];
    int i, j, k;
    printf("Enter 9 elements for Matrix A (3 x 3):\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter 6 elements for Matrix B (3 x 2):\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
            C[i][j] = 0;
            for(k = 0; k < 3; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("Resultant Matrix C (3 x 2):\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
