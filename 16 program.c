//Write a program to check whether a given number is positive or non-positive
main()
{   int a;
    printf("Enter a number :- ");
    scanf("%d",&a);
    if(a>=0)
    {
        printf("\n%d is positive",a);
    }
    else
    {
        printf("\n%d is non-positive",a);
    }
    getch();
}
