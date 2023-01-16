/* Programs to print characters of string using different code */

// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     char str[10] = {'B', 'H', 'O', 'P', 'A', 'L'};
//    int i;

//     /*
//     for (i = 0; i <= 9; i++)
//         printf("%c", str[i]);
//     */

//     /*
//     for (i = 0; i <= 5; i++)
//         printf("%c", str[i]);
//     */

//     /*
//     for (i = 0; str[i] != 0; i++)   // here loops runs jab tak null character encounter na ho jaye
//         printf("%c", str[i]);
//     */

//     /*
//     for (i = 0; str[i] != '\0'; i++)   // loops stop when null character encounter 
//         printf("%c", str[i]);
//     */

//    /*
//      for (i = 0; str[i]; i++)   // loops stop when null character encounter
//          printf("%c", str[i]);
//    */

//     /* printf("%s", str);  This is the most convient way to print the characters of srting*/ 

//     getch();
//     return 0;
//}

// #include <stdio.h>
// #include <conio.h>
//     int main()
//     {
//         char str[10] = "BHOPAL";  // this is most convient way to initialize a string
//         printf("%s", str);
//         getch();
//         return 0;
//     }

/* Q> What happens when we initialize a string more than its size */

// #include <stdio.h>
// #include <conio.h>
//     int main()
//     {
//         char str[10] = "BHOPALBIHAR";
//         printf("%s", str);
//         getch();
//         return 0;
//     }

    // warning: initializer-string for array of chars is too long