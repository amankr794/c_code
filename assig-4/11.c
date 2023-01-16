// Program to print first N odd natural numbers
main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        printf("%d ",(2*i)-1);
        i++;
    }
}