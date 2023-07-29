//Write a function to calculate factorial of a number. (TSRS)
int fact(int);
int fact(int a)
{
    int c=1;
    for(;1<=a;a--)
    c=a*c;
    return c;
}
main()
{
    int a,b;
    printf("Enter a number :- ");
    scanf("%d",&a);
    b=fact(a);
    printf("Factorial of %d is %d",a,b);
    getch();

}

