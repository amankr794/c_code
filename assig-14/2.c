// Write a program to calculte length of the string without using strlen function
#include <stdio.h>
#include <conio.h>
int main()
{
    char s[500];
    printf("Enter a string: ");
    
    /*
    scanf("%[^\n]s",s);
    int i;
    for(i=0;s[i];i++);
    printf("The length of string is %d",i);
    */

   /*
    scanf("%[^\n]%*c",s);
    int i;
    for(i=0;s[i];i++);
    printf("The length of string is %d",i);
   */

   /*
    gets(s);
    int i;
    for(i=0;s[i];i++);
    printf("The length of string is %d",i);
   */
    
    int i=0;
    do{
        s[i]=getchar();
        if(s[i]=='\n')
         break;
        i++;
    }while(1);
    s[i]='\0';
    printf("The length of string is %d",i);



    getch();
    return 0;
}