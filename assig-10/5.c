// Write a recursive function to print first n odd natural numbers.

/*
     step-1 --->    PrintOdd(n)    1 3 5 7 .....n      (n=5    1 3 5 7 9 )
     RC  step-2 --> PrintEven(n-1) 1 3 5 7 ....(n-1)   (n-1=4   1 3 5 7) bach gaya 9
                    printf("%d",2*n-1);                (2*n-1 --> 2*5-1=9)
     BC step-3 -->  n>0   jab n ki value 0 ho jaye tab mujhe RC wale steps ko nahi chalana hai
*/

// void PrintOdd(int n) // step1
// {
//     if (n > 0) // Step-3(BC) // n=0
//     {
//         // Step-2(RC)
//         PrintOdd(n - 1);
//         printf("%d", 2*n-1);
//     }
// }

// Write a program using recursive function to print first n odd natural numbers.
#include <stdio.h>
#include <conio.h>
void PrintOdd(int);
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    PrintOdd(x);
    getch();
    return 0;
}
void PrintOdd(int n) // step-1
{
    if (n > 0) // Step-3(BC) // n=0
    {
        // Step-2(RC)
        PrintOdd(n - 1);
        printf("%d ", 2 * n - 1);
    }
}