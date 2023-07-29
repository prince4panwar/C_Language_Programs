//Write a program to check whether two given number are Co-Prime or not
main()
{
    int i,k,m,n;
    printf("Enter a first number :- ");
    scanf("%d",&m);
    printf("Enter a second number :- ");
    scanf("%d",&n);
     if(m==1||n==1)
    {
        printf("%d and %d are Co-Prime",m,n);
    }
   for(i=2;i<=m&&i<=n;i++)
   {
       if(m%i==0&&n%i==0)
       {
           printf("%d and %d are not Co-Prime",m,n);
           break;
       }


       if(m%i!=0||n%i!=0)
       {
           printf("%d and %d are Co-Prime",m,n);
           break;
       }
   }
   getch();

}

