/*
#include <stdio.h>
main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    char ch;
    printf("Enter a symbol(+,-,*,/,e): ");
    fflush(stdin);
    scanf("%c", &ch);

    switch (ch)
    {
    case '+':
        printf("%d+%d=%d", a, b, a + b);
        break;
    case '-':
        printf("%d-%d=%d", a, b, a - b);
        break;
    case '*':
        printf("%d*%d=%d", a, b, a * b);
        break;
    case '/':
        printf("%d/%d=%d", a, b, a / b);
        break;
    case '%':
        printf("%d%%%d=%d", a, b, a % b);
        break;
    case 'e':
        printf("Exit");
        break;
    default:
        printf("Enter a valid symbol");
    }
}
*/

/*
main()
{
    char choice;
    // printing menu on the screen
    printf("\na. Addition");
    printf("\nb. Subtraction");
    printf("\nc. Multiplication");
    printf("\nd. Division");
    printf("\ne. Exit");
    printf("\nEnter your choice: ");
    scanf("%c", &choice);
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    switch (choice)
    {
    case 'a':
        printf("%d+%d=%d", a, b, a + b);
    case 'b':
        printf("%d-%d=%d", a, b, a - b);
        break;
    case 'c':
        printf("%d*%d=%d", a, b, a * b);
        break;
    case 'd':
        printf("%d/%d=%d", a, b, a / b);
        break;
    case 'e':
        printf("Exit");
        break;
    default :
        printf("Ivalid choice");
    }
    getch();
}
*/

// main()
// {
//     int choice, a, b;
//     while (1)
//     {
//         // printing menu on the screen
//         printf("\n1. Addition");
//         printf("\n2. Subtraction");
//         printf("\n3. Multiplication");
//         printf("\n4. Division");
//         printf("\n5. Exit");
//         printf("\nEnter your choice: ");
//         scanf("%d", &choice);
//         switch (choice)
//         {
//         case 1:
//             printf("Enter two numbers: ");
//             scanf("%d%d", &a, &b);
//             printf("%d+%d=%d\n", a, b, a + b);
//             break;
//         case 2:
//             printf("Enter two numbers: ");
//             scanf("%d%d", &a, &b);
//             printf("%d-%d=%d\n", a, b, a - b);
//             break;
//         case 3:
//             printf("Enter two numbers: ");
//             scanf("%d%d", &a, &b);
//             printf("%d*%d=%d\n", a, b, a * b);
//             break;
//         case 4:
//             printf("Enter two numbers: ");
//             scanf("%d%d", &a, &b);
//             printf("%d/%d=%d\n", a, b, a / b);
//             break;
//         case 5:
//             exit(0);
//         default:
//             printf("Ivalid choice\n");
//         }
//         getch();
//     }
// }



#include <stdio.h>
main()
{
    char choice;
    int a, b;
    while (1)
    {
        // printing menu on the screen
        printf("\na. Addition");
        printf("\nb. Subtraction");
        printf("\nc. Multiplication");
        printf("\nd. Division");
        printf("\ne. Exit");
        printf("\nEnter your choice: ");
        scanf("%c", &choice);
        switch (choice)
        {
        case 'a':
            printf("Enter two numbers: ");
            scanf("%d%d", &a, &b);
            printf("%d+%d=%d\n", a, b, a + b);
            break;
        case 'b':
            printf("Enter two numbers: ");
            scanf("%d%d", &a, &b);
            printf("%d-%d=%d\n", a, b, a - b);
            break;
        case 'c':
            printf("Enter two numbers: ");
            scanf("%d%d", &a, &b);
            printf("%d*%d=%d\n", a, b, a * b);
            break;
        case 'd':
            printf("Enter two numbers: ");
            scanf("%d%d", &a, &b);
            printf("%d/%d=%d\n", a, b, a / b);
            break;
        case 'e':
            exit(0);
        default:
            printf("Ivalid choice\n");
        }
       
    }
     getch();
}
