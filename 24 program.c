////Write a program to find greater among three numbers
main()
{
    int a, b, c;
    printf("Enter three numbers\n");
    printf("\nEnter first number  :- ");
    scanf("%d",&a);
    printf("\nEnter second number :- ");
    scanf("%d",&b);
    printf("\nEnter third number  :- ");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("\n%d is greatest number",a);
    }
    if(b>a && b>c)
    {
        printf("\n%d is greatest number",b);
    }
     if(c>a)
    {
        printf("\n%d is greatest number",c);
    }
    getch();


}
