main()
{
    int a=2,b,c;
    printf("Enter a number:- ");
    scanf("%d",&b);
    c=2*b;
    printf("\nFirst %d natural numbers is given below\n\n",b);
    while(a<=c)
    {
      printf("%d\n",a);
      a+=2;
    }
    getch();
}

