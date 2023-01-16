/*
   CO Prime numbers are those numbers that have only one common factor ,namely 1
   That means a pair of numbers are said to be co prime when they have their highest common factor as 1.
*/
// program to check whether two given numbers are co-Prime or not
main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    if (num1 % num2 == 0)
        printf(" %d and %d are not co-prime", num1, num2);
    else if (num1 > num2)
    {
        int divis = num2;
        int divid = num1;
        int rem;
        for (int i = 1; i; i++)
        {
            rem = divid % divis;
            if (rem == 1)
            {
                printf(" %d and %d are co-prime", num1, num2);
                break;
            }
            divid = divis;
            divis = rem;
        }
    }
    else if (num2 % num1 == 0)
        printf(" %d and %d are not co-prime", num1, num2);
    else if (num1 < num2)
    {
        int divis = num1;
        int divid = num2;
        int rem;
        for (int i = 1; i; i++)
        {
            rem = divid % divis;
            if (rem == 0)
            {
                printf(" %d and %d are co-prime", num1, num2);
                break;
            }
            divid = divis;
            divis = rem;
        }
    }
}