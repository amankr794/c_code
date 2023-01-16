// write a function to calculate number of permutations which can be made from n items, selected r at a time.(TSRS)

/*
// function declaration
int permn(int, int);
int fact(int);
// function definition
int permn(int n, int r)
{
    return fact(n) / fact(n - r);
}
// factorial function
int fact(int a)
{
    int i, mul;
    for (i = 1, mul = 1; i <= a; i++)
        mul = mul * i;
    return mul;
}
*/

// write a program to calculate number of permutations which can be made from n items, selected r at a time using function.(TSRS)

// function declaration
#include<conio.h>
#include<stdio.h>
int permn(int, int);
int fact(int);
void main(){
    int n,r;
    printf("Enter two numbers(such that 1st no. greater than or equal to 2nd no. ): ");
    scanf("%d%d",&n,&r);
    printf("n = %d\nr = %d\n",n,r);
    printf("Permutation of n = %d items selected r = %d at a time is %d",n,r,permn(n,r));
    getch();
}
// function definition
int permn(int n, int r)
{
    return fact(n) / fact(n - r);
}
// factorial function definition
int fact(int a)
{
    int i, mul;
    for (i = 1, mul = 1; i <= a; i++)
        mul = mul * i;
    return mul;
}