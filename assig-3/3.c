// Program to check whether a given no. is even or odd

// using % operator
/*
main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num%2)
     printf("%d is an odd number",num);
    else
     printf("%d is an even number",num);
}
*/

// using conditional operator
/*
main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    num%2?printf("%d is an odd number",num):printf("%d is an even number",num);
} 
*/

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

// using bitwise operator
/*
main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if((num&1)==1)
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