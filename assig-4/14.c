// Program to calculate sum of first N natural numbers
// main(){
//     int n,sum=0,temp;
//     printf("Enter the value of n: ");
//     scanf("%d",&n);
//     temp=n;
//     while(n){
//         sum=sum+n;
//         n--;
//     }
//     printf("Sum of first %d natural numbers is %d",temp,sum);

// }

main(){
    int n,i=1,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while(i<=n){
        sum=sum+i;
        i++;
    }
    printf("Sum of first %d natural numbers is %d",n,sum);

}