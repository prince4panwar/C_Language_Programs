main()
{
    int a=2,b,c;
    printf("Enter a number :- ");
    scanf("%d",&b);
    printf("\nFirst %d natural number in reverse order is given below\n\n",b);
      b=2*b;
    while(a<=b)
    {
        printf("%d\n",b);
        b-=2;
    }
    getch();
}
