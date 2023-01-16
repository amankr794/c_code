// Write a recursive function to calculate sum of squares of first n natural numbers

/*
     step-1 --->    SumSquareN(n) 1+4+9+16+25+ ....+n^2             (n=5   1+4+9+16+25)
     RC  step-2 --> n*n + SumSquare(n-1) 1+4+9+16+25+ ....+(n-1)   (n-1=4 1+4+9+16) isme agar n*n(25) add kardenge to original problem sole ho jayega.
     BC step-3 -->  n=1
*/
int SumSquareN(int n)
{
    if (n == 1)
        return 1;
    return n * n + SumSquareN(n - 1);
}
// Write a program using recursive function to calculate sum of squares of first n natural numbers
#include <stdio.h>
#include <conio.h>
int SumSquareN(int);
int main()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &y);
    x = SumSquareN(y);
    printf("Sum of square of first %d natural number is %d", y, x);
    getch();
    return 0;
}