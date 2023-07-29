//Write a program to print all Prime number under 100
main()
{
    int i,j,a;
    printf("All Prime numbers under 100 is given below\n\n");
    for(i=2;i<=100;i++)
    {
        for(j=2;j<=100;j++)
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
