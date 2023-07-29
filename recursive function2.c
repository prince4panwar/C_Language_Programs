//Write a recursive function to calculate sum of square of first n natural number
int square(int n);
main()
{
    int n,s;
    printf("Enter a number :- ");
    scanf("%d",&n);
    s=square(n);
    printf("Sum of square of first %d natural is %d",n,s);
    getch();
}
int square(int n)
{
    int s;
    if(n==1)
        return 1;
    s=n*n+square(n-1);
    return s;
}

