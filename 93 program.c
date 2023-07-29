//Write a recursive function to print first n natural number in reverse order
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
       printf("%d ",n);
       fun(n-1);
    }

}
