//Write a recursive function to print  first N natural number
main()
{
    int n;
    printf("Enter a number :- ");
    scanf("%d",&n);
    fun(n);
    getch();
}
void fun(int n)
{
    if(n>0)
    {
        fun(n-1);
        printf("%d ",n);
    }

}
