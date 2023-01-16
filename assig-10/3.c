// Write a recursive function to print first n even natural numbers.

/*
     step-1 --->    PrintEven(n)   2 4 6 8 .....n      (n=5    2 4 6 8 10)
     RC  step-2 --> PrintEven(n-1) 2 4 6 8 ....(n-1)   (n-1=4  2 4 6 8) bach gaya 10
                    printf("%d",2*n);                  (2*n --> 2*5=10)
     BC step-3 -->  n>0   jab n ki value 0 ho jaye tab mujhe RC wale steps ko nahi chalana hai
*/

// void PrintEven(int n) // step1
// {
//     if (n > 0) // Step-3(BC) // n=0
//     {
//         // Step-2(RC)
//         PrintEnen(n - 1);
//         if (n % 2 == 0)
//             printf("%d", n);
//     }
// }

// Write a program using recursive function to print first n even natural numbers.
#include <stdio.h>
#include <conio.h>
void PrintEven(int);
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    PrintEven(x);
    getch();
    return 0;
}
void PrintEven(int n) // step-1
{
    if (n > 0) // Step-3(BC) // n=0
    {
        // Step-2(RC)
        PrintEven(n - 1);
        printf("%d ", 2 * n);
    }
}