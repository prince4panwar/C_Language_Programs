//Write a recursive function to find nth term of a Fibonacci series.
main()
{
    int n,k,a=-1,b=1,c;
    printf("Enter a number :- ");
    scanf("%d",&n);
    c=a+b;
    k=fibon(a,b,c,n);
    printf("%d term of Fibonacci series is %d",n,k);
    getch();
}

int fibon(int a, int b, int c, int n)
{
    int s;
    if(n==0)
    return c;
    c=a+b;
    a=b;
    b=c;
    s=fibon(a,b,c,n-1);
    return s;
}
