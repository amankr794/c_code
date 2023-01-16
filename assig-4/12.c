// Program to print first N odd natural numbers in reverse order

// main()
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     int i = 1;
//     while (i <= 2 * n)
//     {
//         printf("%d ", 2 * n - i);
//         i += 2;
//     }
// }

/*
   another logic

  n=5 first 5 odd natural no. 1 3 5 7 9
      first 5 odd natural no. in reverse order 9 7 5 3 1

   i     2n+1 - 2i
   1      11  - 2   9
   2      11  - 4   7
   3      11  - 6   5
   4      11  - 8   3
   5      11  - 10  1

*/

main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int i = 1;
    while (i <= n)
    {
        printf("%d ", 2 * n + 1 - 2 * i);
        i++;
    }
}