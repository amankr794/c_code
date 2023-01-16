// Write a program to reverse a string using strrev function
#include <stdio.h>
#include <conio.h>
#include <string.h>
void strrev(char [1000],int);
int main()
{
    char str[1000];
    printf("Enter String: ");
    // string input
    scanf("%[^\n]%*c",str);
    /* gets(str); */
    // length of string
    int l=strlen(str);
    // function call
    strrev(str,l);
    getch();
    return 0;
}
void strrev(char str[1000],int l){
int temp,i;
    for(i=0;i<l/2;i++){
      temp=str[i];
      str[i]=str[l-1-i];
      str[l-1-i]=temp;
      }
    printf("The reverse of string is %s",str);
}