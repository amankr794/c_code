// using if-else ladder
/*
main(){
    int m1,m2,m3,m4,m5;
    printf("Enter the marks of five subjects: ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    float per = (m1+m2+m3+m4+m5)*100/500.0;
    if(per>=60)
     printf("Pass\n1st division");
    else if(per>=50)
     printf("Pass\n2nd division");
    else if(per>=40)
     printf("Pass\n3rd division");
    else
     printf("Fail");

}
 */

// using nested if-else

main()
{
    int m1, m2, m3, m4, m5;
    printf("Enter the marks of five subjects: ");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);
    float per = (m1 + m2 + m3 + m4 + m5) * 100 / 500.0;
    if (per >= 60)
        printf("Pass\n1st division");
    else
    {
        if (per >= 50)
            printf("Pass\n2nd division");
        else
        {
            if (per >= 40)
                printf("Pass\n3rd division");
            else
                printf("Fail");
        }
    }
}