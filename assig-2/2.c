// Program to print last digit of a given number
main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("The last digit of %d is %d",num,num%10);
    getch();
}