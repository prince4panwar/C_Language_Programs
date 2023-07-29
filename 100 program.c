//Write a recursive function to calculate sum of first n natural numbers.
int fun(int);
main()
{
    int n,a;
    printf("Enter a number :- ");
    scanf("%d",&n);
    a=fun(n);
    printf("Sum of first %d is %d",n,a);
    getch();
}
int fun(int n)
{
    int s;
    if(n==1)
    return 1;
   s=n+fun(n-1);
   return s;
}
