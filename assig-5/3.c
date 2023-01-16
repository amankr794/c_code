// Program to calculate sum of first N odd natural numbers
/*
main(){
    int n,sum=0;
    printf("enter the value of n: ");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        sum=sum+(2*i-1);
        i++;
    }
    printf("sum of first %d odd natural numbers is %d",n,sum);
    getch();
}
*/

//or 
/*
main(){
    int n,sum=0;
    printf("enter the value of n: ");
    scanf("%d",&n);
    int i=1;
    while(i<=2*n){
        sum=sum+i;
        i+=2;
    }
    printf("sum of first %d odd natural numbers is %d",n,sum);
    getch();
}
*/

//or using concept of count variable
main(){
    int n,sum=0;
    printf("enter the value of n: ");
    scanf("%d",&n);
    int count=1,odd=1;
    while(count<=n){
        sum=sum+odd;
        odd+=2;
        count++;
    }
    printf("sum of first %d odd natural numbers is %d",n,sum);
    getch();
}
