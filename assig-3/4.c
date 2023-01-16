// Program to check whether a given no. is even or odd without using % operator

// using bitwise operator
/*
main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num&1)
     printf("%d is an odd number",num);
    else
     printf("%d is an even number",num);
} 
*/

// using arithmetic operators

main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num/2*2==num) printf("%d is an even number",num);
    else printf("%d is an odd number",num);
    }
