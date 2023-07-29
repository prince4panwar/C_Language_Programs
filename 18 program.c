//Write a program to check whether a given number is even or odd
main()
{
    int a;
    printf("Enter a number :- ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("\n%d is even",a);
    }
    else
    {
        printf("\n%d is odd",a);
    }
    getch();
}
