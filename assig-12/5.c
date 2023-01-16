// Write a function to print distict elements of a given array

// logic --> pick the element and check if picked element is already printed or not

// void PrintDistinctElements(int b[], int N)
// {
//     int i;
//     for (i = 0; i <= N - 1; i++) // picking element from array
//     {
//         // check if the picked element is printed or not
//         int j;
//         for (j = 0; j <= i; j++)
//         {
//             if (b[i] == b[j])
//                 break;
//         }
//         // if (i == j)
//         //     printf("%d ", b[j]);
//         Display(b, i, j);
//     }
// }
// void Display(int b[], int i, int j)
// {
//     if (i == j)
//         printf("%d ", b[j]);
// }

/* Driver function to check the program */
#include <stdio.h>
#include <conio.h>
void PrintDistinctElements(int[], int);
void ArrayInput(int[], int);
// void Display(int[], int, int);
int main()
{
    int n;
    printf("\nEnter the Array Size: ");
    scanf("%d", &n);
    int a[n];
    // calling ArrayInput()
    ArrayInput(a, n);
    // calling PrintDistinctElements()
    PrintDistinctElements(a, n);
    getch();
    return 0;
}
// taking input in array
void ArrayInput(int b[], int N)
{
    for (int i = 0; i < N; i++)
        scanf("%d", &b[i]);
}

// void PrintDistinctElements(int b[], int N)
// {
//     int i;
//     for (i = 0; i <= N - 1; i++) // picking element from array
//     {
//         // check if the picked element is already printed or not
//         int j;
//         for (j = 0; j <= i; j++)
//         {
//             if (b[i] == b[j])
//                 break;
//         }
//         // if (i == j)
//         //     printf("%d ", b[j]);
//         Display(b, i, j);
//     }
// }

void Display(int b[], int i, int j)
{
    if (i == j)
        printf("%d ", b[j]);
}

void PrintDistinctElements(int b[], int N)
{
    int i;
    for (i = 0; i <= N - 1; i++) // i --> picking element from array
    {
        if (b[i] != -1)
        {
            int j;
            for (j = i + 1; j <= N - 1; j++)
                if (b[i] == b[j])
                    b[j] = -1; // marked the element -1 as visited
        }
    }
    for (i = 0; i <= N - 1; i++)
    {
        if (b[i] != -1)
            printf("%d ", b[i]);
    }
}