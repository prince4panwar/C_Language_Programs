//Write a program to calculate HCF of two given numbers
main()
{
    int m,n,i,hcf;
    printf("Enter two numbers for calculating HCF\n");
    printf("Enter a first number  :- ");
    scanf("%d",&m);
    printf("Enter a second number :- ");
    scanf("%d",&n);
    for(i=1;i<=m&&i<=n;i++)
    {
        if(m%i==0&&n%i==0)
        hcf=i;
    }
    printf("HCF of %d and %d is %d",m,n,hcf);
    getch();
}
