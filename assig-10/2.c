// Write a recursive function to print first n natural numbers in reverse order

/*
     step-1 --->    PrintReverseN(n)   n ........5 4 3 2 1 
     RC  step-2 -->  printf("%d",n);
                     PrintReverseN(n-1) (n-1) ....4 3 2 1
     BC step-3 -->  n==0   jab n ki value 0 (i.e n>0) ho jaye tab mujhe RC wale steps ko nahi chalana hai
*/

// void PrintN(int n) // step-1
// {
//     if (n > 0)    // step 3(BC)
//     {   
//         // step 2(RC)
//         printf("%d", n);
//         PrintN(n - 1);
//     }
// }

// Write a program using recursive function to print first n natural numbers in reverse order
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
void PrintN(int n) // step-1
{
    if (n > 0)    // step 3(BC)
    {   
        // step 2(RC)
        printf("%d\n", n);
        PrintN(n - 1);
    }
}