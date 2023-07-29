//Write a program to print first N Prime numbers
main()
{
    int i=0,j,n,a,k;
    printf("Enter a number :- ");
    scanf("%d",&n);

    for(i=2;i<=2*n;i++)
    {

        if(i==1)
        i++;
        for(j=2;j<=99;j++)
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
