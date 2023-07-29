main()
{
    int a=1,n,sum=0;
    printf("Enter a number :- ");
    scanf("%d",&n);
    while(a<=n)
    {
        sum=a*a*a+sum;
        a++;
    }
    printf("\nSum of cubes of first %d natural number is %d",n,sum);
    getch();
}
