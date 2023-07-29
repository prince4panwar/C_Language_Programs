main()
{
    int a=1,n,sum=0;
    printf("Enter a number :- ");
    scanf("%d",&n);
    while(a<=2*n)
    {
        sum=a+sum;
        printf("%d",a);
         a+=2;
        if(a<=2*n)
        {
            printf("+");
        }

    }
    printf("\nSum of first %d odd natural numbers is %d",n,sum);
    getch();
}
