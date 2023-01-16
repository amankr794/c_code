// write a function to calculate area of circle.(TSRS)

/*
//function declaration
float circum(int r);
//function definition 
float circum(int r){
 return 2*3.14*r;
}
*/

// write a program to calculate area of circle using function.(TSRS)

//function declaration
#include<conio.h>
#include<stdio.h>
float circum(int);
// main function
int main(){
    int radius;
    printf("Enter the value of radius: ");
    scanf("%d",&radius);
    printf("Circumference of circle is %f",circum(radius));
    getch();
    return 0;
}
//function definition
float circum(int r){
    return 2*3.14*r;
}