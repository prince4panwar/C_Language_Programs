//Write a recursive function to calculate sum of first n odd numbers.
int fun(int);
main()
{
    int n,a;
    printf("Enter a number :- ");
    scanf("%d",&n);
    a=fun(2*n-1);
    printf("Sum of first %d is %d",n,a);
    getch();
}
int fun(int n)
{
    int s;
    if(n==1)
    return 1;
   s=n+fun(n-2);
   return s;
}

