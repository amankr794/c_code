// program to count digits in a given number

/*
main(){
    int num,count=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    int temp=num;
    while(num!=0){
        num%10;
        count++;
        num/=10;
    }
    printf("The count of digits in %d is %d",temp,count);
    getch();
}
*/

//or
/*
main(){
    int num,count=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    int temp=num;
    while(num!=0){
        num=num/10;
        count++;
    }
    printf("The count of digits in %d is %d",temp,count);
    getch();
}
*/
//or
main(){
    int num,count=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    int temp=num;
    while(num){
        num=num/10;
        count++;
    }
    printf("The count of digits in %d is %d",temp,count);
    getch();
}