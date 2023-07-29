//Write a recursive function first n odd natural number in reverse order.
main()
{
    int n;
    printf("Enter a number :- ");
    scanf("%d",&n);
    fun(2*n-1);
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
