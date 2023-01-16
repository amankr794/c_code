// Write a function to find the index of the smallest element of an array of size n

// function definition
int SmallestElementIndex(int a[], int N)
{
    int min = a[0];
    int i, index;
    for (i = 1; i < N; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            index = i;
        }
    }
    return index;
}

/* Driver program to check this function */
#include <stdio.h>
#include <conio.h>
int SmallestElementIndex(int[], int);
int main()
{
    int a[5] = {34, 23, 7, 45, 12};
    int n = sizeof(a) / sizeof(a[0]);
    // function call
    int index = SmallestElementIndex(a, n);
    printf("The index of smallest element of array is %d", index);
    getch();
    return 0;
}