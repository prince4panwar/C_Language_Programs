//Write a program to swap values of two int variables without using third variable.
main()
{
    int a,b;
   printf("Enter two numbers\n");
   printf("\nEnter first number:- ");
   scanf("%d",&a);
   printf("\nEnter second number:-");
   scanf("%d",&b);
   printf("\na=%d and b=%d\n",a,b);
   a=b-a;
   b=b-a;
   a=a+b;
   printf("\nBy swapping the values of two variables\n");
   printf("\na=%d and b=%d\n",a,b);
   getch();
}
