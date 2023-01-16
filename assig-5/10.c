// Program to find Nth term of a fibonacci series
main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a=-1,b=1,c,temp=n;
    while(n){
       c=a+b;
       a=b;
       b=c;
       n--;
     }
     printf("The %d term of fibonacci series is %d",temp,c);

}