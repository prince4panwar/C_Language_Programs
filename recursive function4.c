//Write a function to find nth term of a Fibonacci series
void main()
{
    int a,n;
    printf("Enter term of Fibonacci series :- ");
    scanf("%d",&n);
    a=fiboterm(n);
    printf("%d",a);
}
int fiboterm(int n)
{
    int a=-1,b=1,c;
    c=a+b;
    b=c;
    a=b;
    if(n==0)
        return c;
    return fiboterm(n-1)+c;

}
