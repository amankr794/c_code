// Write a program to calculate simple interest. Take user input
main(){
 int p,t;
 float r;
 printf("Enter principal,time and rate: ");
 scanf("%d%d%f",&p,&t,&r);
 printf("Simple Interest= Rs. %f",(p*r*t)/100);
 getch();
}
