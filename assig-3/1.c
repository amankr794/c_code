
// Program to check whether a given no. is positive or non-positive

// using if 

/* 
 main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num>0)
     printf("%d is positive number",num);
    if(num<=0) printf("%d is non-positive number",num);
    getch();
}
*/


// using if-else 

/*
main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num>0)
      printf("%d is positive number",num);
    else 
      printf("%d is non-positive number",num);
    getch();
}
*/

// using coditional operator
main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    //num>0 ?printf("%d is positive number",num):printf("%d is non-negative number",num);
    printf(num>0 ?"number is positive number":"number is non-negative number");
  // printf("%s",num>0 ?"number is positive number":"number is non-negative number");
     getch();
}

