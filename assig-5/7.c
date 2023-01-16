//Program to reverse a number
main(){
    int num,rev=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    int temp=num;
    while(num!=0){
        rev=rev*10+(num%10);
        num/=10;
    }
    printf("The reverse of %d is %d",temp,rev);
    getch();
}