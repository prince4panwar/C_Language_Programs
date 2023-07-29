//write a program to calculate factorial of a number
main()
{
    int a=1,n,fact=1;
    printf("Enter a number :- ");
    scanf("%d",&n);
    while(a<=n)
    {
        fact=a*fact;
        a++;
    }
    printf("Factorial of %d is %d",n,fact);
    getch();
}
