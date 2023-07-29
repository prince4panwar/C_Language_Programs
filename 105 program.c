 //Write a recursive function to print reverse digits of given number.
int fun(int);
main()
{
    int n,a;
    printf("Enter a number :- ");
    scanf("%d",&n);
    a=fun(n);
    printf("%d",a);
    getch();
}
int fun(int n)
{
    int s,a,k;
    if(n<=9)
    return n;
    a=n%10;
    printf("%d",a);
    k=fun(n/10);
    return k;
}


