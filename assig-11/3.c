/* Write a program to calculate sum of all even and sum of all odd numbers stored in an array of size 10. */

#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], sumeven = 0, sumodd = 0;
    printf("Enter 10 numbers: ");
    // input of 10 number in array
    for (int i = 0; i <= 9; i++)
        scanf("%d", &a[i]);
    // sum of even and odd number
    for (int i = 0; i <= 9; i++)
    {
        if (a[i] % 2 == 0)
            sumeven = sumeven + a[i];
        else
            sumodd = sumodd + a[i];
    }
    printf("Sum of all even numbers: %d\n", sumeven);
    printf("Sum of all even numbers: %d", sumodd);
    getch();
    return 0;
}