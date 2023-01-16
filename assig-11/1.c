                                     /* Arrays */

/* Write a program to calculate average of 10 numbers. Use arrays
   to store 10 numbers.*/

#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10] /*declaration of array of size 10 */, sum = 0;
    float avg;
    printf("Enter 10 numbers: ");
    // input of value in array
    for (int i = 0; i <= 9; i++)
        scanf("%d", &a[i]);
    // sum of all elemnts of array
    for (int i = 0; i <= 9; i++)
        sum = sum + a[i];
    // average of 10 numbers
    avg = sum / 10.0;
    printf("The Average of 10 numbers is %f", avg);
    getch();
    return 0;
}

/*  self programs   */

// program to calculate average of n numbers
// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int n,sum = 0;
//     float avg;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     int a[n]; /*declaration of array of size n*/
//     printf("Enters %d numbers: ", n);
//     // input of n numbers in array
//     for (int i = 0; i <= n - 1 /* i<n */; i++)
//         scanf("%d", &a[i]);
//     // sum of n numbers of array
//     for (int i = 0; i <= n - 1; i++)
//         sum = sum + a[i];
//     // average of n numbers
//     avg = (float)sum / n;  //explicit conversion of int to float
//     printf("The Average of %d numbers is %.2f", n, avg);
//     getch();
//     return 0;
// }