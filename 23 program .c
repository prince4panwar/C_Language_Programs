//Write a program to find greater between two numbers
main()
{
    int a,b;
    printf("Enter two numbers\n");
    printf("Enter first number  :- ");
    scanf("%d",&a);
    printf("Enter second number :- ");
    scanf("%d",&b);
    if(a>b)
    {
        printf("%d is greater number than %d",a,b);
    }
    else
    {
        printf("%d is greater number than %d",b,a);
    }
    getch();
}
