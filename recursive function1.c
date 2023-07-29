//Write a recursive function to calculate sum of first even natural number
main()
{
    int n,s;
    printf("Enter a number :- ");
    scanf("%d",&n);
    s=even(n);
    printf("Sum of first %d even natural is %d",n,s);
    getch();
}
int even(int n)
{
    int s;
    if(n==1)
        return 2;
    s=2*n+even(n-1);
    return s;
}
