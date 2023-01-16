// Program which takes month number as an input and display number of days in that month
/*
main(){
  int month_no;
  printf("Enter the month number: ");
  scanf("%d",&month_no);

  switch(month_no){
    case 1:
    printf("Month is January\nNo. of days = 31");
    break;
    case 2:
    printf("Month is February\nNo. of days = 28/29");
    break;
    case 3:
    printf("Month is March\nNo. of days = 31");
    break;
    case 4:
    printf("Month is April\nNo. of days = 30");
    break;
    case 5:
    printf("Month is May\nNo. of days = 31");
    break;
    case 6:
    printf("Month is Jun\nNo. of days = 30");
    break;
    case 7:
    printf("Month is July\nNo. of days = 31");
    break;
    case 8:
    printf("Month is August\nNo. of days = 31");
    break;
    case 9:
    printf("Month is September\nNo. of days = 30");
    break;
    case 10:
    printf("Month is October\nNo. of days = 31");
    break;
    case 11:
    printf("Month is November\nNo. of days = 30");
    break;
    case 12:
    printf("Month is December\nNo. of days = 31");
    break;
    default:
    printf("Enter a valid month number");
  }
}
*/

main(){
  int month_no;
  printf("Enter the month number: ");
  scanf("%d",&month_no);

  switch(month_no){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    printf("No. of days = 31");
    break;
    case 2:
    printf("No. of days = 28/29");
    break;
    default:
    printf("No. of days = 30");
  }
  getch();
}