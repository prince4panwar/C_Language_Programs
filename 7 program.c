//write a program to calculate area of the rectangle take length and breadth from user
main()
{
    float l,b,area;
    printf("Enter length and breadth of rectangle:-\n");
    printf("Enter length :-");
    scanf("%f",&l);
    printf("Enter breadth :-");
    scanf("%f",&b);
    area=l*b;
    printf("Area of rectangle is %f sq units",area);
    getch();
}
