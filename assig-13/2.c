/* Write a program to clculate product of two matrices each of order 3X3 */

#include <stdio.h>
#include <conio.h>
int main()
{
    int A[3][3], B[3][3], C[3][3], i, j, k, sum;

    printf("\nEnter 9 numbers for first matrix:\n");
    // for loop for entering element in 'A' matrix or array
    for (i = 0; i <= 2; i++)     // outer loop is used for handling higher index
        for (j = 0; j <= 2; j++) // lower loop is used for handling lower index
            scanf("%d", &A[i][j]);

    printf("\nEnter 9 numbers for second matrix:\n");
    // for loop for entering element in 'B' matrix or array
    for (i = 0; i <= 2; i++)     // outer loop is used for handling higher index
        for (j = 0; j <= 2; j++) // lower loop is used for handling lower index
            scanf("%d", &B[i][j]);

    // C matrix for storing multiplication of matrices
    printf("\nThe multiplication of matrices:\n");
    for (i = 0; i <= 2; i++)
        for (j = 0; j <= 2; j++)
        {
            sum = 0;
            for (k = 0; k <= 2; k++)
                sum = sum + A[i][k] * B[k][j];
            C[i][j] = sum;
        }

    // printing C matrix
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    getch();
    return 0;
}