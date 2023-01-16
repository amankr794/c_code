// Write a program to calculate simple interest. Take user input
main(){
 int p,t;
 float r,s_i;
 printf("Enter principal,time and rate: ");
 scanf("%d%d%f",&p,&t,&r);
 s_i = (p*r*t)/100;
 printf("Simple Interest= Rs. %f",s_i);
 getch();
}
