//write a program to calculate volume of cuboid take input from user
 main()
{
  float l,b,h,vol;
  printf("Enter length, breadth, and height of cuboid\n");
  printf("Enter length:-");
  scanf("%f",&l);
  printf("Enter breadth:-");
  scanf("%f",&b);
  printf("Enter height:-");
  scanf("%f",&h);
  vol=l*b*h;
  printf("Volume of cuboid is %f",vol);
  getch();

}
