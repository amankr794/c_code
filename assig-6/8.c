// Program to calculate hcf of two numbers
main(){
      int a,b,H;
          // range of hcf = 1 to min(a,b) these are the possible values of hcf
          printf("Enter two numbers: ");
          scanf("%d%d",&a,&b);
          for(H = a<b?a:b;H>=1;H--) // loop is running from bigger no. to smaller no.
            if(a%H==0&&b%H==0) 
              break;
           printf("HCF : %d",H);
    getch();
}