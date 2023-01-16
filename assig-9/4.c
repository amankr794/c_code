//Write a function to print first n even natural numbers.(TSRN)

/*
//function declaration
void PrintEven(int n);

//function definition
void PrintEven(int n){
   for(int i=1;i<=n;i++)
      printf("%d",2*i);
}
*/

// Write a Program to print first n even natural numbers using function.(TSRN)
#include<conio.h>
#include<stdio.h>
void PrintEven(int);  //function declaration
//main function
void main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("First %d even natural numbers are: ",num);
    PrintEven(num);
    getch();
}
//function definition
void PrintEven(int n){
  // printf("First %d even natural numbers are: ",n);
   for(int i=1;i<=n;i++)
      printf("%d ",2*i);
}