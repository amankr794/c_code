/* Taking input in String through different programs */

/*
#include <stdio.h>
#include <conio.h>
int main()
{
    // We use for loop to take input in string from user
    char str[40]; // declaring an string of size 40 (Bigger Size so that bari data bhi input ho sake)
    int i;
    printf("Enter your name: ");
    for (i = 0; i <= 39; i++)   //here loops runs 40 times it means user has bound to enter 40 characters
        scanf("%c", &str[i]);
    printf("%d",str);
    getch();
    return 0;

// Note:-- This is not right code to take input from user b/c in this code the user has to bound to enter the
//          no. of chracters as the size of array.
}
*/

/*
#include <stdio.h>
#include <conio.h>
int main()
{
    char str[40];
    int i;
    printf("Enter your name: ");
    for (i = 0; str[i]; i++)
        scanf("%c", &str[i]);
    printf("%s", str);
    getch();
    return 0;

    // Note: -- This code is also not right to take input from user .This program has two major problems.
    //          1st problem - Firstly we check the condition then take data.
    //          2nd problem - we cannot take null character as input from user.
}
*/

/*
#include <stdio.h>
#include <conio.h>
int main()
{
    char str[40];
    int i;
    printf("Enter your name: ");
    for (i = 0; i <= 39; i++)
    {
        scanf("%c", &str[i]);
        if (str[i] == 13)
            break;
    }
    str[i] = '\0';
    printf("%s", str);
    getch();
    return 0;

// Note: -- This code is also not right to take input from user .
//          Because scanf treat Space,Tab,Enter as delimiters . So
//          loop runs 40 times and user have to enter 40 characters.
}
*/

// We can getch() function to take input but getch() cannot echo the input value.
// So we use another function getche() to take input from user intead of scanf().

/*
#include <stdio.h>
#include <conio.h>
int main()
{
    char str[40];
    int i;
    printf("Enter your name: ");
    for (i = 0; i <= 39; i++)
    {
        str[i]=getche();
        if (str[i] == 13)
            break;
    }
    str[i] = '\0';
    //printf("%s", str);  // it shows effect of carrirage return (i.e. \r)
    printf("\n%s", str);
    getch();
    return 0;

// Note: -- This code is also not right to take input from user .
//          Because getche() sare characters ko input le lega other than alphabets
//          Hence we can make this program more effective by applying certain condition on
//          the characters that we take input from getche().
}
*/

/*
#include <stdio.h>
#include <conio.h>
int main()
{
    char str[40];
    int i;
    printf("Enter your name: ");
    for (i = 0; i <= 39; i++)
    {
        str[i] = getche();
        if (str[i] == 13)
            break;
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z' || str[i] == 32)
            ;
        else
            i--;
    }
    str[i] = '\0';
    printf("\n%s", str);
    getch();
    return 0;

    // Note: -- This code is more suitable till now but this code is slightly bigger
    //          We use more suitable programs than this to take input from user.
    //          We use without loop program to take string as input
}
*/

/*  Another Program (Without Loop)  */
/*
#include <stdio.h>
#include <conio.h>
int main()
{
    char str[40];
    printf("Enter your Name: ");
    scanf("%s",str);  // using %s format specifier we can take whole string as input at a time
    printf("\n%s",str); // in this case scanf() will be called one time whole string will be taken
    getch();          // as input at a time
    return 0;

// Note: scanf() is not capable to input multiword string
//       Hence this code is not suitable to take input multiword string
//       Hence we cannot take scanf() metod to take i/p string from user
}
*/

/* Most suitable:  WE USE gets() FUNCTION TO TAKE INPUT STRNG FROM USER. */
// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     char str[40];
//     printf("Enter your Name: ");
//     gets(str);
//     printf("%s",str);
//     getch();
//     return 0;

// Note: Jab bhi string input karana ho the we use gets() function
//       instead of scanf() function.
//      Sabse suitable program string ko input karane ka yahi hai.
//}

/* Taking character as input using getchar() function */
// Note: A getchar() function is a non-standard function whose meaning is already defined in
//       the stdin.h header file to accept a single input from the user.

/*           1.>>
#include <stdio.h>
#include <conio.h>
int main()
{
    char c[50];
    int ch = 0, i = 0; // WE ACN ALSO DECLARE ch as char variable o/p will be same
    printf("\n Enter your Name(Press Enter button to stop)\n");
    do
    {
        ch = getchar(); // get a single character. takes character, number, etc from the user
        c[i] = ch;      // store the ch into c[i]
        i++;
    } while (ch != '\n'); // ch is not equal to '\n' OR while (ch != 10)
    c[i] = '\0';
    printf("Your Name is: %s", c);
    getch();
    return 0;
}
*/

/*       2.>>
#include <stdio.h>
#include <conio.h>
int main()
{
    char c[50];
    int ch = 0, i = 0;
    printf("\nEnter your Name(Press Enter button to stop)\n");
    do
    {
        c[i] = getchar(); // get a single character. takes character, number, etc from the user
        if (c[i] == 10)   // 10 is ascii code of enter key OR  if (c[i] == '\n') 
        {
            c[i] = '\0';
            break;
        }
        i++;
    } while (1); // ch is not equal to 32
    printf("Your Name is: %s", c);
    getch();
    return 0;

//    Note: This program is also better to take input string
}
*/
 
 // VVI
 /*           Hme gets() function ka use nahi karna hai Hme scanf() ka hi use karke sentence
               (i.e multi word string ) ko input lena hai  .             */

              #include <stdio.h>
              #include <conio.h>
              int main()
              {
                  char ch[50];
                  printf("Enter your name: ");
                  /* scanf("%s",ch); --> ye wala scanf tab tak character input lega jab tak space encounter na ho jaye */
                  
                 // In order to take a line as input, you can use scanf("%[^\n]%s", s);
                  scanf("%[^\n]s",ch); // ye wala scanf tab tak character input lega jab tak new line (i.e enter key ) encounter na ho jaye */
                  printf("%s\n",ch);     // Hence by using this scanf we are capable to take multi word string as input
                  
                // In order to take a line as input, you can use scanf("%[^\n]%*c", s);
                  scanf("%[^\n]%*c",ch);
                  printf("%s",ch);
                  getch();
                  return 0;
              }

              /* You can take a string as input in C using scanf(“%s”, s). 
              But, it accepts string only until it finds the first space.
              In order to take a line as input, you can use scanf("%[^\n]%*c", s); 
              where s is defined as char s[MAX_LEN] where MAX_LEN is the maximum size of s. 
              Here, [] is the scanset character. ^\n stands for taking input until a newline isn't encountered. 
              Then, with this %*c, it reads the newline character and here, the used * indicates that 
              this newline character is discarded.*/

/*
 conclusion: We can take string as input in c using different functions
             
             char str[100];
             
             1> scanf("%s",str);  ---> by using this we can take input only single word string
             
             2> scanf("%[^\n]s",str); 
                        or
                scanf("%[^\n]%*c",str); ---> ye wala scanf tab tak character input lega jab tak new line (i.e enter key ) encounter na ho jaye.
             
             3> gets(str) ---> by using this we can take multi word string as input.It can take character,number,etc from user

             4> str[i]=getchar()  ---> get a single character. takes character, number, etc from the user.
             
             5> str[i]=getche() --> get a single character. takes character, number, etc from the user.
*/