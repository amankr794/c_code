// write a function to print all prime numbers between two given numbers.(TSRN)
/*
//  function definition
void AllPrime(int, int);
// function definition
void AllPrime(int num1, int num2)
{
    int div;
    for (num1; num1 <= num2;)
    {
        for (div = 2; div <= num1 / 2; div++)
        {
            if (num1 % div == 0)
                break;
        }
        if (num1 >= 2 && div > num1 / 2)
            printf("%d\n", num1);
        num1++;
    }
}
*/
//program to print all prime numbers between two given numbers using function.(TSRN)
#include<conio.h>
#include<stdio.h>
//  function declaraton
void AllPrime(int, int);
//main function
void main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("All prime numbers between %d and %d are: ",a,b);
    AllPrime(a,b);
    getch();
}
// function definition
void AllPrime(int num1, int num2)
{
    int div;
    //printf("All prime numbers between %d and %d are: ",num1,num2);
    for (num1; num1 <= num2;)
    {
        for (div = 2; div <= num1 / 2; div++)
        {
            if (num1 % div == 0)
                break;
        }
        if (num1 >= 2 && div > num1 / 2)
            printf("%d\n", num1);
        num1++;
    }
}