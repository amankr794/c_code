// Write a recursive function to print reverse of a given number

/*
    step-1 --->     PrintReverse(num)         PrintReverse(32456) ---> 65423
     RC  step-2 -->                           printf("%d",num%10); --->6
     PrintReverse(num/10)                     PrintReverse(3245 ) ---> 5432
     BC step-3 -->  if(num>0)  dont use return
*/

// void PrintReverse(int num) // step 1
// {
//     if (num > 0)
//     {
//         printf("%d", num % 10);
//         PrintReverse(num / 10);
//     }
// }

#include <stdio.h>
#include <conio.h>
void PrintReverse(int);
int main()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &y);
    printf("The reverse of %d is ",y);
    PrintReverse(y);
    getch();
    return 0;
}
void PrintReverse(int num) // step 1
{
    if (num > 0)
    {
        printf("%d", num % 10);
        PrintReverse(num / 10);
    }
}