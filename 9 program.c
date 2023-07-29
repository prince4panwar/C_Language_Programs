//write a program to simple interest take input from user
main()
{
  int rate, percent, year;
  float si;
  printf("Enter the rate, year, and percent of simple interest\n");
  printf("Enter rate :-");
  scanf("%d",&rate);
  printf("Enter year:-");
  scanf("%d",&year);
  printf("Enter percent :-");
  scanf("%d",&percent);
  si=(rate*year*percent)/100;
  printf("Simple interest is %f",si);
  getch();

}
