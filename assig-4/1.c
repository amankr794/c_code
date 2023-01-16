// Program to print first 10 natural numbers

/*
main(){
    int i=1; // intialize loop counter
    while(i<=10) // test loop counter using a condition
    {
        //printf("%d ",i);
        printf("%d\n",i);
        i++; // updating loop counter 
    }

}
*/

// or
/*
main(){
    int i=0;
    while(++i<=10)
     printf("%d ",i);
}
*/

// or
/*
main(){
    int i=0;
    while(i++<10)
     printf("%d ",i);
}
*/

// or using for loop
main(){
for(int i=1;i<=10;printf("%d\n",i++));
}