// function to calculate factorial of a number(TSRS)

/*
// function declaration
int fact(int n);
// function definition
int fact(int n){
  int mul,i;
  for(i=1,mul=1;i<=n;i++){
   mul=mul*i;
   return mul;
   }
}
*/

// write a program to calculate factorial of a number using function.(TSRS)
#include<conio.h>
#include<stdio.h>
//function declaration
int fact(int n);
void main()
{
    /* 
       function declaration
       int fact(int n);
    */
    int num, factorial;
    printf("Enter a number: ");
    scanf("%d", &num);
    factorial = fact(num);
    printf("The factorial of %d is %d", num, factorial);
    getch();
}
// function definition
int fact(int n)
{
    int mul, i;
    for (i = 1, mul = 1; i <= n; i++)
        mul = mul * i;
    return mul;
}