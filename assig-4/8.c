// Program to print first N even natural numbers in reverse order
main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while(n){
       printf("%d ",2*n);
       n--;
    }
}