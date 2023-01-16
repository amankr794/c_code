// Write a program to count total no. of characters (i.e length) in a given string.
#include <stdio.h>
#include <conio.h>
int main()
{
    char str[100];
    printf("Enter a String: ");
    gets(str);
    int i;
    for (i = 0; str[i]; i++);
    printf("No. of character in %s is %d", str, i);
    getch();
    return 0;
}