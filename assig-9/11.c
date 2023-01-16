// Write a function to check whether a given number is Prime or not.(TSRS).(Return 1 if prime,otherwise return 0)
/*
// function declaration
int Prime(int n);
// function definition
int Prime(int n)
{
    int div;
    for (div = 2; div <= n / 2; div++)
    {
        if (n % div == 0)
            break;
    }
    if (n >= 2 && div > n / 2)
        return 1;
    else
        return 0;
}
*/

/*
// function declaration
int Prime(int n);
// function definition
int Prime(int n)
{
    int div;
    for (div = 2; div <= n / 2; div++)
    {
        if (n % div == 0)
            break;
    }
    return n >= 2 && div > n / 2;
        
}
*/


// Write a program to check whether a given number is Prime or not using function.(TSRS).(Return 1 if prime,otherwise return 0)

/*
#include<conio.h>
#include<stdio.h>
// function declaration
int Prime(int n);
// main function
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (Prime(num))
        printf("%d is Prime", num);
    else
        printf("%d is not Prime", num);
}
// function definition
int Prime(int n)
{
    int div;
    for (div = 2; div <= n / 2; div++)
    {
        if (n % div == 0)
            break;
    }
    if (n >= 2 && div > n / 2)
        return 1;
    else
        return 0;
    
}
*/


#include<conio.h>
#include<stdio.h>
// function declaration
int Prime(int n);
// main function
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (Prime(num))
        printf("%d is Prime", num);
    else
        printf("%d is not Prime", num);
}
// function definition
int Prime(int n)
{
    int div;
    for (div = 2; div <= n / 2; div++)
    {
        if (n % div == 0)
            break;
    }
    return n >= 2 && div > n / 2;
    
}
