//Write a function to calculate sum of first n natural numbers. (Take Something Return Something
int sum(int a)
{
    int b,c=0;
    for(b=1;b<=a;b++)
    c=c+b;
    return c;
}
int sum(int);
main()
{
    int k,n;
    printf("Enter a number :- ");
    scanf("%d",&n);
    k=sum(n);
    printf("Sum of first %d natural number is %d",n,k);
}

