// Program to calculate lcm of two numbers

/* lcm using hcf */
// main()
// {
//     int num1, num2;
//     printf("Enter two numbers: ");
//     scanf("%d%d", &num1, &num2);

//     if (num1 % num2 == 0)
//     {
//         int lcm = num1 * num2 / (num2);  // logic lcm = a*b/hcf
//         printf("Lcm of %d and %d is %d", num1, num2, lcm);
//     }
//     else if (num1 > num2)
//     {
//         int divis = num2;
//         int divid = num1;
//         int rem;
//         for (; 1 ;)
//         {
//             rem = divid % divis;
//             if (rem == 0)
//             {
//                 int lcm = num1 * num2 / divis;  // logic lcm = a*b/hcf
//                 printf("Lcm of %d and %d is %d", num1, num2, lcm);
//                 break;
//             }
//             divid = divis;
//             divis = rem;
//         }
//     }
//     else if (num2 % num1 == 0)
//     {
//         int lcm = num1 * num2 / (num1);  // logic lcm = a*b/hcf
//         printf("Lcm of %d and %d is %d", num1, num2, lcm);
//     }
//     else if (num1 < num2)
//     {
//         int divis = num1;
//         int divid = num2;
//         int rem;
//         for (; 1 ;)
//         {
//             rem = divid % divis;
//             if (rem == 0)
//             {
//                 int lcm = num1 * num2 / divis;  // logic lcm = a*b/hcf
//                 printf("Lcm of %d and %d is %d", num1, num2, lcm);
//                 break;
//             }
//             divid = divis;
//             divis = rem;
//         }
//     }
// }

/* we can improve this program by reducing the no. of calculations */
// main()
// {
//     int a, b, L;
//     printf("Enter two numbers: ");
//     scanf("%d%d", &a, &b);
//     for (L = (a > b ? a : b); L <= a * b; L++)   // lower limt of lcm --> L = (a > b ? a : b)]
//     {                                            //           upper limit of lcm --> L <= a*b] ans lies in this range
//         if (L % a == 0 && L % b == 0)
//             break;
//     }
//     printf("Lcm of %d and %d is %d", a, b, L);
//     getch();
// }

/* more improvement in the program */
main()
{
    int a, b, L;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    for (L = (a > b ? a : b); L <= a * b; L = L + (a > b ? a : b)) // lower limt of lcm --> L = (a > b ? a : b)]
    {                                                              //           upper limit of lcm --> L <= a*b] ans lies in this range
        if (L % a == 0 && L % b == 0)                              //  ab hm sirf jo bigger no. hai uske multiple ko hi check karenge [ L = L + (a > b ? a : b) ]
            break;
    }
    printf("Lcm of %d and %d is %d", a, b, L);
    getch();
}