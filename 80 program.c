//Write a function a calculate sum of squares of first n natural numbers. (Take Something Return Something)
int sqsum(int a)
{
    int b,c=0;
    for(b=1;b<=a;b++)
    c=c+b*b;
    return c;
}
int sqsum(int);
main()
{
    int k,n;
    printf("Enter a number :- ");
    scanf("%d",&n);
    k=sqsum(n);
    printf("Sum of first %d natural number is %d",n,k);
}
