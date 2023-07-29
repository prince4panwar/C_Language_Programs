//Write a program to check a given number is even or odd without using % operator
main()
{
    int a,b,e;
    printf("Enter a number :- ");
    scanf("%d",&a);

    b=a/2;
    e=b*2;

    if(e==a)
    {
        printf("\n%d is even",a);
    }
    else
    {
        printf("\n%d is odd",a);
    }
    getch();
}
