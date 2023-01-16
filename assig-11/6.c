// Write a program to sort an array of size 10
// here we are using oncept of bubble sort

// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int a[10]; // declaration of array of size 10
//     printf("Enter 10 numbers: ");
//     // input of 10 numbers in array
//     int i;
//     for (i = 0; i <= 9; i++)
//         scanf("%d", &a[i]);
//     // displaying element of array before sorting
//     printf("Before Sorting: ");
//     for (i = 0; i <= 9; i++)
//         printf("%d ", a[i]);
//     // bubble sorting code
//     for (int r = 1; r <= 9; r++) // total 9 round of sorting hoga
//     {
//         for (i = 0; i <= 9 - r; i++) // r=1--> 1st round of sorting me 9 comparison karwana hai (0-8)
//         {                            // r=2--> 2nd round of sorting me 8 comparison karwana hai (0-7)
//             if (a[i] > a[i + 1])     // r=3--> 3rd round of sorting me 7 comparison karwana hai (0-6)
//             {
//                 int temp = a[i];
//                 a[i] = a[i + 1];
//                 a[i + 1] = temp;
//             }
//         }
//     }
//     printf("\nAfter Sorting: ");
//     for (i = 0; i <= 9; i++)
//         printf("%d ", a[i]);
//     getch();
//     return 0;
// }

// program to sort an array of size n
#include <stdio.h>
#include <conio.h>
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

    // sorting code
    int r;
    for (r = 1; r <= n - 1; r++)
    {
        for (i = 0; i <= (n - 1) - r; i++)
        { // sorting
            if (a[i] > a[i + 1])
            {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    // after sorting
    printf("\nAfter Sort: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    getch();
    return 0;
}