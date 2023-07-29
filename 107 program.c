//Write a recursive function to calculate HCF of two numbers
void hcf(int a,int b);
void main()
{
    int a,b;
    printf("Enter first number  :- ");
    scanf("%d",&a);
    printf("Enter second number :- ");
    scanf("%d",&b);
    hcf(a,b);
    getch();
}
void hcf(int a,int b)
{
    int i=2;
    if(a%i==0&&b%i==0)
    {
       printf("%d ",i);
       hcf(a/i,b/i);
       i++;
    }

}
