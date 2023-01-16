// Write a recursive function to calculate sum of first n even natural numbers

/*
     step-1 --->    SumEven(n) 2+4+6+8 ....+n             (n=5 2+4+6+8+10)
     RC  step-2 --> 2*n + SumEven(n-1) 2+4+6+ ....+(n-1)  (n-1 2+4+6+8) isme agar 2*n add kardenge to original problem sole ho jayega.
     BC step-3 -->  n=1
*/

// int SumEven(int n)
// {
//     if (n == 1)
//         return 2;
//     return 2*n + SumEven(n - 1);
// }

// Write a program using recursive function to calculate sum of first n even natural numbers
#include <stdio.h>
#include <conio.h>
int SumEven(int);
int main()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &y);
    x = SumEven(y);
    printf("Sum of first %d even natural number is %d", y, x);
    getch();
    return 0;
}
int SumEven(int n)
{
    if (n == 1)
        return 2;
    return 2 * n + SumEven(n - 1);
}