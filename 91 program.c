//Write a recursive function to print  first N natural number
int fun(int);
main()
{
    int n,b;
    printf("Enter a number :- ");
    scanf("%d",&n);
    b=fun(n);
}
int fun(int n)
{
    int a;
    if(n==1)
    {
    printf("%d",n);
    return 1;
    }
    a=fun(n-1);
    printf("%d",n);
    return a;
}
