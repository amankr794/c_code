// Program to check whether a given number is positive, negative or zero
main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num>0)
     printf("%d is positive number",num);
     else if(num<0)
     printf("%d is negative number",num);
    else
     printf("%d is zero",num);
    getch();
}