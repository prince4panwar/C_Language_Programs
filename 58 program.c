//Write a program to print all factors of a given number
main()
{
    int n,i,j,a,k;
    printf("Enter a number :- ");
    scanf("%d",&n);
    k=n;
    printf("All Factors of a given number is ");
    for(i=1;i<=k;i++)
    {
        for(j=2;j<=99;j++)
        {
            a=n%j;
            if(a==0)
            {
                a=n/j;
                n=a;
                printf("%d",j);
                if(n!=1)
                {
                    printf(" * ");
                }
                break;

            }
        }
        if(n==1)
        {
            break;
        }
    }
    getch();
}
