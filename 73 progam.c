/*Write a menu driven program with following option.
  a.Check whether a given set of three numbers are lengths of an isosceles triangle.
  b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not.
  c. Check whether a given set of three numbers are equilateral triangle or not.
  d. Exit
*/
main()
{
    char x;
    float a,b,c;
    printf("Press a for checking whether a given set of three numbers are lengths of an isosceles triangle.\n");
    printf("Press b for checking whether a given set of three numbers are lengths of sides of a right angled triangle or not.\n");
    printf("Press c for checking whether a given set of three numbers are equilateral triangle or not.\n");
    printf("Press d Exit\n\n");
    printf("Press a Character(a-d) :- ");
    scanf("%c",&x);
    switch(x)
    {
    case 'a':
        printf("\nEnter length of a first side  :- ");
        scanf("%f",&a);
        printf("Enter length of a second side :- ");
        scanf("%f",&b);
        printf("Enter length of a third side  :- ");
        scanf("%f",&c);
        if(a==b&&a!=c&&b!=c)
        printf("\n%f, %f and %f are lengths of an isosceles triangle",a,b,c);
        else if(a==c&&a!=b&&c!=b)
        printf("\n%f, %f and %f are lengths of an isosceles triangle",a,b,c);
        else if(b==c&&b!=a&&c!=a)
        printf("\n%f, %f and %f are lengths of an isosceles triangle",a,b,c);
        else
        printf("\n%f, %f and %f are not lengths of an isosceles triangle",a,b,c);
        break;

    case 'b':
        printf("\nEnter length of a first side  :- ");
        scanf("%f",&a);
        printf("Enter length of a second side :- ");
        scanf("%f",&b);
        printf("Enter length of a third side  :- ");
        scanf("%f",&c);
        if(a*a==b*b+c*c)
        printf("\n%f, %f and %f are lengths of a right angle triangle",a,b,c);
        else if(b*b==a*a+c*c)
        printf("\n%f, %f and %f are lengths of a right angle triangle",a,b,c);
        else if(c*c==a*a+b*b)
        printf("\n%f, %f and %f are lengths of a right angle triangle",a,b,c);
        else
        printf("\n%f, %f and %f are not lengths of a right angle triangle",a,b,c);
        break;
    case 'c':
        printf("\nEnter length of a first side  :- ");
        scanf("%f",&a);
        printf("Enter length of a second side :- ");
        scanf("%f",&b);
        printf("Enter length of a third side  :- ");
        scanf("%f",&c);
        if(a==b==c)
        printf("\n%f, %f and %f are lengths of an equilateral triangle",a,b,c);
        else
        printf("\n%f, %f and %f are not lengths of an equilateral triangle",a,b,c);
        break;
    case 'd':
        printf("\nYou have chosen Exit");
        exit(0);
        getch();
    default :
        printf("\nPlease Press a Character from a to d");
    }
    getch();
}
