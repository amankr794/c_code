// Write a function to print frequency of each element of the array

// function definition
void PrintFrequency(int b[], int N)
{
    int i, fr[N], count = 0;   // fr[] array is used for storing frequency of each element of aaray
    for (i = 0; i <= N - 1; i++)
    {
        count = 1;
        if (b[i] != -1)
        {
            int j;
            for (j = i + 1; j <= N - 1; j++)
            {
                if (b[i] == b[j])
                {
                    count++;
                    b[j] = -1; // marked the element -1 as visited 
                }
            }
            fr[i] = count; // in count we have store the count i.e frequency of each element assign this count 
        }                  // to fr[] array.
    }

    // print element and their frequency
    printf("-------------------------");
    printf("\n  Element | Frequency");
    printf("\n-------------------------");
    for(i=0;i<N-1;i++){
        if(b[i]!=-1){
            printf("\n\t%d | %d",b[i],fr[i]);
        }
    }
    printf("\n--------------------------");
}

/* Driver function to check the program */
#include <stdio.h>
#include <conio.h>
void PrintFrequency(int[], int);
void ArrayInput(int[], int);
int main()
{
    int n;
    printf("\nEnter the Array Size: ");
    scanf("%d", &n);
    int a[n];
    // calling ArrayInput()
    printf("Array Elements: ");
    ArrayInput(a, n);
    // calling PrintDistinctElements()
    PrintFrequency(a, n);
    getch();
    return 0;
}
// taking input in array
void ArrayInput(int b[], int N)
{
    for (int i = 0; i < N; i++)
        scanf("%d", &b[i]);
}