// Write a function to check whether a given number is even or odd.(TSRS).(Return 1 if even otherwise return 0)

/*
// function definition
int IsEven(int n);
// function definition
int IsEven(int n){
 return n%2==0;
}
*/

/*

// Write a program to check whether a given number is even or odd using function.(TSRS).(Return 1 if even otherwise return 0)
#include<conio.h>
#include<stdio.h>
// function definition
int IsEven(int n);
// main function
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("%d",IsEven(a));
    return 0;
}
// function definition
int IsEven(int n){
 return n%2==0;
}

*/

/*

// Write a program to check whether a given number is even or odd using function.(TSRS).(Return 1 if even otherwise return 0)
#include<conio.h>
#include<stdio.h>
// function definition
int IsEven(int n);
// main function
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(IsEven(a))
     printf("Even = %d",1);
  // printf("Even = 1");
    else
     printf("Odd = %d",0);
  // printf("Odd = 0");
    return 0;
}
// function definition
int IsEven(int n){
 return n%2==0;
}

*/

// Write a program to check whether a given number is even or odd using function.(TSRS).(Return 1 if even otherwise return 0)
#include<conio.h>
#include<stdio.h>
// function definition
int IsEven(int n);
// main function
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(IsEven(a))
     printf("Even = %d",1);
  // printf("Even = 1");
    else
     printf("Odd = %d",0);
  // printf("Odd = 0");
    return 0;
}
// function definition
int IsEven(int n){
    if(n%2)
     return 0;
    else
     return 1;
}