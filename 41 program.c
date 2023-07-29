main()
{
    int a=1,n,sum=0,k;
    printf("Enter a number :- ");
    scanf("%d",&n);
    while(a<=n)
    {
        k=a*a;
        sum=k+sum;
        printf("%d",a*a);
        a++;
        if(a<=n)
        printf(" + ");
    }
    printf("\nSum of square of first %d natural number is %d",n,sum);
    getch();
}
