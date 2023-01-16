main(){
    int day_no;
    printf("Enter day number: ");
    scanf("%d",&day_no);
    switch(day_no){
      case 1:
      printf("Monday");
      break;
      case 2:
      printf("Tueday");
      break;
      case 3:
      printf("Wednesday");
      break;
      case 4:
      printf("Thursday");
      break;
      case 5:
      printf("Friday");
      break;
      case 6:
      printf("Saturday");
      break;
      case 7:
      printf("Sunday");
      break;
      default:
      printf("Enter a valid day number");
    }
    getch();
}