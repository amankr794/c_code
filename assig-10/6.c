// Write a recursive function to print first n odd natural numbers in reverse order.

/*
     step-1 --->    PrintReverseOdd(n)     n ... 5 3 1      (n=5  9 7 5 3 1)
     RC  step-2 --> printf("%d",2*n);                       (2*n-1 -->  2*5-1=9 )
                    PrintReverseOdd(n-1)  (n-1) ... 5 3 1   (n-1=4  7 5 3 1) bach gaya 9

     BC step-3 -->  n>0   jab n ki value 0 ho jaye tab mujhe RC wale steps ko nahi chalana hai
*/

// void PrintReverseOdd(int n) // step1
// {
//     if (n > 0) // Step-3(BC) // n=0
//     {
//         // Step-2(RC)
//         printf("%d",2*n-1);
//         PrintReverseOdd(n - 1);
//     }
// }

// Write a program using recursive function to print first n odd natural numbers in reverse order.
#include <stdio.h>
#include <conio.h>
void PrintReverseOdd(int);
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    PrintReverseOdd(x);
    getch();
    return 0;
}
void PrintReverseOdd(int n) // step-1
{
    if (n > 0) // Step-3(BC) // n=0
    {
        // Step-2(RC)
        printf("%d ", 2 * n - 1);
        PrintReverseOdd(n - 1);
    }
}