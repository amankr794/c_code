// Program to check nature of roots of a given quadratic equation
main()
{
    float a, b, c, d;
    printf("Enter a,b,c: ");
    scanf("%f%f%f", &a, &b, &c);
    d = (b * b) -( 4 * a * c);
    if (d == 0)
    {
        printf("roots are real and equal\n");
        printf("%.2f", -b / (2 * a));
    }
    else if (d > 0)
    {
        printf("roots are real and unequal\n");
        printf("r1 = %.2f  r2 =%.2f", (-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (2 * a));
    }
    else
        printf("roots are imaginary");
}