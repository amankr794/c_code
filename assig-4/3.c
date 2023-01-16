// Program to print first N natural numbers
/*
main(){
    int n,i=1;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while(i<=n){
        printf("%d ",i);
        i++;
    }
}
*/

//or
/*
main(){
    int n,i=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while(++i<=n)
        printf("%d ",i);
}
*/

// or
/*
main(){
    int n,i=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while(i++<n){
        printf("%d ",i);
    }
}
*/

//or
/*
main(){
    int n,i=1;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",n-(n-i));
        i++;
    }
}
*/

//or using for loop
main(){
    int n,i=1;
    printf("Enter the value of n: ");
    for(scanf("%d",&n);n;n--)
      printf("%d ",i++);
}

