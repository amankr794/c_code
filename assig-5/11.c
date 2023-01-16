// Program to check whether a given number is a term in fibonacci series or not
// main()
// {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     int a = -1, b = 1, c;
//     while (1)
//     {
//         c = a + b;
//         if (c == num)
//         {
//             printf("%d is a term of fibonacci sries", num);
//             break;
//         }
//         else if (c > num)
//         {
//             printf("%d is a not term of fibonacci sries", num);
//             break;
//         }
//         a = b;
//         b = c;

//     }
//     getch();
// }

main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int a = -1, b = 1, c;
    while (1)
    {
        c = a + b;
        a = b;
        b = c;
        if (c < num)
            continue;
        if (c == num)
        {
            printf("%d is a term of fibonacci sries", num);
            break;
        }
        else
        {
            printf("%d is a not a term of fibonacci sries", num);
            break;
        }
    }
    getch();
}