//Write a program to swap values of two int variables
main()
{
    int a, b, c;
     printf("Enter two number\n");
     printf("\nEnter first number :-");
     scanf("%d",&a);
     printf("\nEnter second number :-");
     scanf("%d",&b);
     printf("\na=%d and b=%d\n",a,b);
     c=a;
     a=b;
     b=c;
     printf("\nEnter for swapping\n");
     getch();
     printf("\nBy swapping the values of two variables\n");
     printf("\na=%d and b=%d",a,b);
     getch();
}
