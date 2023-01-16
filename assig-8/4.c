/*                          menu driven program
main()
{
    char choice;
    printf("\na. Isosceles triangle");
    printf("\nb. Right angled triangle");
    printf("\nc. Equilateral triangle");
    printf("\nd. Exit");
    printf("\nEnter your choice: ");
    scanf("%c", &choice);
    int l1, l2, l3;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &l1, &l2, &l3);

    switch (choice)
    {
    case 'a':
        if (l1 == l2 || l2 == l3 || l3 == l1)
            printf("Three numbers are the length of an isosceles triangle");
        break;
    case 'b':
        if (l1 * l1 == (l2 * l2 + l3 * l3) || l2 * l2 == (l3 * l3 + l1 * l1) || l3 * l3 == (l1 * l1 + l2 * l2))
            printf("Three numbers are the length of a right angled triangle");
        break;
    case 'c':
        if (l1 == l2 && l2 == l3)
            printf("Three numbers are the length of an equilateral triangle");
        break;
    case 'd':
        printf("Exit");
        break;
    default:
        printf("Invalid choice");
    }
    getch();
}
*/

// main()
// {
//     int choice, l1, l2, l3;
//     while (1)
//     {
//         printf("\n1. Isosceles triangle");
//         printf("\n2. Right angled triangle");
//         printf("\n3. Equilateral triangle");
//         printf("\n4. Exit");
//         printf("\nEnter your choice: ");
//         scanf("%d", &choice);

//         switch (choice)
//         {
//         case 1:
//             printf("Enter three numbers: ");
//             scanf("%d%d%d", &l1, &l2, &l3);
//             if (l1 == l2 || l2 == l3 || l3 == l1)
//                 printf("Three numbers are the length of an isosceles triangle\n");
//             break;
//         case 2:
//             printf("Enter three numbers: ");
//             scanf("%d%d%d", &l1, &l2, &l3);
//             if (l1 * l1 == (l2 * l2 + l3 * l3) || l2 * l2 == (l3 * l3 + l1 * l1) || l3 * l3 == (l1 * l1 + l2 * l2))
//                 printf("Three numbers are the length of a right angled triangle\n");
//             break;
//         case 3:
//             printf("Enter three numbers: ");
//             scanf("%d%d%d", &l1, &l2, &l3);
//             if (l1 == l2 && l2 == l3)
//                 printf("Three numbers are the length of an equilateral triangle\n");
//             break;
//         case 4:
//             exit(0); // O indicates tht program terminates normally . Exit function is used to terminate the loop and move control outside of the loop
//         default:                                                  //  Exit function na sirf loop balki pure program ko hi end kar deta hai
//             printf("Invalid choice\n");
//         }
//         getch();
//     }
// }

main()
{
    int choice, l1, l2, l3;
    while (1)
    {
        printf("\n1. Isosceles triangle");
        printf("\n2. Right angled triangle");
        printf("\n3. Equilateral triangle");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter three numbers: ");
            scanf("%d%d%d", &l1, &l2, &l3);
            if (l1 == l2 || l2 == l3 || l3 == l1)
                printf("Three numbers are the length of an isosceles triangle\n");
            break;
        case 2:
            printf("Enter three numbers: ");
            scanf("%d%d%d", &l1, &l2, &l3);
            if (l1 * l1 == (l2 * l2 + l3 * l3) || l2 * l2 == (l3 * l3 + l1 * l1) || l3 * l3 == (l1 * l1 + l2 * l2))
                printf("Three numbers are the length of a right angled triangle\n");
            break;
        case 3:
            printf("Enter three numbers: ");
            scanf("%d%d%d", &l1, &l2, &l3);
            if (l1 == l2 && l2 == l3)
                printf("Three numbers are the length of an equilateral triangle\n");
            break;
        case 4:
            break;
        default:                                                
            printf("Invalid choice\n");
        } // end of switch
        if(choice==4)
         break;
    } // end of loop
}
