// Program to print first N natural numbers in reverse order
/*
main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while(n){
        printf("%d ",n);
        n--;
    }

}
*/

//or
/*
main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while(--n>=0)
        printf("%d ",n+1);
}
*/

//or
/*
main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while(n--)
        printf("%d ",n+1);
}
*/

//or

main(){
    int n,i=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while(i<n){
        printf("%d ",n-i);
        i++;
        }
}