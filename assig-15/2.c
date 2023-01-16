// Write a function to count vowels in a given string

//function definition
int Count_Vowels(char s[], int l){
   int i,count=0;
   for(i=0;i<l;i++){
    switch(s[i]){
       case 'A':
       case 'a':
       case 'E':
       case 'e':
       case 'I':
       case 'i':
       case 'O':
       case 'o':
       case 'U':
       case 'u': count++;
    }
   }
   return count;
}

// Driver code to test the function

#include <stdio.h>
#include <conio.h>
#include <string.h>
int Count_Vowels(char s[], int l);
int main()
{
    char str[500];
    int count;
    printf("Enter String: ");
    gets(str);
    int len = strlen(str);
    count = Count_Vowels(str,len);
    printf("No. of vowels in the string is %d",count);
    getch();
    return 0;
}