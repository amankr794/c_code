// write a function to print first n natural numbers.(TSRN)
/*

// function declaration
void PrintN(int);
//function definition
void PrintN(int n){
    for(int i=1;i<=n;i++)
        printf("%d\n",i);
}

*/


// write a program to print first n natural numbers using function.(TSRN)
#include<conio.h>
#include<stdio.h>
// function declaration
void PrintN(int);
void main(){
  int num;
  printf("Enter a number: ");
  scanf("%d",&num);
  //printf("First %d natural numbers are: ",num);
  PrintN(num);
  getch();
}
//function definition
void PrintN(int n){
  printf("First %d natural numbers are:\n",n);
    for(int i=1;i<=n;i++)
        printf("%d\n",i);
}