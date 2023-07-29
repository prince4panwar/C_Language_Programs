//Write a recursive function to calculate sum of first n even natural numbers.
int fun(int);
main()
{
    int n,a;
    printf("Enter a number :- ");
    scanf("%d",&n);
    a=fun(2*n);
    printf("sum of first %d is %d",n,a);
    getch();
}
int fun(int n)
{
    int s;
    if(n==2)
    return 2;
    s=n+fun(n-2);
   return s;
}

