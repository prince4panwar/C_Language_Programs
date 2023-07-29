//Write a program to print next Prime number to a given number
main()
{
    int i,j,n,a,k;
    printf("Enter a number :- ");
    scanf("%d",&n);
    k=n;
    n++;
    for(i=0;i<=n;n++)
    {
        if(n==1)
        n++;
        for(j=2;j<=99;j++)
        {
           a=n%j;
           if(a==0&&n!=j)
           {
            break;
           }

        }
          if(a!=0&&n!=j)
          {
            printf("Next Prime number of a given number %d is %d ",k,n);
            break;
          }

    }
    getch();
}
