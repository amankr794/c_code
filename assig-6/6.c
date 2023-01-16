// Program to print first n prime numbers
main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int num = 2, count = 0;
    for (; count < n; )
    {
        int div;
        for (div = 2; div <= sqrt(num); div++)
        {
            if (num % div == 0)
                break;
        }
        if (div > sqrt(num))
        {
            count++;
            printf("%d\n", num);
        }
        num++;
    }
}
