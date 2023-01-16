// Write a program to count occurrence of a given character in a given string.
#include <stdio.h>
#include <conio.h>
int main()
{
    char str[100];
    int occu[100]; // occu array store the occurrence of each character of array
    printf("Enter a String: ");
    gets(str); // taken string as input in str using gets() function
    int i, j, count = 0;
    for (i = 0; str[i]; i++)
    {
        count = 1;
        if (str[i] != 49) // check if the element is visited or not
        {
            for (j = i + 1; str[j]; j++)
                if (str[i] == str[j])
                {
                    count++;
                    str[j] = 49;
                }
            occu[i] = count;
        }
    }
    // print element and their occurrence
    printf("-------------------------");
    printf("\n  Element | Occurrence");
    printf("\n-------------------------");
    for (i = 0; str[i]; i++)
    {
        if (str[i] != 49)
            printf("\n\t%c | %d", str[i], occu[i]);
    }
    printf("\n--------------------------");

    // // printf("\n");
    getch();
    return 0;
}