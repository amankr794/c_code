// Write a recursive function to calculate sum of first n odd natural numbers

/*
     step-1 --->    SumOdd(n) 1+3+5+7+ ....+n             (n=5   1+3+5+7+9)
     RC  step-2 --> 2*n-1 + SumOdd(n-1) 1+3+5+ ....+(n-1)   (n-1=4 1+3+5+7) isme agar 2*n-1 add kardenge to original problem sole ho jayega.
     BC step-3 -->  n=1
*/

// int SumOdd(int n)
// {
//     if (n == 1)
//         return 1;
//     return 2*n-1 + SumOdd(n - 1);
// }

// Write a program using recursive function to calculate sum of first n odd natural numbers
#include <stdio.h>
#include <conio.h>
int SumOdd(int);
int main()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &y);
    x = SumOdd(y);
    printf("Sum of first %d odd natural number is %d", y, x);
    getch();
    return 0;
}
int SumOdd(int n)
{
    if (n == 1)
        return 1;
    return 2 * n - 1 + SumOdd(n - 1);
}