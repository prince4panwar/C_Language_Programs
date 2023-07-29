/*Write a program to print star pattern like
****
***
**
*                              */
main()
{
    int i,j,n;
    printf("Enter a number :- ");
    scanf("%d",&n);
    for(i=1;i<=n;n--)
    {
        for(j=1;j<=n;j++)
        {
            printf("*");
        }
            printf("\n");

    }

}


