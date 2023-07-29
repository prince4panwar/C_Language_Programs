//Write a function to check whether a given number is Prime or not. (TSRS). (Return 1 if prime, otherwise Return 0)
int fun(int);
main()
{
    int a,b;
    printf("Enter a number :- ");
    scanf("%d",&a);
    b=fun(a);
    printf("%d",b);
    getch();
}
int fun(int x)
{
    int y,z;
    for(y=2;y<=x-1;y++)
    {
        if(x%y==0)
        return 0;
    }
    if(y>x)
    return 0;
    return 1;
}
