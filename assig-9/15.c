// write a function to print all Armstrong number in the given range.
#include <stdio.h>
#include <conio.h>
// function declaration
void AllArmStrng(int, int);
// function definition
void AllArmStrng(int x, int y)
{
    for (; ++x < y; )
    {
        int num = x;
        int count = 0;
        while (num)
        {
            num = num / 10;
            count++;
        }
        int sum = 0, rem, temp = x;
        while (temp)
        {
            rem = temp % 10;
            int mul = 1;
            for (int i = 1; i <= count; i++)
                mul = mul * rem;
            sum = sum + mul;
            temp = temp / 10;
        }
        if (x>100&&sum == x)
            printf("%d\n",x);
    }
}

void main()
{
    int a, b;
    printf("Enter the range: ");
    scanf("%d%d", &a, &b);
    printf("All armstrong numbers between %d and %d are:\n", a, b);
    AllArmStrng(a, b);
    getch();
}