// Write a program to convert a string into lowercase

//Note: The difference between the Ascii code of uppercase characters and lower case characters is 32
// eg    A        a     M         m      Z        z
//      65 + 32 = 97   77 + 32 = 109    90 + 32 = 122 --> logic

#include <stdio.h>
#include <conio.h>
int main()
{
    char str[100];
    printf("Enter String: ");
    gets(str);
    int i;
    for(i=0;str[i];i++)
        if(str[i]>='A'&&str[i]<='Z')
          str[i] = str[i] + 32;
    printf("%s",str);
    getch();
    return 0;
}