// Program to print next prime number of a given number

/*
main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int next_Prime = num + 1;
    for (; next_Prime; next_Prime++)
    {
        int div = 2;

        for (; div <= sqrt(next_Prime); div++)
        {
            if (next_Prime % div == 0)
                break;
        }
        if (div > sqrt(next_Prime))
        {
            printf("%d", next_Prime);
            break;
        }
    }
}
*/

/* 
This program is not right for the no. less than 2

main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int next_Prime = num + 1;
    for (; next_Prime; next_Prime++)
    {
        int div = 2;

        for (; div <= sqrt(next_Prime); div++)
        {
            if (next_Prime % div == 0)
                break;
        }

        if (div <= sqrt(next_Prime))
            continue;
        else
        {
            printf("%d", next_Prime);
            break;
        }
    }
}
*/


main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int next_Prime = num + 1;
    for (; next_Prime; next_Prime++)
    {
        int div = 2;
        for (; div <= next_Prime / 2; div++)
        {
            if (next_Prime % div == 0)
                break;
        }
        if (next_Prime >= 2 && div > next_Prime/2)
        {
            printf("%d", next_Prime);
            break;
        }
    }
}
