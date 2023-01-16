// Program to print fist N terms of a fibonacci series
/*
main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a=0,b=1,c; 
    while(n){
       printf("%d ",a);
       c=a+b;
       a=b;
       b=c;
       n--;
     }
}
*/

//or
main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a=-1,b=1,count=0,c; 
    while(n){
       c=a+b;
       printf("%d ",c);
       a=b;
       b=c;
       n--;
     }
     getch();
}