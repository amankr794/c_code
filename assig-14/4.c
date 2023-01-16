// Write a program to convert a string into uppercase

//Note: The difference between the Ascii code of uppercase characters and lower case characters is 32
// eg   a    A            m     M          z     Z
//      97 - 65  = 32    109 - 77 = 32     122 - 90 = 32  --> logic

#include <stdio.h>
#include <conio.h>
int main()
{
    char str[100];
    printf("Enter String: ");
    gets(str);
    int i;
    for(i=0;str[i];i++)
        if(str[i]>='a'&&str[i]<='z')
          str[i] = str[i] - 32;
    printf("%s",str);
    getch();
    return 0;
}