//Write a program to print all Prime number between two given numbers
main()
{
    int i,j,n,a;
    printf("Enter a first number   :- ");
    scanf("%d",&i);
    printf("Enter a second number  :- ");
    scanf("%d",&n);
    i++;
    n--;
    if(i<=1)
    {
        i=2;
    }
    for(i;i<=n;i++)
    {
        for(j=2;j<=n;j++)
        {
           a=i%j;
           if(a==0&&i!=j)
           {
            break;
           }
        }
          if(a!=0&&i!=j)
          {
            printf("%d ",i);
          }
    }
    getch();

}

