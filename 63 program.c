/*Write a program to print star pattern like
****
 ***
  **
   *                                 */
main()
{
    int i,j,n;
    printf("Enter a number :- ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i<=j)
                printf("*");
            else
                printf(" ");
        }
            printf("\n");
    }
    getch();
}

