// Program to swap values of two int variables

main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("Before Swapping:\n a=%d b=%d", a, b);
    // logic of swapping
    int c = a;
    a = b;
    b = c;
    printf("\nAfter Swapping:\n a=%d b=%d", a, b);
    getch();
}