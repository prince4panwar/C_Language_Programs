//Write a recursive function to reverse of a given number
void main()
{
    int n;
    printf("Enter a number :- ");
    scanf("%d",&n);
    reverse(n);
    getch();
}
void reverse(int n)
{
    if(n==0)
     return n;
    printf("%d",n%10);
    reverse(n/10);
}
