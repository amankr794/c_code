// odd loop using a do-while
/*
#include<stdio.h>
int main(){
    char another;
    int num;
    do{
       printf("Enter a number: ");
       scanf("%d",&num);
       printf("Square of %d is %d\n",num,num*num);
       printf("Want to ente another number y/n: ");
       fflush(stdin);
       scanf("%c",&another);
    }while(another=='y');
    getch();
}
*/

// odd loop using a for loop
/*
#include <stdio.h>
int main()
{
    int num;
    char another = 'y';
    for (; another == 'y';)
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        printf("Square of %d is %d\n", num, num * num);
        printf("Want to ente another number y/n: ");
        fflush(stdin);
        scanf("%c", &another);
    }
    getch();
}
*/

// odd loo using a while loop
#include <stdio.h>
int main()
{
    char another ='y';
    int num;
    while (another == 'y')
    {
        printf("Enter a number ");
        scanf("%d", &num);
        printf("square of %d is %d\n", num, num * num);
        printf("Want to enter another number y/n ");
        fflush(stdin);
        scanf(" %c", &another);
    }
    return 0;
}
