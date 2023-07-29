//Write a program to swap values of two int variables without using third variable.
main()
{
   float a,b;
    printf("Enter two numbers\n");
    printf("\nEnter first number:- ");
    scanf("%f",&a);
    printf("\nEnter second number:- ");
    scanf("%f",&b);
    printf("\na=%f and b=%f\n",a,b);

    a=a/b;
    b=a*b;
    a=b/a;
     printf("\nEnter for swapping\n");
     getch();

    printf("\nBy swapping the value of two variables\n");
    printf("\na=%f and b=%f",a,b);
    getch();
}
