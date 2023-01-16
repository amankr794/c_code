// Program to check wheteher a given number is divisible by 5 or not

// using % oprtator


main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 5 == 0)
        printf("%d is divisible by 5", num);
    else
        printf("%d is not divisible by 5",num);
}


// using % operator

/*
main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 5)
        printf("%d is not divisible by 5", num);
    else
        printf("%d is divisible by 5",num);
}
*/


