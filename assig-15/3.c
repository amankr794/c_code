// Write a function to capitalize a string

// by using user defined function (TSRN)
// void Capitalize(char s[], int l)
// {
//     int i;
//     for (i = 0; i < l; i++)
//     {
//         if (s[i] >= 'a' && s[i] <= 'z')
//         {
//             s[i] = s[i] - 32;
//         }
//     }
//     printf("%s",s);
// }
// // Driver code to check the above function
// #include <stdio.h>
// #include <conio.h>
// #include <string.h>
// void Capitalize(char [], int);
// int main()
// {
//     char str[1000];
//     int len, i;
//     printf("Enter a string: ");
//     gets(str);
//     len = strlen(str);
//     Capitalize(str,len);
//     getch();
//     return 0;
// }





// by using user defined function (TSRS)
// char* Capitalize(char s[], int l)
// {
//     int i;
//     for (i = 0; i < l; i++)
//     {
//         if (s[i] >= 'a' && s[i] <= 'z')
//         {
//             s[i] = s[i] - 32;
//         }
//     }
//     return s; // function return 
// }
// // Driver code to check the above function
// #include <stdio.h>
// #include <conio.h>
// #include <string.h>
// char* Capitalize(char[], int);
// int main()
// {
//     char str[1000];
//     int len, i;
//     printf("Enter a string: ");
//     gets(str);
//     len = strlen(str);
//     printf("%s", Capitalize(str, len));
//     getch();
//     return 0;
// }



// by using predefined function (stlupr())
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char str[1000];
    int len, i;
    printf("Enter a string: ");
    gets(str);
    printf("%s",strupr(str));
    getch();
    return 0;
}