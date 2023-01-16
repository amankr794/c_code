//Program to calculate volumeof cuboid. Take user input
main(){
 int l,b,h;
 float vol;
 printf("Enter length,breadth and height: ");
 scanf("%d%d%d",&l,&b,&h);
 vol = l*b*h;
 printf("Volume of cuboid = %.2f",vol);
 getch();
}