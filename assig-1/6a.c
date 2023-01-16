//Program to calculate area of circle. Take radius as an input from user
main(){
 int r; // we can also take radius as float type
 float area; // area is always taken as float type
 printf("Enter radius: ");
 scanf("%d",&r);
 area = 2*3.14*r;
 printf("Area of circle = %f",area);
 getch();
}
