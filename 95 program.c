////Write a recursive function first n even natural number in reverse order
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
        printf("%d ",n);
        fun(n-2);
    }
}
