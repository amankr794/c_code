/* Write a function to reverse an array */

// Function to reverse a[] from start to end
// void ReverseArray(int b[], int N)
// {
//     int start = 0, end = N - 1; /* start and end are two variables/pointers that points
//                                    starting element (i.e. element at 0 index position)
//                                    and ending element (i.e. element at last index position) of array */
//     int temp;
//     while (start < end)
//     {
//         // swapping
//         temp = b[start];
//         b[start] = b[end];
//         b[end] = temp;
//         start++;
//         end--;
//     }
// }
/* Driver function to test the above above function */
// #include <stdio.h>
// #include <conio.h>
// void ReverseArray(int[], int);
// void PrintArray(int[], int);
// int main()
// {
//     int n;
//     printf("\nEnter a number: ");
//     scanf("%d", &n);
//     int a[n];
//     printf("Enter %d array elements: ", n);
//     for (int i = 0; i < n; i++)
//         scanf("%d", &a[i]);

//     // Before Reverse
//     printf("Before Reverse: ");
//     int i;
//     for (i = 0; i < n; i++)
//         printf("%d ", a[i]);

//     // function call
//     ReverseArray(a, n);
//     PrintArray(a, n);
//     getch();
//     return 0;
// }

// /* Function to print an array*/
// void PrintArray(int b[], int N)
// {
//     // After Reverse
//     printf("\nAfter Reverse: ");
//     int i;
//     for (i = 0; i < N; i++)
//         printf("%d ", b[i]);
// }

/* Another logic of reversing  
void ReverseArray(int b[], int N){
    int i,temp;
    for(i=0;i<N/2;i++){
        temp=b[i];
        b[i]=b[N-1-i];
        b[i+1]=temp;
    }
}
*/

// /* Another logic of reversing using sorting code */

// function definition
void ReverseArray(int b[], int N)
{
    int r;
    for (r = 1; r <= N - 1; r++)
    {
        int i, temp;
        for (i = 0; i <= (N - 1) - r; i++)
        {
            // sorting
            temp = b[i];
            b[i] = b[i + 1];
            b[i + 1] = temp;
        }
    }
}

/* Driver function to test the above above function */
#include <stdio.h>
#include <conio.h>
void ReverseArray(int b[], int N);
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

    // Before Reverse
    printf("Before Reverse: ");
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    // function call
    ReverseArray(a, n);
    PrintArray(a, n);
    getch();
    return 0;
}

/* Function to print an array*/
void PrintArray(int b[], int N)
{
    // After Reverse
    printf("\nAfter Reverse: ");
    int i;
    for (i = 0; i < N; i++)
        printf("%d ", b[i]);
}