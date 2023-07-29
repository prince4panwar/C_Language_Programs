//Write a program to check nature pf roots of a given quadratic equation
main()
{
    int a,b,c,d;
    printf("Enter coefficient a, b, c of a*x*x + b*x + c\n");
    printf("Enter a:- ",a);
    scanf("%d",&a);
    printf("Enter b:- ",b);
    scanf("%d",&b);
    printf("Enter c:- ",c);
    scanf("%d",&c);
    d = b*b - 4*a*c;
    if(d>0)
    {
        printf("Nature of given quadratic equation is real and distinct\n");
    }
   else if(d==0)
    {
       printf("Nature of given quadratic equation is real and equal\n");
    }

    else
    {
        printf("Nature of given quadratic equation is Imaginary\n");
    }
    getch();

}
