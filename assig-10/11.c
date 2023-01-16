// Write a recursive function to calculate sum of digits of a given number

/*
     step-1 --->    SumDigits(num)                                          sum(32456) ---> 3+2+4+5+6
     RC  step-2 --> num%10 + SumDigits(num/10 ek digit kam passs karenge)   6+sum(3245 ) ---> 3+2+4+5  isme agar 6 add kardenge to original problem sole ho jayega.
     BC step-3 -->  if(num==0) return 0
*/

int SumDigits(int num) // step 1
{
    if (num == 0)
        return (0);
    return num % 10 + SumDigits(num / 10); // step 2(RC)
}

          // or better logic
// int SumDigits(int num) // step 1
// {
//     if (num/10==0)
//         return (num);
//     return num % 10 + SumDigits(num / 10); // step 2(RC)
// }


#include <stdio.h>
#include <conio.h>
int SumDigits(int);
int main()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &y);
    x = SumDigits(y);
    printf("Sum of digits  %d is %d", y, x);
    getch();
    return 0;
}
