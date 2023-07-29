//Write  a recursive function to calculate product of first n natural number.
//Write  a recursive function to calculate factorial of a number.
main()
{
    int n,s;
    printf("Enter a number :- ");
    scanf("%d",&n);
    s=product(n);
    printf("%d",s);
    getch();
}
int product(int n)
{
    int s;
    if(n==1||n==0)
        return 1;
    s=n*product(n-1);


}
