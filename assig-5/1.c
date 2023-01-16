// Program to calculate sum of squares of first N natural numbers
main(){
    int n,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        sum=sum+i*i;
        i++;
    }
    printf("sum of squares of first %d natural numbers is %d",n,sum);
    getch();
}