/* Write a program to clculate sum of two matrices each of order 3X3 */

// Note: For addition of two matrices it is necessary that both the matrices is of same order
#include <stdio.h>
#include <conio.h>
int main()
{
    int A[3][3], B[3][3], C[3][3], i, j; // i and j two are two variables used for handling index of array.
    // 2D Array me input lene ke liye two index (i,j) ka use karte hai
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

    // for loop for storing sum in 'C' matrix or array
    printf("\nThe sum of matrices:\n");
    for (i = 0; i <= 2; i++) // outer loop is used for handling higher index
    {
        for (j = 0; j <= 2; j++) // lower loop is used for handling lower index
        {
            C[i][j] = A[i][j] + B[i][j]; // adding corresponding elements of matrix A and B storing the result in c
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    getch();
    return 0;
}