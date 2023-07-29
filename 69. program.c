/*Write a program to print star pattern like
*******
 *****
  ***
   *                                 */
main()
{
    int i,j,k,n;
    printf("Enter number of lines :- ");
    scanf("%d",&n);
    k=2*n-1;
    for(i=0;i<=n;i++)
    {
        for(j=1;j<=k;j++)
        {
            if(i<=j&&j<k)
                printf("*");

                printf(" ");
        }
        printf("\n");
    }
}
