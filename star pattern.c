/*Write a program to print star pattern
    *
   * *
  * * *
 * * * *
* * * * *                  */
main()
{
    int i,j,n;
    printf("Enter a number :- ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(j==n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
