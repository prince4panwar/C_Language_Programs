//Write a recursive function to calculate sum of digits of given number.
int fun(int);
main()
{
    int n,a;
    printf("Enter a number :- ");
    scanf("%d",&n);
    a=fun(n);
    printf("Sum of given digits %d is %d",n,a);
    getch();
}
int fun(int n)
{
    int s,a;
    if(n<=9)
    return n;
    s=n%10+fun(n/10);
    return s;
}

