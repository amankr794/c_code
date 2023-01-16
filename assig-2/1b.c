// Program to swap values of two int variables without the use of third variables

// main()
// {
//     int a, b;
//     printf("Enter two numbers: ");
//     scanf("%d%d", &a, &b);
//     printf("Before Swapping:\n a=%d b=%d", a, b);
//     // logic of swapping
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("\nAfter Swapping:\n a=%d b=%d", a, b);
//     getch();
// }

/* using * / operator */
// main()
// {
//     int a, b;
//     printf("Enter two numbers: ");
//     scanf("%d%d", &a, &b);
//     printf("Before Swapping:\n a=%d b=%d", a, b);
//     // logic of swapping
//     a=a*b;
//     b=a/b;
//     a=a/b;
//     printf("\nAfter Swapping:\n a=%d b=%d", a, b);
//     getch();
// }

/* using bitwise operator(xor) */
// main()
// {
//     int a, b;
//     printf("Enter two numbers: ");
//     scanf("%d%d", &a, &b);
//     printf("Before Swapping:\n a=%d b=%d", a, b);
//     // logic of swapping
//     a=a^b;
//     b=a^b;
//     a=a^b;
//     printf("\nAfter Swapping:\n a=%d b=%d", a, b);
//     getch();
// }

/* using single line of code */
main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("Before Swapping:\n a=%d b=%d", a, b);
    // logic of swapping
    b=(a+b)-(a=b);
    printf("\nAfter Swapping:\n a=%d b=%d", a, b);
    getch();
}