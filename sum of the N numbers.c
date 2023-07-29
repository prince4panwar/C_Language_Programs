main()
{
    int a=1,n,c=0;
    printf("Enter a number :- ");
    scanf("%d",&n);
    while(a<=n)
    {
      c=a+c;
      printf("%d",a);
      a++;
      if(a<=n)
      printf(" + ");
    }
    printf(" = %d\n",c);
    printf("\nSum of the first %d natural numbers is %d",n,c);
    getch();
}
