// Program to print first 10 even natural numbers
/*
main(){
    int i=2;
    while(i<=2*10){
        printf("%d ",i);
        i+=2;
    }
}
*/

//or
/*
main(){
    int i=1;
    while(i<=10){
        printf("%d ",i*2);
        i++;
    }
}
*/

//or
/*
main(){
    int i=0;
    while(++i<=10)
        printf("%d ",i*2);
}
*/

//or
/*
main(){
    int i=0;
    while(i++<10)
        printf("%d ",i*2);
}
*/

//or
/*
main(){
    int i=10;
    while(i--)
        printf("%d ",(10-i)*2);
}
*/

//or
/*
main(){
    int i=10;
    while(--i>=0)
        printf("%d ",(10-i)*2);
}
*/

//or
main(){
    int i=10;
    while(i){
        printf("%d ",(11-i)*2);
        --i;
    }
}