// program to calculate sum of digits of a given number
main(){
    int num,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    int temp=num;
    while(num!=0){
        sum=sum+num%10;
        num/=10;
    }
    printf("The sum of digits of %d is %d",temp,sum);
    getch();
}
