// Program to calculate factorial of a given number
/*
main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int fact=1,i=1;
    while(i<=num){
        fact=fact*i;
        i++;
    }
    printf("The factorial of %d is %d",num,fact);
    getch();
}
*/

// using do-while
main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int fact=1,i=1;
    do{
          fact=fact*i;
          i++;
       }while(i<=num);
    printf("The factorial of %d is %d",num,fact);
    getch();
}

//or
/*
main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int fact=1,temp=num;
    while(num){
        fact=fact*num;
        num--;
    }
    printf("The factorial of %d is %d",temp,fact);
    getch();
}
*/

// or using do while
/*
main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int fact=1,temp=num;
    do{
         fact=fact*num;
         num--;
       }while(num);
    printf("The factorial of %d is %d",temp,fact);
    getch();
}
*/