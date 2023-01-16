// write a function to calculate area of circle.(TSRS)

/*
//function declaration
float area(int);
// function definition
float area(int r){
  float Area;
  Area = 3.14*r*r;
  return Area;
}
*/

//or

/*
//function declaration
float area(int);
// function definition
float area(int r){
  return 3.14*r*r;
}
*/


/*
// write a program to calculate area of circle using function.(TRRS)
#include<conio.h>
#include<stdio.h>
float area(int); //declaration
void main(){
    int radius;
    float Area;
    printf("Enter the value of radius: ");
    scanf("%d",&radius);
    Area=area(radius);
    printf("Area of circle is %f",Area);
    getch();
}
float area(int r){
  return 3.14*r*r;
}
*/

/*
// write a program to calculate area of circle using function.(TRRS)
#include<conio.h>
#include<stdio.h>
float area(int); //declaration
void main(){
    int radius;
    printf("Enter the value of radius: ");
    scanf("%d",&radius);
    printf("Area of circle is %f",area(radius));
    getch();
}
float area(int r){
  float Area=3.14*r*r;    //float area=3.14*r*r;
  return Area;            //return area;
}
*/

// write a program to calculate area of circle using function.(TRRS)
#include<conio.h>
#include<stdio.h>
float area(int); //declaration
int main(){
    int radius;
    printf("Enter the value of radius: ");
    scanf("%d",&radius);
    printf("Area of circle is %f",area(radius));
    getch();
    return 0;
}
float area(int r){
  return 3.14*r*r;
}