// Program to calculate sum of cubes of first N natural numbers
main(){
    int n,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        sum=sum+i*i*i;
        i++;
    }
    printf("sum of cubes of first %d natural numbers is %d",n,sum);
    getch();
}