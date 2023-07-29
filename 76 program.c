main()
{
    int i,j,n;

    printf("Enter a number :- ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        char k='A';
        for(j=1;j<=n;j++)
        {
            if(j<=i)
                printf("%c",i-k);
            else
                printf(" ");
            k++;
        }

        printf("\n");

    }
}
