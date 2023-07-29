//Write a program to calculate prime factors of a given numbers
main()
{
    int n,i,j,p,k;
    printf("Enter a number  :- ");
    scanf("%d",&n);
    k=n;
    for(i=1;i<=k;i++)
    {
        for(j=2;j<=99;j++)
        {
           if(n%j==0)
          {
           p=j;
           printf("%d ",p);
           n=n/j;
           break;
          }
        }
    }

    getch();
}

