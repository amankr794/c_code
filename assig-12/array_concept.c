/* Programs to print different elements of array and take input in array using different methods  */

#include <stdio.h>
#include <conio.h>
int main()
{
    // int a[]; //error
    //  int a[5]; // declaration of array

    // int a[5]={10,50,30,40,70};  // array initialization at the time of declaration
    // for(int i=0;i<5;i++)printf("%d",a[i]);

    // int a[5] = {2,3,4,5,6,7,8,9};  // warning: excess elements in array initializer
    // for(int i=0;i<5;i++)printf("%d",a[i]);

    // int a[5] = {2,4,5};
    // for(int i=0;i<5;i++)printf("%d",a[i]);

    // int a[]={10,50,30,80,20};
    // for(int i=0;i<5;i++)printf("%d ",a[i]);

    /* taking inputs in array from user using scanf but without for loop and displaying the element of array using printf*/
    // int a[5];
    // printf("Enter 5 array elements: ");
    // scanf("%d",&a[0]);
    // scanf("%d",&a[1]);
    // scanf("%d",&a[2]);
    // scanf("%d",&a[3]);
    // scanf("%d",&a[4]);

    // printf("%d ",a[0]);
    // printf("%d ",a[1]);
    // printf("%d ",a[2]);
    // printf("%d ",a[3]);
    // printf("%d ",a[4]);

    /* we can also do it by using single scanf() and single printf() */
    // int a[5];
    // printf("Enter 5 array elements: ");
    // scanf("%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4]);
    // printf("%d %d %d %d %d",a[0],a[1],a[2],a[3],a[4]);

    /* The above two methods is very tedius . we will use loop to take input in array and display the element of arry */
    // int a[5];
    // printf("Enter 5 array elements: ");
    // for(int i=0;i<5;i++)scanf("%d",&a[i]);
    // for(int i=0;i<5;i++)printf("%d ",a[i]);
    // int num = a[3]%10;
    // printf("\n%d",num);

    /* taking n elements input in array by user */
    // int n;
    // printf("Enter a number: ");
    // scanf("%d", &n);
    // printf("Enter %d array elements: ", n);
    // int a[n]; // declaration of an arry of n size
    // for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    // for  (int i = 0; i < n; i++) printf("%d ", a[i]);

    // or
    // int n;
    // printf("Enter a number: ");
    // scanf("%d", &n);
    // printf("Enter %d array elements: ", n);
    // int a[1000]; // declaration of an arry of n size
    // for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    // for (int i = 0; i < n; i++) printf("%d ", a[i]);

    // int num = a[4] % 10;
    // printf("\n%d", num);
    // getch();
    // return 0;

                                  /* finding size of array using sizeof() */
    // int a[7];
    // printf("%d bytes", sizeof(a));

    // int a[] = {11, 15, 6, 8, 9, 10};
    // printf("%d bytes\n", sizeof(a));
    // printf("%d no. of variables", sizeof(a) / sizeof(a[0])); // no. of variables in array
    
}