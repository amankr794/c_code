// Program to check whether an year is a leap year or not

// using if-else
/*
main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 100)
        // non-centuary yaer
        if (year % 4)
            printf("Not a leap year");
        else
            printf("Leap year");
    else
    {
        // centuary year
        if (year % 400)
            printf("Not a leap year");
        else
            printf("Leap year");
    }
    getch();
}
*/


// using conditional operator
main(){
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
/*  if (year % 100)
       (year % 4)?printf("Not a leap year"):printf("Leap year");
    else
        (year % 400)?printf("Not a leap year"):printf("Leap year");
*/

//  (year % 100)?(year % 4)?printf("Not a leap year"):printf("Leap year"):(year % 400)?printf("Not a leap year"):printf("Leap year");
   
   printf(year % 100?year % 4?"Not a leap year":"Leap year":year % 400?"Not a leap year":"Leap year");
}