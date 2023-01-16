/* Write a program to find the smallest element in an array of size 10. */

#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], min = 0;
    printf("Enter 10 numbers: ");
    // input of 10 elemnts in array
    int i;
    for (i = 0; i <= 9; i++)
        scanf("%d", &a[i]);
    // finding max no. in array
    min = a[0];
    for (i = 1; i <= 9; i++)
        if (a[i] < min)
            min = a[i];
    printf("The smallest element is %d", min);
    getch();
    return 0;
}