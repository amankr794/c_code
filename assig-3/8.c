// Program to find greater among two numbers

// using if-else
/*
main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    if (num1 > num2)
        printf("%d is greater", num1);
    else
        printf("%d is greater", num2);
    getch();
}
*/


// using conditional operator
main(){
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    printf("%d is greater",num1>num2?num1:num2);
    getch();
}