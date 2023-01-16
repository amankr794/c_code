// Write a recursive function to calculate sum of first n natural numbers

/*
     step-1 --->    sum(n) 1+2+3+4+5+ ....+n
     RC  step-2 --> n + sum(n-1) 1+2+3+4+5+ ....+(n-1) isme agar n add kardenge to original problem sole ho jayega.
     BC step-3 -->  n=1
*/

// int sum(int n)
// {
//     if (n == 1)
//         return 1;
//     return n + sum(n - 1);
// }

/*              or

           int sum(int n)
           {
               int s;
               if (n == 1)
                   return 1;
               s = n + sum(n - 1);
               return s;
           }
*/

// Write a program using recursive function to calculate sum of first n natural numbers
#include <stdio.h>
#include <conio.h>
int sum(int n);
int main()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &y);
    x = sum(y);
    printf("Sum of first %d natural number is %d", y, x);
    getch();
    return 0;
}
int sum(int n)
{
    if (n == 1)
        return 1;
    return n + sum(n - 1);
}