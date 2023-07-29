//Write a program to check whether a given number is divisible by 5 or not
main()
{
    int a;
    printf("Enter a number :- ");
    scanf("%d",&a);
    if(a%5==0)
    {
        printf("\n%d is divisible by 5",a);
    }
    else
    {
        printf("\n%d not divisible by 5",a);
    }
    getch();
}
