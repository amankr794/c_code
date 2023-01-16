// Write a recursive function to print first n even natural numbers in reverse order.

/*
     step-1 --->    PrintReverseEven(n)     n ...6 4 2      (n=5  10 8 6 4 2)
     RC  step-2 --> printf("%d",2*n);                       (2*n  2*5=10 )
                    PrintReverseEven(n-1)  (n-1) ... 6 4 2  (n-1=4  8 6 4 2) bach gaya 10

     BC step-3 -->  n>0   jab n ki value 0 ho jaye tab mujhe RC wale steps ko nahi chalana hai
*/

// void PrintReverseEven(int n) // step1
// {
//     if (n > 0) // Step-3(BC) // n=0
//     {
//         // Step-2(RC)
//         printf("%d",n);
//         PrintReverseEven(n - 1);
//     }
// }

// Write a program using recursive function to print first n even natural numbers.
#include <stdio.h>
#include <conio.h>
void PrintReverseEven(int);
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    PrintReverseEven(x);
    getch();
    return 0;
}
void PrintReverseEven(int n) // step-1
{
    if (n > 0) // Step-3(BC) // n=0
    {
        // Step-2(RC)
        printf("%d ", 2 * n);
        PrintReverseEven(n - 1);
    }
}