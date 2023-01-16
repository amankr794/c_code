/* Write a program to calculate sum of 10 numbers stored in an array. */

#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], sum = 0;
    printf("Enter 10 numbers: ");
    // input of 10 numbers in array
    for (int i = 0; i <= 9; i++)
        scanf("%d", &a[i]);
    // sum of 10 numbers of array
    for (int i = 0; i <= 9; i++)
        sum = sum + a[i];
    printf("The sum of 10 numbers is %d", sum);
    getch();
    return 0;
}

/*  self programs   */

// program to calculate sum of n numbers
// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int n;
//     int sum = 0;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     int a[n]; /*declaration of array of size n*/
//     printf("Enters %d numbers: ", n);
//     // input of n numbers in array
//     for (int i = 0; i < n /* i<=n-1 */; i++)
//         scanf("%d", &a[i]);
//     // sum of n numbers of array
//     for (int i = 0; i < n; i++)
//         sum = sum + a[i];
//     printf("The Sum of %d numbers is %d", n, sum);
//     getch();
//     return 0;
// }