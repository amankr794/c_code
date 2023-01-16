// write a function to calculate sum of squares of first n natural numbers.(TSRS)

/*
// declaration
int SumSquareN(int n);
// definition
int SumSquareN(int n){
    int i,s;
    for(i=1,s=0;i<=n;i++){
        s=s+(i*i);
        return s;
    }
}
*/

/*
// we can also make another function to calculate square
// declaration
int SumSquareN(int n);
int Square(int);
// definition
int SumSquareN(int n){
    int i,s;
    for(i=1,s=0;i<=n;i++){
        s=s+Square(i);
        return s;
    }
}
int Square(int x){
    return x*x;
    //int y;
    //y=x*x;
    //return (y);
}
*/

// write a program to calculate sum of squares of first n natural numbers using function.(TSRS)
#include <stdio.h>
#include <conio.h>
// declaration
int SumSquareN(int);
int Square(int);
// definition
int SumSquareN(int n)
{
    int i, s;
    for (i = 1, s = 0; i <= n; i++)
    {
        s = s + Square(i);
    }
    return s;
}
int Square(int x)
{
    return x * x;
    // int y;
    // y=x*x;
    // return (y);
}
// main function
void main()
{
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = SumSquareN(num);
    printf("The sum of squares of first %d natural numbers is %d ", num, result);
}