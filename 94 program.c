//Write a recursive function first n even natural number.
main()
{
    int n;
    printf("Enter a number :- ");
    scanf("%d",&n);
    n=2*n;
    fun(n);
    getch();
}
void fun(int n)
{
    if(n>0)
    {
        fun(n-2);
        printf("%d ",n);

    }
}




