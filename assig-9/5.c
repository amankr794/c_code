//write a function to calculate sum of first n natural numbers.(TSRS)

/*
int SumN(int n); // declaration
// definition
int SumN(int n){
    int i,sum;
    for(i=1,sum=0;i<=n;i++)
     sum=sum+i;
     printf("Sum of fist %d natural numbers is %d",n,sum);
     return sum;
}
*/

// write a program to calculate sum of first n natural numbers using function.(TSRS)
// #include<conio.h>
// #include<stdio.h>
// int SumN(int n); // declaration
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     printf("Sum of fist %d natural numbers is %d",num,SumN(num));
//     return 0;
// }
// // definition
// int SumN(int n){
//     int i,sum;
//     for(i=1,sum=0;i<=n;i++)
//      sum=sum+i;
//      return sum;
// }

// write a program to calculate sum of first n natural numbers using function.(TSRS)
#include<conio.h>
#include<stdio.h>
int SumN(int n); // declaration
// main function
int main(){
    int num,SUM=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    SUM=SumN(num);
    printf("Sum of fist %d natural numbers is %d",num,SUM);
    return 0;
}
// definition
int SumN(int n){
    int i,sum;
    for(i=1,sum=0;i<=n;i++)
     sum=sum+i;
     return sum;
}