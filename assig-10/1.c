// Write a recursive function to print first n natural numbers

/*
     step-1 --->    PrintN(n)   1 2 3 4 5 . . . n
     RC  step-2 --> Print(n-1)  1 2 3 4 5 . . . (n-1)
                    printf("%d",n);
     BC step-3 -->  n==0   jab n ki value 0 (i.e n>0) ho jaye tab mujhe RC wale steps ko nahi chalana hai
*/

// void PrintN(int n) // step1
// {
//     if (n > 0) // Step-3(BC) // n=0
//     {   
//         // Step-2(RC)
//         PrintN(n - 1);
//         printf("%d", n);
//     }
// }

// Write a program using recursive function to print first n natural numbers
#include <stdio.h>
#include <conio.h>
void PrintN(int n);
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    PrintN(x);
    getch();
    return 0;
}
void PrintN(int n)
{
    if (n > 0) // Step-3(BC) // n=0
    {   // Step-2(RC)
        PrintN(n - 1);
        printf("%d ", n);
    }
}