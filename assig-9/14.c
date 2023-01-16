// write a function to check whether a given number is an Armstrong number or not
/*
// function declaration
int IsArmStrng(int);
// function definition
int IsArmStrng(int num)
{
    int temp = num;
    int count = 0;
    while (num)
    {
        num = num / 10;
        count++;
    }
    int sum = 0, rem, Num = temp;
    while (temp)
    {
        rem = temp % 10;
        int mul = 1;
        for (int i = 1; i <= count; i++)
            mul = mul * rem;
        sum = sum + mul;
        temp = temp / 10;
    }
    return sum == Num;
}

*/

#include <conio.h>
#include <stdio.h>
// function declaration
int IsArmStrng(int);
// main function
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (IsArmStrng(num))
        printf("%d is an Armstrong number", num);
    else
        printf("%d is not an Armstrong number", num);
}
// function definition
int IsArmStrng(int num)
{
    int temp = num;
    int count = 0;
    while (num)
    {
        num = num / 10;
        count++;
    }
    int sum = 0, rem, Num = temp;
    while (Num)
    {
        rem = Num % 10;
        int mul = 1;
        for (int i = 1; i <= count; i++)
            mul = mul * rem;
        sum = sum + mul;
        Num = Num / 10;
    }
    return sum == temp;
}
