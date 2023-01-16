// Write a program to reverse a string without using strrev function
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char str[1000];
    printf("Enter String: ");
    // string input
    scanf("%[^\n]%*c",str);
    /* gets(str); */
    // length of string
    int l=strlen(str) , temp, i;
    // reverse of string
    for(i=0;i<l/2;i++){
      temp=str[i];
      str[i]=str[l-1-i];
      str[l-1-i]=temp;
      }
    printf("The reverse of string is %s",str);
    getch();
    return 0;
}
