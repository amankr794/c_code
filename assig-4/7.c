// Program to print first N even natural numbers
/*
main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int i=2;
    while(i<=2*n){
       printf("%d ",i);
       i+=2;
    }
}
*/

//or

main(){
    int n,i=1;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while(i<=n){
       printf("%d ",i*2/*i+i*/);
       i++;
    }
}