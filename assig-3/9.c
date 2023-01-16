// Program to find greater among three numbers

// using if-else
/*
main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
        if (a > c)
            printf("%d is greater", a);
        else
            printf("%d is greater", c);
    else
        if (b > c)
            printf("%d is greater", b);
        else
            printf("%d is greater", c);
    getch();
}
*/

// using conditional operator
main(){
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("%d",a>b?a>c?a:c:b>c?b:c);
    getch();
}