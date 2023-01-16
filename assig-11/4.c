/* Write a program to find the greatest element in an array of size 10. */

#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], max = 0;
    printf("Enter 10 numbers: ");
    // input of 10 elemnts in array
    int i;
    for (i = 0; i <= 9; i++)
        scanf("%d", &a[i]);
    // finding max no. in array
    max = a[0];
    for (i = 1; i <= 9; i++)
        if (a[i] > max)
            max = a[i];
    printf("The greatest element is %d",max);
    getch();
    return 0;
}