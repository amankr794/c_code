/* Arrays and Functions */

/* Write a function to rotate an array towards right by one positon */
void RotateArray(int b[], int N)
{
    int num;
    num = b[N - 1];
    for (int i = N - 1; i >= 0; i--)
        b[i] = b[i - 1];
    b[0] = num;
    printf("\nAfter Rotation: ");
    for (int i = 0; i < N; i++)
        printf("%d ", b[i]);
}

/* Driver program to test above function */

// #include <stdio.h>
// #include <conio.h>
// void rotate(int[], int);
// int main()
// {
//     int n;
//     printf("\nEnter a number: ");
//     scanf("%d", &n);
//     int a[n];
//     printf("Enter %d array elements: ", n);
//     for (int i = 0; i < n; i++)
//         scanf("%d", &a[i]);
//     printf("Before Rotation: ");
//     for (int i = 0; i < n; i++)
//         printf("%d ", a[i]);
//     // function call
//     RotateArray(a, n);
//     getch();
//     return 0;
// }

/* Another driver program to test above function */
#include <stdio.h>
#include <conio.h>
void RotateArray(int[], int);
int main()
{

    int a[] = {11, 15, 6, 8, 9, 10};  // initialization and declaration of array
    int n = sizeof(a) / sizeof(a[0]); // size of array
    printf("Before Rotation: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    // function call
    RotateArray(a, n);
    getch();
    return 0;
}