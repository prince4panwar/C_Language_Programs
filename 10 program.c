//write a program to calculate average of three number
main()
{
    float a, b, c, avg;
    printf("Enter three number for the average\n");
    printf("Enter first number :-");
    scanf("%f",&a);
    printf("Enter second number :-");
    scanf("%f",&b);
    printf("Enter third number :-");
    scanf("%f",&c);
    avg=(a+b+c)/3;
    printf("Average of three numbers is %f",avg);
    getch();

}
