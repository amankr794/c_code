// write a function to find next prime number of a given number.(TSRS)

/*
//function declaration
int NextP(int n);
// function definition
int NextP(int n)
{
    int num = n + 1;
    for (; num;)
    {
        int div;
        for (div = 2; div <= num / 2; div++)
        {
            if (num % div == 0)
                break;
        }
        if (num >= 2 && div > num/2)
        {
            return num;
        }
        num++;
    }
}
*/

// program to find next prime number of a given number using function.(TSRS)

#include <stdio.h>
#include <conio.h>
// function declaration
int NextP(int);
// main function
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Prime number next to %d is %d", num, NextP(num));
    getch();
}
// function definition
int NextP(int n)
{
    int div, num = n + 1;
    for (; num;)
    {
        for (div = 2; div <= num / 2; div++)
        {
            if (num % div == 0)
                break;
        }
        if (num >= 2 && div > num / 2)
            return num;
        num++;
    }
}
