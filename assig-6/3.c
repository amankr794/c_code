// Program to print all prime numbers between two given numbers
main()
{
    int num1, num2, div;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    for (num1; num1 <= num2;)
    {
        for (div = 2; div <= sqrt(num1); div++)
        {
            if (num1 % div == 0)
                break;
        }
        if (div > sqrt(num1))
            printf("%d\n", num1);
        num1++;
    }
}