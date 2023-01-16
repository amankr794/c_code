// Program to check whether a given number is prime or not
/*
main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int bool = 0;
    for(int div=2;div<num;div++){
        if(num%div==0){
            printf("%d in not prime",num);
            bool=1;
            break;
        }
    }
    if(bool==0)
     printf("%d is prime",num);
}
*/

// or

//This program is suitable for the number less than 2 also
/*main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int div;
    for(div=2;div<num;div++){
        if(num%div==0){
           // printf("%d in not prime",num);
            break;
        }
    }
    if(div==num)
     printf("%d is prime",num);
    else
     printf("%d in not prime",num);
}
*/

// we can also reduce the seraching
/*
main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int div;
    for(div=2;div<=num/2;div++){
        if(num%div==0){
            printf("%d in not prime",num);
            break;
        }
    }
    if(div>num/2)
     printf("%d is prime",num);
}
*/

/*
main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int div;
    for (div = 2; div <= sqrt(num); div++)
    {
        if (num % div == 0)
        {
            printf("%d in not prime", num);
            break;
        }
    }
    if (div > sqrt(num))
        printf("%d is prime", num);
}
*/

// all the above program is not suitable for a number less than 2

main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int div;
    for(div=2;div<=num/2;div++){
        if(num%div==0)
            break;
    }
    if(num>=2&&div>num/2)
     printf("%d is prime",num);
    else
     printf("%d in not prime",num);
}

