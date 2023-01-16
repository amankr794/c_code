// Write a function to sort an array of size n
void SortArray(int b[], int N)
{
    int r, temp;
    for (r = 1; r <= N - 1; r++)
    {
        int i;
        for (i = 0; i <= (N - 1) - r; i++)
        {
            if (b[i] > b[i + 1])
            {
                // sorting logic
                temp = b[i];
                b[i] = b[i + 1];
                b[i + 1] = temp;
            }
        }
    }
}
/* Driver function to test the above above function */
#include <stdio.h>
#include <conio.h>
void SortArray(int b[], int N);
void PrintArray(int b[], int N);
int main()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d array elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Before Sort
    printf("Before Sort: ");
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    // function call
    SortArray(a, n);
    PrintArray(a, n);
    getch();
    return 0;
}

/* Function to print an array*/
void PrintArray(int b[], int N)
{
    // After Sort
    printf("\nAfter Sort: ");
    int i;
    for (i = 0; i < N; i++)
        printf("%d ", b[i]);
}